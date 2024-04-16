// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interface:msg/Act.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE__MSG__DETAIL__ACT__BUILDER_HPP_
#define CUSTOM_INTERFACE__MSG__DETAIL__ACT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interface/msg/detail/act__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interface
{

namespace msg
{

namespace builder
{

class Init_Act_num
{
public:
  Init_Act_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interface::msg::Act num(::custom_interface::msg::Act::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interface::msg::Act msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interface::msg::Act>()
{
  return custom_interface::msg::builder::Init_Act_num();
}

}  // namespace custom_interface

#endif  // CUSTOM_INTERFACE__MSG__DETAIL__ACT__BUILDER_HPP_
