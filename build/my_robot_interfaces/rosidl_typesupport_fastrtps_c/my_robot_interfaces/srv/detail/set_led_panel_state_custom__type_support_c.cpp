// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from my_robot_interfaces:srv/SetLEDPanelStateCustom.idl
// generated code does not contain a copyright notice
#include "my_robot_interfaces/srv/detail/set_led_panel_state_custom__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "my_robot_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "my_robot_interfaces/srv/detail/set_led_panel_state_custom__struct.h"
#include "my_robot_interfaces/srv/detail/set_led_panel_state_custom__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SetLEDPanelStateCustom_Request__ros_msg_type = my_robot_interfaces__srv__SetLEDPanelStateCustom_Request;

static bool _SetLEDPanelStateCustom_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetLEDPanelStateCustom_Request__ros_msg_type * ros_message = static_cast<const _SetLEDPanelStateCustom_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: led_number
  {
    cdr << ros_message->led_number;
  }

  // Field name: state
  {
    cdr << (ros_message->state ? true : false);
  }

  return true;
}

static bool _SetLEDPanelStateCustom_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetLEDPanelStateCustom_Request__ros_msg_type * ros_message = static_cast<_SetLEDPanelStateCustom_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: led_number
  {
    cdr >> ros_message->led_number;
  }

  // Field name: state
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->state = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_robot_interfaces
size_t get_serialized_size_my_robot_interfaces__srv__SetLEDPanelStateCustom_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetLEDPanelStateCustom_Request__ros_msg_type * ros_message = static_cast<const _SetLEDPanelStateCustom_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name led_number
  {
    size_t item_size = sizeof(ros_message->led_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name state
  {
    size_t item_size = sizeof(ros_message->state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetLEDPanelStateCustom_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_my_robot_interfaces__srv__SetLEDPanelStateCustom_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_robot_interfaces
size_t max_serialized_size_my_robot_interfaces__srv__SetLEDPanelStateCustom_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: led_number
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SetLEDPanelStateCustom_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_my_robot_interfaces__srv__SetLEDPanelStateCustom_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetLEDPanelStateCustom_Request = {
  "my_robot_interfaces::srv",
  "SetLEDPanelStateCustom_Request",
  _SetLEDPanelStateCustom_Request__cdr_serialize,
  _SetLEDPanelStateCustom_Request__cdr_deserialize,
  _SetLEDPanelStateCustom_Request__get_serialized_size,
  _SetLEDPanelStateCustom_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetLEDPanelStateCustom_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetLEDPanelStateCustom_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_robot_interfaces, srv, SetLEDPanelStateCustom_Request)() {
  return &_SetLEDPanelStateCustom_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "my_robot_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "my_robot_interfaces/srv/detail/set_led_panel_state_custom__struct.h"
// already included above
// #include "my_robot_interfaces/srv/detail/set_led_panel_state_custom__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SetLEDPanelStateCustom_Response__ros_msg_type = my_robot_interfaces__srv__SetLEDPanelStateCustom_Response;

static bool _SetLEDPanelStateCustom_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetLEDPanelStateCustom_Response__ros_msg_type * ros_message = static_cast<const _SetLEDPanelStateCustom_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: actual_states
  {
    size_t size = 3;
    auto array_ptr = ros_message->actual_states;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _SetLEDPanelStateCustom_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetLEDPanelStateCustom_Response__ros_msg_type * ros_message = static_cast<_SetLEDPanelStateCustom_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: actual_states
  {
    size_t size = 3;
    auto array_ptr = ros_message->actual_states;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_robot_interfaces
size_t get_serialized_size_my_robot_interfaces__srv__SetLEDPanelStateCustom_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetLEDPanelStateCustom_Response__ros_msg_type * ros_message = static_cast<const _SetLEDPanelStateCustom_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name actual_states
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->actual_states;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetLEDPanelStateCustom_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_my_robot_interfaces__srv__SetLEDPanelStateCustom_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_robot_interfaces
size_t max_serialized_size_my_robot_interfaces__srv__SetLEDPanelStateCustom_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: actual_states
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SetLEDPanelStateCustom_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_my_robot_interfaces__srv__SetLEDPanelStateCustom_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetLEDPanelStateCustom_Response = {
  "my_robot_interfaces::srv",
  "SetLEDPanelStateCustom_Response",
  _SetLEDPanelStateCustom_Response__cdr_serialize,
  _SetLEDPanelStateCustom_Response__cdr_deserialize,
  _SetLEDPanelStateCustom_Response__get_serialized_size,
  _SetLEDPanelStateCustom_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetLEDPanelStateCustom_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetLEDPanelStateCustom_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_robot_interfaces, srv, SetLEDPanelStateCustom_Response)() {
  return &_SetLEDPanelStateCustom_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "my_robot_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "my_robot_interfaces/srv/set_led_panel_state_custom.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetLEDPanelStateCustom__callbacks = {
  "my_robot_interfaces::srv",
  "SetLEDPanelStateCustom",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_robot_interfaces, srv, SetLEDPanelStateCustom_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_robot_interfaces, srv, SetLEDPanelStateCustom_Response)(),
};

static rosidl_service_type_support_t SetLEDPanelStateCustom__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetLEDPanelStateCustom__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_robot_interfaces, srv, SetLEDPanelStateCustom)() {
  return &SetLEDPanelStateCustom__handle;
}

#if defined(__cplusplus)
}
#endif
