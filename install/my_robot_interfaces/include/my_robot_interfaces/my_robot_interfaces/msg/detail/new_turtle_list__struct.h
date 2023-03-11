// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_robot_interfaces:msg/NewTurtleList.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACES__MSG__DETAIL__NEW_TURTLE_LIST__STRUCT_H_
#define MY_ROBOT_INTERFACES__MSG__DETAIL__NEW_TURTLE_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'new_turtle_array'
#include "my_robot_interfaces/msg/detail/new_turtle__struct.h"

/// Struct defined in msg/NewTurtleList in the package my_robot_interfaces.
typedef struct my_robot_interfaces__msg__NewTurtleList
{
  my_robot_interfaces__msg__NewTurtle__Sequence new_turtle_array;
} my_robot_interfaces__msg__NewTurtleList;

// Struct for a sequence of my_robot_interfaces__msg__NewTurtleList.
typedef struct my_robot_interfaces__msg__NewTurtleList__Sequence
{
  my_robot_interfaces__msg__NewTurtleList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_robot_interfaces__msg__NewTurtleList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_ROBOT_INTERFACES__MSG__DETAIL__NEW_TURTLE_LIST__STRUCT_H_
