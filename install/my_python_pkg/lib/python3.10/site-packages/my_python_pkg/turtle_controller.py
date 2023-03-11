#!/usr/bin/env python3
import math
from threading import Thread
from typing import List, Tuple
import rclpy
from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup, ReentrantCallbackGroup
from rclpy.node import Node
from functools import partial

from turtlesim.msg import Pose
from geometry_msgs.msg import Twist
from my_robot_interfaces.msg import NewTurtle
from my_robot_interfaces.msg import NewTurtleList
from my_robot_interfaces.msg import KillTurtle


class TurtleController(Node):
    
    def __init__(self):
        super().__init__("turtle_controller")
        self.main_turtle_name: str = "turtle1"
        self.main_turtle_cmd_topic: str = f"/{self.main_turtle_name}/cmd_vel"
        self.new_turtle_subscriber = self.create_subscription(NewTurtleList, "new_turtles", self.callback_new_turtles, 10)
        self.main_turtle_pose_subscriber = self.create_subscription(Pose, f"/{self.main_turtle_name}/pose", self.callback_main_turtle_pose, 10)
        self.main_turtle_velocity_publisher = self.create_publisher(Twist, self.main_turtle_cmd_topic, 10)
        self.turtle_kill_publisher = self.create_publisher(KillTurtle, "kill_turtle", 10)
        self.living_turtles: List[Tuple[float, float, str]] = []
        self.controller_alive: bool = True
        self.main_x: float = 0
        self.main_y: float = 0
        self.main_theta: float = 0
        self.control_loop_timer = self.create_timer(0.1, self.run)  # decreasing timing will lead to instability
        self.get_logger().info("Turtle Controller started")

    def run(self):
        if self.living_turtles:
            turtle = self.living_turtles[0]
            target_error: float = self.move_turtle(turtle[0], turtle[1])
            if target_error < 0.6:
                self.get_logger().info("TURTLE REACHED!")
                self.stop_turtle()
                self.living_turtles.pop()
                self.call_kill_turtle(turtle_name=turtle[2])
        else:
            self.stop_turtle()

    def move_turtle(self, x_target: float, y_target: float) -> float:
        velocity_message = Twist()
        k_linear: float = 3
        k_angular: float = 7.5
        distance: float = abs(math.sqrt(((x_target - self.main_x) ** 2) + ((y_target - self.main_y) ** 2)))
        linear_velocity = distance * k_linear
        desired_angle = math.atan2(y_target-self.main_y, x_target-self.main_x)
        
        if desired_angle-self.main_theta > math.pi:
            desired_angle -= 2*math.pi
        elif desired_angle < -math.pi:
            desired_angle += 2*math.pi

        angular_velocity = (desired_angle-self.main_theta)*k_angular
        self.get_logger().debug(f"X: {self.main_x} Y: {self.main_y} LIN_VEL: {linear_velocity} ANG_VEL: {angular_velocity}")
        velocity_message.linear.x = linear_velocity
        velocity_message.angular.z = angular_velocity
        self.call_move_turtle(velocity_message)
        return distance

    def stop_turtle(self):
        stop_message = Twist()
        stop_message.linear.x = 0.0
        stop_message.angular.z = 0.0
        self.call_move_turtle(stop_message)

    def call_move_turtle(self, twist: Twist):
        self.main_turtle_velocity_publisher.publish(twist)

    def callback_main_turtle_pose(self, msg):
        self.main_x = msg.x
        self.main_y = msg.y
        self.main_theta = msg.theta

    def callback_new_turtles(self, msg):
        self.get_logger().debug(f"new turtles: {len(msg.new_turtle_array)}")
        turt = []
        for item in msg.new_turtle_array:
            turt.append((item.x, item.y, item.name))
        self.living_turtles = turt

    def call_kill_turtle(self, turtle_name: str):
        msg = KillTurtle()
        msg.name = turtle_name
        self.turtle_kill_publisher.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = TurtleController()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
