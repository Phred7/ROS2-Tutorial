// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_robot_interfaces:msg/NewTurtleList.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACES__MSG__DETAIL__NEW_TURTLE_LIST__STRUCT_HPP_
#define MY_ROBOT_INTERFACES__MSG__DETAIL__NEW_TURTLE_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'new_turtle_array'
#include "my_robot_interfaces/msg/detail/new_turtle__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_robot_interfaces__msg__NewTurtleList __attribute__((deprecated))
#else
# define DEPRECATED__my_robot_interfaces__msg__NewTurtleList __declspec(deprecated)
#endif

namespace my_robot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NewTurtleList_
{
  using Type = NewTurtleList_<ContainerAllocator>;

  explicit NewTurtleList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit NewTurtleList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _new_turtle_array_type =
    std::vector<my_robot_interfaces::msg::NewTurtle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_robot_interfaces::msg::NewTurtle_<ContainerAllocator>>>;
  _new_turtle_array_type new_turtle_array;

  // setters for named parameter idiom
  Type & set__new_turtle_array(
    const std::vector<my_robot_interfaces::msg::NewTurtle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_robot_interfaces::msg::NewTurtle_<ContainerAllocator>>> & _arg)
  {
    this->new_turtle_array = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_robot_interfaces::msg::NewTurtleList_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_robot_interfaces::msg::NewTurtleList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_robot_interfaces::msg::NewTurtleList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_robot_interfaces::msg::NewTurtleList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_robot_interfaces::msg::NewTurtleList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_robot_interfaces::msg::NewTurtleList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_robot_interfaces::msg::NewTurtleList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_robot_interfaces::msg::NewTurtleList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_robot_interfaces::msg::NewTurtleList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_robot_interfaces::msg::NewTurtleList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_robot_interfaces__msg__NewTurtleList
    std::shared_ptr<my_robot_interfaces::msg::NewTurtleList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_robot_interfaces__msg__NewTurtleList
    std::shared_ptr<my_robot_interfaces::msg::NewTurtleList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NewTurtleList_ & other) const
  {
    if (this->new_turtle_array != other.new_turtle_array) {
      return false;
    }
    return true;
  }
  bool operator!=(const NewTurtleList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NewTurtleList_

// alias to use template instance with default allocator
using NewTurtleList =
  my_robot_interfaces::msg::NewTurtleList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_robot_interfaces

#endif  // MY_ROBOT_INTERFACES__MSG__DETAIL__NEW_TURTLE_LIST__STRUCT_HPP_
