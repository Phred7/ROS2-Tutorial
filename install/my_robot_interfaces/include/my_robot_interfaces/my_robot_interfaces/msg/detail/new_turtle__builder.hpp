// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_robot_interfaces:msg/NewTurtle.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACES__MSG__DETAIL__NEW_TURTLE__BUILDER_HPP_
#define MY_ROBOT_INTERFACES__MSG__DETAIL__NEW_TURTLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_robot_interfaces/msg/detail/new_turtle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_NewTurtle_name
{
public:
  explicit Init_NewTurtle_name(::my_robot_interfaces::msg::NewTurtle & msg)
  : msg_(msg)
  {}
  ::my_robot_interfaces::msg::NewTurtle name(::my_robot_interfaces::msg::NewTurtle::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::msg::NewTurtle msg_;
};

class Init_NewTurtle_y
{
public:
  explicit Init_NewTurtle_y(::my_robot_interfaces::msg::NewTurtle & msg)
  : msg_(msg)
  {}
  Init_NewTurtle_name y(::my_robot_interfaces::msg::NewTurtle::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_NewTurtle_name(msg_);
  }

private:
  ::my_robot_interfaces::msg::NewTurtle msg_;
};

class Init_NewTurtle_x
{
public:
  Init_NewTurtle_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NewTurtle_y x(::my_robot_interfaces::msg::NewTurtle::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_NewTurtle_y(msg_);
  }

private:
  ::my_robot_interfaces::msg::NewTurtle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::msg::NewTurtle>()
{
  return my_robot_interfaces::msg::builder::Init_NewTurtle_x();
}

}  // namespace my_robot_interfaces

#endif  // MY_ROBOT_INTERFACES__MSG__DETAIL__NEW_TURTLE__BUILDER_HPP_
