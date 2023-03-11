// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_robot_interfaces:msg/NewTurtleList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_robot_interfaces/msg/detail/new_turtle_list__rosidl_typesupport_introspection_c.h"
#include "my_robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_robot_interfaces/msg/detail/new_turtle_list__functions.h"
#include "my_robot_interfaces/msg/detail/new_turtle_list__struct.h"


// Include directives for member types
// Member `new_turtle_array`
#include "my_robot_interfaces/msg/new_turtle.h"
// Member `new_turtle_array`
#include "my_robot_interfaces/msg/detail/new_turtle__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_robot_interfaces__msg__NewTurtleList__rosidl_typesupport_introspection_c__NewTurtleList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_robot_interfaces__msg__NewTurtleList__init(message_memory);
}

void my_robot_interfaces__msg__NewTurtleList__rosidl_typesupport_introspection_c__NewTurtleList_fini_function(void * message_memory)
{
  my_robot_interfaces__msg__NewTurtleList__fini(message_memory);
}

size_t my_robot_interfaces__msg__NewTurtleList__rosidl_typesupport_introspection_c__size_function__NewTurtleList__new_turtle_array(
  const void * untyped_member)
{
  const my_robot_interfaces__msg__NewTurtle__Sequence * member =
    (const my_robot_interfaces__msg__NewTurtle__Sequence *)(untyped_member);
  return member->size;
}

const void * my_robot_interfaces__msg__NewTurtleList__rosidl_typesupport_introspection_c__get_const_function__NewTurtleList__new_turtle_array(
  const void * untyped_member, size_t index)
{
  const my_robot_interfaces__msg__NewTurtle__Sequence * member =
    (const my_robot_interfaces__msg__NewTurtle__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_robot_interfaces__msg__NewTurtleList__rosidl_typesupport_introspection_c__get_function__NewTurtleList__new_turtle_array(
  void * untyped_member, size_t index)
{
  my_robot_interfaces__msg__NewTurtle__Sequence * member =
    (my_robot_interfaces__msg__NewTurtle__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_robot_interfaces__msg__NewTurtleList__rosidl_typesupport_introspection_c__fetch_function__NewTurtleList__new_turtle_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const my_robot_interfaces__msg__NewTurtle * item =
    ((const my_robot_interfaces__msg__NewTurtle *)
    my_robot_interfaces__msg__NewTurtleList__rosidl_typesupport_introspection_c__get_const_function__NewTurtleList__new_turtle_array(untyped_member, index));
  my_robot_interfaces__msg__NewTurtle * value =
    (my_robot_interfaces__msg__NewTurtle *)(untyped_value);
  *value = *item;
}

void my_robot_interfaces__msg__NewTurtleList__rosidl_typesupport_introspection_c__assign_function__NewTurtleList__new_turtle_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  my_robot_interfaces__msg__NewTurtle * item =
    ((my_robot_interfaces__msg__NewTurtle *)
    my_robot_interfaces__msg__NewTurtleList__rosidl_typesupport_introspection_c__get_function__NewTurtleList__new_turtle_array(untyped_member, index));
  const my_robot_interfaces__msg__NewTurtle * value =
    (const my_robot_interfaces__msg__NewTurtle *)(untyped_value);
  *item = *value;
}

bool my_robot_interfaces__msg__NewTurtleList__rosidl_typesupport_introspection_c__resize_function__NewTurtleList__new_turtle_array(
  void * untyped_member, size_t size)
{
  my_robot_interfaces__msg__NewTurtle__Sequence * member =
    (my_robot_interfaces__msg__NewTurtle__Sequence *)(untyped_member);
  my_robot_interfaces__msg__NewTurtle__Sequence__fini(member);
  return my_robot_interfaces__msg__NewTurtle__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember my_robot_interfaces__msg__NewTurtleList__rosidl_typesupport_introspection_c__NewTurtleList_message_member_array[1] = {
  {
    "new_turtle_array",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces__msg__NewTurtleList, new_turtle_array),  // bytes offset in struct
    NULL,  // default value
    my_robot_interfaces__msg__NewTurtleList__rosidl_typesupport_introspection_c__size_function__NewTurtleList__new_turtle_array,  // size() function pointer
    my_robot_interfaces__msg__NewTurtleList__rosidl_typesupport_introspection_c__get_const_function__NewTurtleList__new_turtle_array,  // get_const(index) function pointer
    my_robot_interfaces__msg__NewTurtleList__rosidl_typesupport_introspection_c__get_function__NewTurtleList__new_turtle_array,  // get(index) function pointer
    my_robot_interfaces__msg__NewTurtleList__rosidl_typesupport_introspection_c__fetch_function__NewTurtleList__new_turtle_array,  // fetch(index, &value) function pointer
    my_robot_interfaces__msg__NewTurtleList__rosidl_typesupport_introspection_c__assign_function__NewTurtleList__new_turtle_array,  // assign(index, value) function pointer
    my_robot_interfaces__msg__NewTurtleList__rosidl_typesupport_introspection_c__resize_function__NewTurtleList__new_turtle_array  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_robot_interfaces__msg__NewTurtleList__rosidl_typesupport_introspection_c__NewTurtleList_message_members = {
  "my_robot_interfaces__msg",  // message namespace
  "NewTurtleList",  // message name
  1,  // number of fields
  sizeof(my_robot_interfaces__msg__NewTurtleList),
  my_robot_interfaces__msg__NewTurtleList__rosidl_typesupport_introspection_c__NewTurtleList_message_member_array,  // message members
  my_robot_interfaces__msg__NewTurtleList__rosidl_typesupport_introspection_c__NewTurtleList_init_function,  // function to initialize message memory (memory has to be allocated)
  my_robot_interfaces__msg__NewTurtleList__rosidl_typesupport_introspection_c__NewTurtleList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_robot_interfaces__msg__NewTurtleList__rosidl_typesupport_introspection_c__NewTurtleList_message_type_support_handle = {
  0,
  &my_robot_interfaces__msg__NewTurtleList__rosidl_typesupport_introspection_c__NewTurtleList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, msg, NewTurtleList)() {
  my_robot_interfaces__msg__NewTurtleList__rosidl_typesupport_introspection_c__NewTurtleList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, msg, NewTurtle)();
  if (!my_robot_interfaces__msg__NewTurtleList__rosidl_typesupport_introspection_c__NewTurtleList_message_type_support_handle.typesupport_identifier) {
    my_robot_interfaces__msg__NewTurtleList__rosidl_typesupport_introspection_c__NewTurtleList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_robot_interfaces__msg__NewTurtleList__rosidl_typesupport_introspection_c__NewTurtleList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
