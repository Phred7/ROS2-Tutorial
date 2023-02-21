#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from std_msgs.msg import Int64


class NumberPublisherNode(Node):
    def __init__(self):
        super().__init__("number_publisher")
        self.declare_parameter("number", 2)
        self.number: int = self.get_parameter("number").value
        self.publisher = self.create_publisher(Int64, "number", 10)
        self.timer = self.create_timer(0.25, self.publish_number)
        self.get_logger().info("number publisher started")

    def publish_number(self):
        msg = Int64()
        msg.data = self.number
        self.publisher.publish(msg)


def main(args=None):
    rclpy.init(args=args)
    node = NumberPublisherNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
