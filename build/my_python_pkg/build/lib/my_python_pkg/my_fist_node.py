#!/usr/bin/env python3
import rclpy
from rclpy.node import Node


def main(args=None) -> None:
    rclpy.init(args=args)  # must be the first line of every node
    node = Node("py_test")
    node.get_logger().info("Hello ROS2")
    rclpy.spin(node)  # pause node; allow it to continue to exist
    rclpy.shutdown()  # must be the last line of every node


if __name__ == "__main__":
    main()
