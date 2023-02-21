// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_robot_interfaces:srv/SetLEDPanelStateCustom.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACES__SRV__DETAIL__SET_LED_PANEL_STATE_CUSTOM__STRUCT_H_
#define MY_ROBOT_INTERFACES__SRV__DETAIL__SET_LED_PANEL_STATE_CUSTOM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetLEDPanelStateCustom in the package my_robot_interfaces.
typedef struct my_robot_interfaces__srv__SetLEDPanelStateCustom_Request
{
  int64_t led_number;
  bool state;
} my_robot_interfaces__srv__SetLEDPanelStateCustom_Request;

// Struct for a sequence of my_robot_interfaces__srv__SetLEDPanelStateCustom_Request.
typedef struct my_robot_interfaces__srv__SetLEDPanelStateCustom_Request__Sequence
{
  my_robot_interfaces__srv__SetLEDPanelStateCustom_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_robot_interfaces__srv__SetLEDPanelStateCustom_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetLEDPanelStateCustom in the package my_robot_interfaces.
typedef struct my_robot_interfaces__srv__SetLEDPanelStateCustom_Response
{
  bool actual_states[3];
} my_robot_interfaces__srv__SetLEDPanelStateCustom_Response;

// Struct for a sequence of my_robot_interfaces__srv__SetLEDPanelStateCustom_Response.
typedef struct my_robot_interfaces__srv__SetLEDPanelStateCustom_Response__Sequence
{
  my_robot_interfaces__srv__SetLEDPanelStateCustom_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_robot_interfaces__srv__SetLEDPanelStateCustom_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_ROBOT_INTERFACES__SRV__DETAIL__SET_LED_PANEL_STATE_CUSTOM__STRUCT_H_
