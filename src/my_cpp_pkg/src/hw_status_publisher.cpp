#include "rclcpp/rclcpp.hpp"
#include "my_robot_interfaces/msg/hardware_status.hpp"

class HardwareStatusPublisherNode : public rclcpp::Node
{
public:
    HardwareStatusPublisherNode() : Node("hardware_status_publisher")
    {
        hardware_status_publisher_ = this->create_publisher<my_robot_interfaces::msg::HardwareStatus>("hardware_status", 10);
        hardware_status_timer_ = this->create_wall_timer(std::chrono::seconds(1), std::bind(&HardwareStatusPublisherNode::publishHardwareStatus, this));
        RCLCPP_INFO(this->get_logger(), "Hardware Status Publisher started");
    }

private:

    void publishHardwareStatus() {
        auto msg = my_robot_interfaces::msg::HardwareStatus();
        msg.temperature = 97;
        msg.are_motors_ready = false;
        msg.debug_message = "Motors are overheating!";
        hardware_status_publisher_->publish(msg);
    }

    rclcpp::Publisher<my_robot_interfaces::msg::HardwareStatus>::SharedPtr hardware_status_publisher_;
    rclcpp::TimerBase::SharedPtr hardware_status_timer_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<HardwareStatusPublisherNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
