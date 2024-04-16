// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interface:msg/Act.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE__MSG__DETAIL__ACT__STRUCT_HPP_
#define CUSTOM_INTERFACE__MSG__DETAIL__ACT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_interface__msg__Act __attribute__((deprecated))
#else
# define DEPRECATED__custom_interface__msg__Act __declspec(deprecated)
#endif

namespace custom_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Act_
{
  using Type = Act_<ContainerAllocator>;

  explicit Act_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num = 0;
    }
  }

  explicit Act_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num = 0;
    }
  }

  // field types and members
  using _num_type =
    int8_t;
  _num_type num;

  // setters for named parameter idiom
  Type & set__num(
    const int8_t & _arg)
  {
    this->num = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interface::msg::Act_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interface::msg::Act_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interface::msg::Act_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interface::msg::Act_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interface::msg::Act_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interface::msg::Act_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interface::msg::Act_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interface::msg::Act_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interface::msg::Act_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interface::msg::Act_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interface__msg__Act
    std::shared_ptr<custom_interface::msg::Act_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interface__msg__Act
    std::shared_ptr<custom_interface::msg::Act_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Act_ & other) const
  {
    if (this->num != other.num) {
      return false;
    }
    return true;
  }
  bool operator!=(const Act_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Act_

// alias to use template instance with default allocator
using Act =
  custom_interface::msg::Act_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_interface

#endif  // CUSTOM_INTERFACE__MSG__DETAIL__ACT__STRUCT_HPP_
