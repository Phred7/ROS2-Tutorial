// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_robot_interfaces:msg/NewTurtle.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACES__MSG__DETAIL__NEW_TURTLE__STRUCT_H_
#define MY_ROBOT_INTERFACES__MSG__DETAIL__NEW_TURTLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/NewTurtle in the package my_robot_interfaces.
typedef struct my_robot_interfaces__msg__NewTurtle
{
  float x;
  float y;
  rosidl_runtime_c__String name;
} my_robot_interfaces__msg__NewTurtle;

// Struct for a sequence of my_robot_interfaces__msg__NewTurtle.
typedef struct my_robot_interfaces__msg__NewTurtle__Sequence
{
  my_robot_interfaces__msg__NewTurtle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_robot_interfaces__msg__NewTurtle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_ROBOT_INTERFACES__MSG__DETAIL__NEW_TURTLE__STRUCT_H_
