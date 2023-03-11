#!/usr/bin/env python3
import random
from typing import Dict, List, Tuple
import rclpy
from rclpy.node import Node
from functools import partial

from turtlesim.srv import Kill
from turtlesim.srv import Spawn
from my_robot_interfaces.msg import NewTurtle
from my_robot_interfaces.msg import NewTurtleList
from my_robot_interfaces.msg import KillTurtle

class TurtleSpawner(Node):

    def __init__(self) -> None:
        super().__init__("turtle_spawner")
        self.declare_parameter("publish_frequency", 0.5)
        self.timer = self.create_timer((1 / self.get_parameter("publish_frequency").value), self.spawn_new_turtle_randomly)
        self.publish_timer = self.create_timer(0.5, self.publish_turtles)
        self.publisher = self.create_publisher(NewTurtleList, "new_turtles", 10)
        self.death_request_subscriber = self.create_subscription(KillTurtle, "kill_turtle", self.death_request_callback, 10)
        self.get_logger().info("Turtle Spawner started")
        self.new_turtle_number: int = 2
        self.living_turtles: Dict[str: Tuple(float, float)] = {}

    def spawn_new_turtle_randomly(self):
        x: float = random.uniform(1, 10)
        y: float = random.uniform(1, 10)
        theta: float = float(random.randint(0, 360))
        name: str = f"turtle{self.new_turtle_number}"
        self.get_logger().info(f"name: {name} x: {x} y: {y} theta: {theta}")
        self.call_spawn_new_turtle(x, y, theta, name)

    def call_spawn_new_turtle(self, x: float, y: float, theta: float, name: str):
        client = self.create_client(Spawn, "spawn")
        while not client.wait_for_service(timeout_sec=1.0):
            self.get_logger().warning("Waiting for turtle server...")
        request = Spawn.Request()
        request.x = x
        request.y = y
        request.theta = theta
        request.name = name
        future = client.call_async(request)
        future.add_done_callback(partial(self.callback_call_spawn_new_turtle, x=x, y=y, theta=theta, name=name))

    def callback_call_spawn_new_turtle(self, future, x: float, y: float, theta: float, name: str):
        try:
            response = future.result()
            self.get_logger().info(f"Turtle name: {response.name}")
            self.living_turtles[name] = (x, y)
            self.new_turtle_number += 1
        except Exception as e:
            self.get_logger().error(f"Service call failed {e}")

    def death_request_callback(self, msg):
        self.call_kill_turtle(turtle_name=msg.name)

    def call_kill_turtle(self, turtle_name: str):
        self.get_logger().info(f"Killing '{turtle_name}'")
        client = self.create_client(Kill, "kill")
        while not client.wait_for_service(timeout_sec=0.1):
            self.get_logger().warning("Waiting for Turtle...")

        request = Kill.Request()
        request.name = turtle_name

        future = client.call_async(request)
        future.add_done_callback(partial(self.callback_kill_turtle, name=turtle_name))

    def callback_kill_turtle(self, future, name: str):
        try:
            response = future.result()
            self.living_turtles.pop(name)
            self.get_logger().info(f"Turtle '{name}' killed")
        except Exception as e:
            self.get_logger().error(f"Service call failed {e}")
    
    # def publish_location(self, name: str, x: float, y: float):
    #     msg = NewTurtle()
    #     msg.x = x
    #     msg.y = y
    #     msg.name = name
    #     self.publisher.publish(msg)
    #     self.get_logger().info(f"New turtle {name} published")

    def publish_turtles(self):
        msg: NewTurtleList = NewTurtleList()
        turtles: List[NewTurtle] = []
        if self.living_turtles:
            for key, value in self.living_turtles.items():
                new_turtle: NewTurtle = NewTurtle()
                new_turtle.name = key
                new_turtle.x = value[0]
                new_turtle.y = value[1]
                turtles.append(new_turtle)
        msg.new_turtle_array = turtles
        self.publisher.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = TurtleSpawner()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
3