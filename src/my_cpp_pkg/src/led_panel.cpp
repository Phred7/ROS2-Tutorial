#include "rclcpp/rclcpp.hpp"
#include "my_robot_interfaces/srv/set_led_panel_state.hpp"
#include "my_robot_interfaces/msg/led_panel_state.hpp"

using std::placeholders::_1;
using std::placeholders::_2;

class LEDPanelNode : public rclcpp::Node
{
public:
    LEDPanelNode() : Node("led_panel"), led_states_(3, 0)
    {
        this->declare_parameter("led_states", led_states_);
        set_led_state_server_ = this->create_service<my_robot_interfaces::srv::SetLEDPanelState>("set_led", std::bind(&LEDPanelNode::callbackSetLEDPanelState, this, _1, _2));
        led_state_publisher_ = this->create_publisher<my_robot_interfaces::msg::LEDPanelState>("led_panel_state", 10);
        led_state_timer_ = this->create_wall_timer(std::chrono::seconds(1), std::bind(&LEDPanelNode::publishLEDPanelState, this));
        RCLCPP_INFO(this->get_logger(), "LED Panel started.");
    }

private:    

    void callbackSetLEDPanelState(const my_robot_interfaces::srv::SetLEDPanelState::Request::SharedPtr request, const my_robot_interfaces::srv::SetLEDPanelState::Response::SharedPtr response) {
        if (request->led_number > 2) {
            response->success = false;
            RCLCPP_INFO(this->get_logger(), "Failed to set LED %ld to %i. LED %ld out of bounds.", request->led_number, request->state, request->led_number);
        } else {
            led_states_[request->led_number] = request->state;
            response->success = true;
            RCLCPP_INFO(this->get_logger(), "LED %ld set to %i", request->led_number, request->state);
        }
    }

    void publishLEDPanelState() {
        auto msg = my_robot_interfaces::msg::LEDPanelState();
        msg.led_states = led_states_;
        led_state_publisher_->publish(msg);
    }

    rclcpp::Publisher<my_robot_interfaces::msg::LEDPanelState>::SharedPtr led_state_publisher_;
    rclcpp::Service<my_robot_interfaces::srv::SetLEDPanelState>::SharedPtr set_led_state_server_;
    rclcpp::TimerBase::SharedPtr led_state_timer_;
    std::vector<int64_t> led_states_;

};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<LEDPanelNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
