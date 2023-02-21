#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from functools import partial

from my_robot_interfaces.srv import SetLEDPanelState


class BatteryNode(Node):
    
    def __init__(self):
        super().__init__("battery")
        while not self.create_client(SetLEDPanelState, "set_led").wait_for_service(timeout_sec=1.0):
            self.get_logger().warning("Waiting for LED panel...")
        self.battery_full: bool = True
        self.last_time = self.get_current_time_seconds()
        self.timer = self.create_timer(0.25, self.check_battery_state)
        self.get_logger().info("Battery has started")


    def call_set_led_panel_state(self, led_index: int, led_state: bool):
        client = self.create_client(SetLEDPanelState, "set_led")
        while not client.wait_for_service(timeout_sec=1.0):
            self.get_logger().warning("Waiting for LED panel...")

        request = SetLEDPanelState.Request()
        request.led_number = led_index
        request.state = led_state

        future = client.call_async(request)
        future.add_done_callback(partial(self.callback_call_set_led_panel_state, led_index=led_index, led_state=led_state))

    def callback_call_set_led_panel_state(self, future, led_index: int, led_state: bool):
        try:
            response = future.result()
            self.get_logger().info(f"Setting LED {led_index} to {led_state} was {response.success}")
        except Exception as e:
            self.get_logger().error(f"Setting LED {led_index} to {led_state} failed {e}")

    def check_battery_state(self):
        time_now = self.get_current_time_seconds()
        if self.battery_full:
            if time_now - self.last_time > 4.0:
                self.battery_full = False
                self.last_time = time_now
                self.set_battery_state(battery_full=False)
        else:
            if time_now - self.last_time > 6.0:
                self.battery_full = True
                self.last_time = time_now
                self.set_battery_state(battery_full=True)
                
    def set_battery_state(self, battery_full: bool):
        self.call_set_led_panel_state(2, battery_full)

    def get_current_time_seconds(self):
        secs, nsecs = self.get_clock().now().seconds_nanoseconds()
        return secs + nsecs / 1000000000.0


def main(args=None):
    rclpy.init(args=args)
    node = BatteryNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
