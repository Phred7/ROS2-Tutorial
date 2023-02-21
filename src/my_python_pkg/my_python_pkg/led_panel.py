#!/usr/bin/env python3
from typing import List
import rclpy
from rclpy.node import Node

from my_robot_interfaces.msg import LEDPanelState
from my_robot_interfaces.srv import SetLEDPanelState


class LEDPanelNode(Node):
    
    def __init__(self):
        super().__init__("led_panel")
        self.led_states: List[int] = [0 , 0 , 0]
        self.publisher = self.create_publisher(LEDPanelState, "led_panel_state", 10)
        self.server = self.create_service(SetLEDPanelState, "set_led", self.callback_set_led_panel_state)  # service name should start with a verb; ex: 'add'
        self.timer = self.create_timer(2, self.publish_led_panel_state)
        self.get_logger().info("LED Panel has started")

    def publish_led_panel_state(self):
        msg = LEDPanelState()
        msg.led_states = self.led_states
        self.publisher.publish(msg)

    def callback_set_led_panel_state(self, request, response):  # callback should be of the fmt: 'callback_<service_name>'
        if request.led_number > (len(self.led_states) - 1) or request.led_number < 0:
            response.success = False
        else:
            self.led_states[request.led_number] = request.state
            self.get_logger().info(f"LED {request.led_number} set to {request.state}")
            response.success = True
            self.publish_led_panel_state()
        return response



def main(args=None):
    rclpy.init(args=args)
    node = LEDPanelNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
