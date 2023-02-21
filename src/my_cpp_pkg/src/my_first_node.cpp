#include "rclcpp/rclcpp.hpp"

class MyNode : public rclcpp::Node
{

public:
    MyNode() : Node("cpp_test"), counter_(0)
    {
        RCLCPP_INFO(this->get_logger(), "Hello Cpp Node");

        timer = this->create_wall_timer(std::chrono::seconds(1), std::bind(&MyNode::timerCallback, this));
    }

private:
    void timerCallback()
    {
        counter_++;
        RCLCPP_INFO(this->get_logger(), "Hello %d", counter_);
    }

    rclcpp::TimerBase::SharedPtr timer;
    int counter_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);               // init ROS comms
    auto node = std::make_shared<MyNode>(); // creates a shared ptr to a node. Node created inside the exe it's not the exe
    rclcpp::spin(node);                     // keeps the node alive
    rclcpp::shutdown();                     // shuts down the node
    return 0;
}