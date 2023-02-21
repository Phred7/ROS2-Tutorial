#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from example_interfaces.msg import String


class RobotNewsStationNode(Node):

    def __init__(self):
        super().__init__("robot_news_station")

        self.declare_parameter("robot_name", "C3P0")
        self.declare_parameter("publish_frequency", 2)
        self.robot_name: str = self.get_parameter("robot_name").value
        self.publisher = self.create_publisher(String, "robot_news", 10)  # 10 is the 'queue size' --- basically just a buffer
        self.timer = self.create_timer((1 / self.get_parameter("publish_frequency").value), self.publish_news)
        self.get_logger().info("robot News State has started")

    def publish_news(self):
        msg = String()
        msg.data = f"Hello subscriber! I'm {self.robot_name}"
        self.publisher.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = RobotNewsStationNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
