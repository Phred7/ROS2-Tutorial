// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_robot_interfaces:srv/SetLEDPanelStateCustom.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACES__SRV__DETAIL__SET_LED_PANEL_STATE_CUSTOM__STRUCT_HPP_
#define MY_ROBOT_INTERFACES__SRV__DETAIL__SET_LED_PANEL_STATE_CUSTOM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_robot_interfaces__srv__SetLEDPanelStateCustom_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_robot_interfaces__srv__SetLEDPanelStateCustom_Request __declspec(deprecated)
#endif

namespace my_robot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetLEDPanelStateCustom_Request_
{
  using Type = SetLEDPanelStateCustom_Request_<ContainerAllocator>;

  explicit SetLEDPanelStateCustom_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->led_number = 0ll;
      this->state = false;
    }
  }

  explicit SetLEDPanelStateCustom_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->led_number = 0ll;
      this->state = false;
    }
  }

  // field types and members
  using _led_number_type =
    int64_t;
  _led_number_type led_number;
  using _state_type =
    bool;
  _state_type state;

  // setters for named parameter idiom
  Type & set__led_number(
    const int64_t & _arg)
  {
    this->led_number = _arg;
    return *this;
  }
  Type & set__state(
    const bool & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_robot_interfaces::srv::SetLEDPanelStateCustom_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_robot_interfaces::srv::SetLEDPanelStateCustom_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_robot_interfaces::srv::SetLEDPanelStateCustom_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_robot_interfaces::srv::SetLEDPanelStateCustom_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_robot_interfaces::srv::SetLEDPanelStateCustom_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_robot_interfaces::srv::SetLEDPanelStateCustom_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_robot_interfaces::srv::SetLEDPanelStateCustom_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_robot_interfaces::srv::SetLEDPanelStateCustom_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_robot_interfaces::srv::SetLEDPanelStateCustom_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_robot_interfaces::srv::SetLEDPanelStateCustom_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_robot_interfaces__srv__SetLEDPanelStateCustom_Request
    std::shared_ptr<my_robot_interfaces::srv::SetLEDPanelStateCustom_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_robot_interfaces__srv__SetLEDPanelStateCustom_Request
    std::shared_ptr<my_robot_interfaces::srv::SetLEDPanelStateCustom_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetLEDPanelStateCustom_Request_ & other) const
  {
    if (this->led_number != other.led_number) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetLEDPanelStateCustom_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetLEDPanelStateCustom_Request_

// alias to use template instance with default allocator
using SetLEDPanelStateCustom_Request =
  my_robot_interfaces::srv::SetLEDPanelStateCustom_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_robot_interfaces


#ifndef _WIN32
# define DEPRECATED__my_robot_interfaces__srv__SetLEDPanelStateCustom_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_robot_interfaces__srv__SetLEDPanelStateCustom_Response __declspec(deprecated)
#endif

namespace my_robot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetLEDPanelStateCustom_Response_
{
  using Type = SetLEDPanelStateCustom_Response_<ContainerAllocator>;

  explicit SetLEDPanelStateCustom_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<bool, 3>::iterator, bool>(this->actual_states.begin(), this->actual_states.end(), false);
    }
  }

  explicit SetLEDPanelStateCustom_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : actual_states(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<bool, 3>::iterator, bool>(this->actual_states.begin(), this->actual_states.end(), false);
    }
  }

  // field types and members
  using _actual_states_type =
    std::array<bool, 3>;
  _actual_states_type actual_states;

  // setters for named parameter idiom
  Type & set__actual_states(
    const std::array<bool, 3> & _arg)
  {
    this->actual_states = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_robot_interfaces::srv::SetLEDPanelStateCustom_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_robot_interfaces::srv::SetLEDPanelStateCustom_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_robot_interfaces::srv::SetLEDPanelStateCustom_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_robot_interfaces::srv::SetLEDPanelStateCustom_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_robot_interfaces::srv::SetLEDPanelStateCustom_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_robot_interfaces::srv::SetLEDPanelStateCustom_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_robot_interfaces::srv::SetLEDPanelStateCustom_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_robot_interfaces::srv::SetLEDPanelStateCustom_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_robot_interfaces::srv::SetLEDPanelStateCustom_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_robot_interfaces::srv::SetLEDPanelStateCustom_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_robot_interfaces__srv__SetLEDPanelStateCustom_Response
    std::shared_ptr<my_robot_interfaces::srv::SetLEDPanelStateCustom_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_robot_interfaces__srv__SetLEDPanelStateCustom_Response
    std::shared_ptr<my_robot_interfaces::srv::SetLEDPanelStateCustom_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetLEDPanelStateCustom_Response_ & other) const
  {
    if (this->actual_states != other.actual_states) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetLEDPanelStateCustom_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetLEDPanelStateCustom_Response_

// alias to use template instance with default allocator
using SetLEDPanelStateCustom_Response =
  my_robot_interfaces::srv::SetLEDPanelStateCustom_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_robot_interfaces

namespace my_robot_interfaces
{

namespace srv
{

struct SetLEDPanelStateCustom
{
  using Request = my_robot_interfaces::srv::SetLEDPanelStateCustom_Request;
  using Response = my_robot_interfaces::srv::SetLEDPanelStateCustom_Response;
};

}  // namespace srv

}  // namespace my_robot_interfaces

#endif  // MY_ROBOT_INTERFACES__SRV__DETAIL__SET_LED_PANEL_STATE_CUSTOM__STRUCT_HPP_
