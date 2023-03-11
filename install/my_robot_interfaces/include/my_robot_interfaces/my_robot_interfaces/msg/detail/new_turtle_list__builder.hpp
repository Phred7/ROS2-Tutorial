// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_robot_interfaces:msg/NewTurtleList.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACES__MSG__DETAIL__NEW_TURTLE_LIST__BUILDER_HPP_
#define MY_ROBOT_INTERFACES__MSG__DETAIL__NEW_TURTLE_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_robot_interfaces/msg/detail/new_turtle_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_NewTurtleList_new_turtle_array
{
public:
  Init_NewTurtleList_new_turtle_array()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_robot_interfaces::msg::NewTurtleList new_turtle_array(::my_robot_interfaces::msg::NewTurtleList::_new_turtle_array_type arg)
  {
    msg_.new_turtle_array = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::msg::NewTurtleList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::msg::NewTurtleList>()
{
  return my_robot_interfaces::msg::builder::Init_NewTurtleList_new_turtle_array();
}

}  // namespace my_robot_interfaces

#endif  // MY_ROBOT_INTERFACES__MSG__DETAIL__NEW_TURTLE_LIST__BUILDER_HPP_
