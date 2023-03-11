// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_robot_interfaces:msg/NewTurtleList.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACES__MSG__DETAIL__NEW_TURTLE_LIST__TRAITS_HPP_
#define MY_ROBOT_INTERFACES__MSG__DETAIL__NEW_TURTLE_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_robot_interfaces/msg/detail/new_turtle_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'new_turtle_array'
#include "my_robot_interfaces/msg/detail/new_turtle__traits.hpp"

namespace my_robot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const NewTurtleList & msg,
  std::ostream & out)
{
  out << "{";
  // member: new_turtle_array
  {
    if (msg.new_turtle_array.size() == 0) {
      out << "new_turtle_array: []";
    } else {
      out << "new_turtle_array: [";
      size_t pending_items = msg.new_turtle_array.size();
      for (auto item : msg.new_turtle_array) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NewTurtleList & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: new_turtle_array
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.new_turtle_array.size() == 0) {
      out << "new_turtle_array: []\n";
    } else {
      out << "new_turtle_array:\n";
      for (auto item : msg.new_turtle_array) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NewTurtleList & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace my_robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_robot_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_robot_interfaces::msg::NewTurtleList & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_robot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_robot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_robot_interfaces::msg::NewTurtleList & msg)
{
  return my_robot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_robot_interfaces::msg::NewTurtleList>()
{
  return "my_robot_interfaces::msg::NewTurtleList";
}

template<>
inline const char * name<my_robot_interfaces::msg::NewTurtleList>()
{
  return "my_robot_interfaces/msg/NewTurtleList";
}

template<>
struct has_fixed_size<my_robot_interfaces::msg::NewTurtleList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_robot_interfaces::msg::NewTurtleList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_robot_interfaces::msg::NewTurtleList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_ROBOT_INTERFACES__MSG__DETAIL__NEW_TURTLE_LIST__TRAITS_HPP_
