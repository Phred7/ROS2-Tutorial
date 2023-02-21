#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

class MyNode(Node):

    def __init__(self):
        super().__init__("py_test")  # node name
        self.counter: int = 0
        self.get_logger().info("Hello ROS2")
        self.create_timer(0.5, self.timer_callback)

    def timer_callback(self):
        self.counter += 1
        self.get_logger().info(f"Hello {self.counter}")


def main(args=None):
    rclpy.init(args=args)  # must be the first line of every node
    node = MyNode()
    rclpy.spin(node)  # pause node; allow it to continue to exist
    rclpy.shutdown()  # must be the last line of every node


if __name__ == "__main__":
    main()
