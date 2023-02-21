#include "rclcpp/rclcpp.hpp"
#include "my_robot_interfaces/srv/set_led_panel_state.hpp"

class BatteryNode : public rclcpp::Node
{
public:
    BatteryNode() : Node("battery"), battery_full_(false)
    {
        while (!this->create_client<my_robot_interfaces::srv::SetLEDPanelState>("set_led")->wait_for_service(std::chrono::seconds(1)))
        {
            RCLCPP_WARN(this->get_logger(), "Waiting for the server to be up.");
        }
        last_time_ = this->get_clock()->now().seconds();
        battery_timer_ = this->create_wall_timer(std::chrono::milliseconds(500), std::bind(&BatteryNode::checkBatteryState, this));
        RCLCPP_INFO(this->get_logger(), "Battery started.");
    }

    void callSetLEDPanelState(int ledIndex, bool ledState)
    {

        auto client = this->create_client<my_robot_interfaces::srv::SetLEDPanelState>("set_led");
        while (!client->wait_for_service(std::chrono::seconds(1)))
        {
            RCLCPP_WARN(this->get_logger(), "Waiting for the server to be up.");
        }

        auto request = std::make_shared<my_robot_interfaces::srv::SetLEDPanelState::Request>();
        request->led_number = ledIndex;
        request->state = ledState;

        auto future = client->async_send_request(request);

        try
        {
            auto response = future.get(); // blocks the thread but, stops the node from spinning. Since the node is not spinning .get() will never return.
            RCLCPP_INFO(this->get_logger(), "Battery set properly: %i", response->success);
        }
        catch (const std::exception &e)
        {
            RCLCPP_ERROR(this->get_logger(), "Service call failed");
        }
    }

    void checkBatteryState() {
        double current_time = this->get_clock()->now().seconds();
        if (battery_full_ == true) {
            if (current_time - last_time_ > 4.0) {
                last_time_= current_time;
                setBatteryEmpty();
            }
        } else {
            if (current_time - last_time_ > 6.0) {
                last_time_= current_time;
                setBatteryFull();
            }
        }
    }

    void setBatteryEmpty()
    {
        battery_full_ = false;
        threads_.push_back(std::thread(std::bind(&BatteryNode::callSetLEDPanelState, this, 2, true)));
        RCLCPP_INFO(this->get_logger(), "Battery Empty");
    }

    void setBatteryFull()
    {
        battery_full_ = true;
        threads_.push_back(std::thread(std::bind(&BatteryNode::callSetLEDPanelState, this, 2, false)));
        RCLCPP_INFO(this->get_logger(), "Battery Full");
    }

private:
    std::vector<std::thread> threads_;
    rclcpp::TimerBase::SharedPtr battery_timer_;
    double last_time_;
    bool battery_full_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<BatteryNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
