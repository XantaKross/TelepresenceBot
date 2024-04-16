// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interface:srv/SendBotCommand.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE__SRV__DETAIL__SEND_BOT_COMMAND__STRUCT_H_
#define CUSTOM_INTERFACE__SRV__DETAIL__SEND_BOT_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'cmd'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SendBotCommand in the package custom_interface.
typedef struct custom_interface__srv__SendBotCommand_Request
{
  rosidl_runtime_c__String cmd;
} custom_interface__srv__SendBotCommand_Request;

// Struct for a sequence of custom_interface__srv__SendBotCommand_Request.
typedef struct custom_interface__srv__SendBotCommand_Request__Sequence
{
  custom_interface__srv__SendBotCommand_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interface__srv__SendBotCommand_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SendBotCommand in the package custom_interface.
typedef struct custom_interface__srv__SendBotCommand_Response
{
  bool out;
} custom_interface__srv__SendBotCommand_Response;

// Struct for a sequence of custom_interface__srv__SendBotCommand_Response.
typedef struct custom_interface__srv__SendBotCommand_Response__Sequence
{
  custom_interface__srv__SendBotCommand_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interface__srv__SendBotCommand_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACE__SRV__DETAIL__SEND_BOT_COMMAND__STRUCT_H_
