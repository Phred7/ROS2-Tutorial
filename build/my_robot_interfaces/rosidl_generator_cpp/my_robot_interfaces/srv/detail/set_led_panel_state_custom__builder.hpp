// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_robot_interfaces:srv/SetLEDPanelStateCustom.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACES__SRV__DETAIL__SET_LED_PANEL_STATE_CUSTOM__BUILDER_HPP_
#define MY_ROBOT_INTERFACES__SRV__DETAIL__SET_LED_PANEL_STATE_CUSTOM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_robot_interfaces/srv/detail/set_led_panel_state_custom__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetLEDPanelStateCustom_Request_state
{
public:
  explicit Init_SetLEDPanelStateCustom_Request_state(::my_robot_interfaces::srv::SetLEDPanelStateCustom_Request & msg)
  : msg_(msg)
  {}
  ::my_robot_interfaces::srv::SetLEDPanelStateCustom_Request state(::my_robot_interfaces::srv::SetLEDPanelStateCustom_Request::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::srv::SetLEDPanelStateCustom_Request msg_;
};

class Init_SetLEDPanelStateCustom_Request_led_number
{
public:
  Init_SetLEDPanelStateCustom_Request_led_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLEDPanelStateCustom_Request_state led_number(::my_robot_interfaces::srv::SetLEDPanelStateCustom_Request::_led_number_type arg)
  {
    msg_.led_number = std::move(arg);
    return Init_SetLEDPanelStateCustom_Request_state(msg_);
  }

private:
  ::my_robot_interfaces::srv::SetLEDPanelStateCustom_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::srv::SetLEDPanelStateCustom_Request>()
{
  return my_robot_interfaces::srv::builder::Init_SetLEDPanelStateCustom_Request_led_number();
}

}  // namespace my_robot_interfaces


namespace my_robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetLEDPanelStateCustom_Response_actual_states
{
public:
  Init_SetLEDPanelStateCustom_Response_actual_states()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_robot_interfaces::srv::SetLEDPanelStateCustom_Response actual_states(::my_robot_interfaces::srv::SetLEDPanelStateCustom_Response::_actual_states_type arg)
  {
    msg_.actual_states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::srv::SetLEDPanelStateCustom_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::srv::SetLEDPanelStateCustom_Response>()
{
  return my_robot_interfaces::srv::builder::Init_SetLEDPanelStateCustom_Response_actual_states();
}

}  // namespace my_robot_interfaces

#endif  // MY_ROBOT_INTERFACES__SRV__DETAIL__SET_LED_PANEL_STATE_CUSTOM__BUILDER_HPP_
