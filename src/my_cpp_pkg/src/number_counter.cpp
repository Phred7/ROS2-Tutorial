#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/int64.hpp"
#include "std_srvs/srv/set_bool.hpp"

using std::placeholders::_1;
using std::placeholders::_2;

class NumberCounterNode : public rclcpp::Node
{
public:
    NumberCounterNode() : Node("number_counter"), counter_(0)
    {
        server_ = this->create_service<std_srvs::srv::SetBool>("reset_number_count", std::bind(&NumberCounterNode::callbackResetNumberCount, this, _1, _2));
        subscriber_ = this->create_subscription<std_msgs::msg::Int64>("number", 10, std::bind(&NumberCounterNode::callbackNumber, this, _1));
        publisher_ = this->create_publisher<std_msgs::msg::Int64>("number_count", 10);
        RCLCPP_INFO(this->get_logger(), "NumberCounter started");
    }

private:
    void callbackNumber(const std_msgs::msg::Int64::SharedPtr msg) {    
        counter_+= msg->data;
        auto counter_msg = std_msgs::msg::Int64();
        counter_msg.data = counter_;
        publisher_->publish(counter_msg);
    }

    void callbackResetNumberCount(const std_srvs::srv::SetBool::Request::SharedPtr request, const std_srvs::srv::SetBool::Response::SharedPtr response) {
        if (request->data) {
            counter_ = 0;
        }
        if (counter_ == 0) {
            response->success = true;
            response->message = "";
        } else {
            response->success = false;
            response->message = "Counter not reset 0.";
        }
    }

    long long counter_;
    rclcpp::Subscription<std_msgs::msg::Int64>::SharedPtr subscriber_;
    rclcpp::Publisher<std_msgs::msg::Int64>::SharedPtr publisher_;
    rclcpp::Service<std_srvs::srv::SetBool>::SharedPtr server_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<NumberCounterNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
