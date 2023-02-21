#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from functools import partial

from example_interfaces.srv import AddTwoInts

class AddTwoIntsClientNode(Node):
    
    def __init__(self):
        super().__init__("add_two_ints_client")
        self.call_add_two_ints_server(6, 7)
        self.call_add_two_ints_server(9, 3)
        self.call_add_two_ints_server(14, 8)
        self.call_add_two_ints_server(11, 70)
        self.call_add_two_ints_server(634, 777)

    def call_add_two_ints_server(self, a: int, b: int):
        client = self.create_client(AddTwoInts, "add_two_ints")
        while not client.wait_for_service(timeout_sec=1.0):
            self.get_logger().warning("Waiting for Server Add Two Ints...")

        request = AddTwoInts.Request()
        request.a = a
        request.b = b

        future = client.call_async(request)
        future.add_done_callback(partial(self.callback_call_add_two_ints, a=a, b=b))

    def callback_call_add_two_ints(self, future, a: int, b: int):
        try:
            response = future.result()
            self.get_logger().info(f"{a} + {b} = {response.sum}")
        except Exception as e:
            self.get_logger().error(f"Service call failed {e}")


def main(args=None):
    rclpy.init(args=args)
    node = AddTwoIntsClientNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
