// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_interface:srv/SendBotCommand.idl
// generated code does not contain a copyright notice
#include "custom_interface/srv/detail/send_bot_command__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_interface/srv/detail/send_bot_command__struct.h"
#include "custom_interface/srv/detail/send_bot_command__functions.h"
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

#include "rosidl_runtime_c/string.h"  // cmd
#include "rosidl_runtime_c/string_functions.h"  // cmd

// forward declare type support functions


using _SendBotCommand_Request__ros_msg_type = custom_interface__srv__SendBotCommand_Request;

static bool _SendBotCommand_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SendBotCommand_Request__ros_msg_type * ros_message = static_cast<const _SendBotCommand_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: cmd
  {
    const rosidl_runtime_c__String * str = &ros_message->cmd;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _SendBotCommand_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SendBotCommand_Request__ros_msg_type * ros_message = static_cast<_SendBotCommand_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: cmd
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->cmd.data) {
      rosidl_runtime_c__String__init(&ros_message->cmd);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->cmd,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'cmd'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_interface
size_t get_serialized_size_custom_interface__srv__SendBotCommand_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SendBotCommand_Request__ros_msg_type * ros_message = static_cast<const _SendBotCommand_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name cmd
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->cmd.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _SendBotCommand_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_interface__srv__SendBotCommand_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_interface
size_t max_serialized_size_custom_interface__srv__SendBotCommand_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: cmd
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = custom_interface__srv__SendBotCommand_Request;
    is_plain =
      (
      offsetof(DataType, cmd) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SendBotCommand_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_custom_interface__srv__SendBotCommand_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SendBotCommand_Request = {
  "custom_interface::srv",
  "SendBotCommand_Request",
  _SendBotCommand_Request__cdr_serialize,
  _SendBotCommand_Request__cdr_deserialize,
  _SendBotCommand_Request__get_serialized_size,
  _SendBotCommand_Request__max_serialized_size
};

static rosidl_message_type_support_t _SendBotCommand_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SendBotCommand_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interface, srv, SendBotCommand_Request)() {
  return &_SendBotCommand_Request__type_support;
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
// #include "custom_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "custom_interface/srv/detail/send_bot_command__struct.h"
// already included above
// #include "custom_interface/srv/detail/send_bot_command__functions.h"
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


using _SendBotCommand_Response__ros_msg_type = custom_interface__srv__SendBotCommand_Response;

static bool _SendBotCommand_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SendBotCommand_Response__ros_msg_type * ros_message = static_cast<const _SendBotCommand_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: out
  {
    cdr << (ros_message->out ? true : false);
  }

  return true;
}

static bool _SendBotCommand_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SendBotCommand_Response__ros_msg_type * ros_message = static_cast<_SendBotCommand_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: out
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->out = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_interface
size_t get_serialized_size_custom_interface__srv__SendBotCommand_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SendBotCommand_Response__ros_msg_type * ros_message = static_cast<const _SendBotCommand_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name out
  {
    size_t item_size = sizeof(ros_message->out);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SendBotCommand_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_interface__srv__SendBotCommand_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_interface
size_t max_serialized_size_custom_interface__srv__SendBotCommand_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: out
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = custom_interface__srv__SendBotCommand_Response;
    is_plain =
      (
      offsetof(DataType, out) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SendBotCommand_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_custom_interface__srv__SendBotCommand_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SendBotCommand_Response = {
  "custom_interface::srv",
  "SendBotCommand_Response",
  _SendBotCommand_Response__cdr_serialize,
  _SendBotCommand_Response__cdr_deserialize,
  _SendBotCommand_Response__get_serialized_size,
  _SendBotCommand_Response__max_serialized_size
};

static rosidl_message_type_support_t _SendBotCommand_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SendBotCommand_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interface, srv, SendBotCommand_Response)() {
  return &_SendBotCommand_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "custom_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_interface/srv/send_bot_command.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SendBotCommand__callbacks = {
  "custom_interface::srv",
  "SendBotCommand",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interface, srv, SendBotCommand_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interface, srv, SendBotCommand_Response)(),
};

static rosidl_service_type_support_t SendBotCommand__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SendBotCommand__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interface, srv, SendBotCommand)() {
  return &SendBotCommand__handle;
}

#if defined(__cplusplus)
}
#endif
