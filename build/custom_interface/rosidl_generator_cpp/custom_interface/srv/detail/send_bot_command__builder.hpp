// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interface:srv/SendBotCommand.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE__SRV__DETAIL__SEND_BOT_COMMAND__BUILDER_HPP_
#define CUSTOM_INTERFACE__SRV__DETAIL__SEND_BOT_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interface/srv/detail/send_bot_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interface
{

namespace srv
{

namespace builder
{

class Init_SendBotCommand_Request_cmd
{
public:
  Init_SendBotCommand_Request_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interface::srv::SendBotCommand_Request cmd(::custom_interface::srv::SendBotCommand_Request::_cmd_type arg)
  {
    msg_.cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interface::srv::SendBotCommand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interface::srv::SendBotCommand_Request>()
{
  return custom_interface::srv::builder::Init_SendBotCommand_Request_cmd();
}

}  // namespace custom_interface


namespace custom_interface
{

namespace srv
{

namespace builder
{

class Init_SendBotCommand_Response_out
{
public:
  Init_SendBotCommand_Response_out()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interface::srv::SendBotCommand_Response out(::custom_interface::srv::SendBotCommand_Response::_out_type arg)
  {
    msg_.out = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interface::srv::SendBotCommand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interface::srv::SendBotCommand_Response>()
{
  return custom_interface::srv::builder::Init_SendBotCommand_Response_out();
}

}  // namespace custom_interface

#endif  // CUSTOM_INTERFACE__SRV__DETAIL__SEND_BOT_COMMAND__BUILDER_HPP_
