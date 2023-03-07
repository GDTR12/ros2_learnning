// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from plumbing_interface_demo:srv/ServiceMsg.idl
// generated code does not contain a copyright notice
#include "plumbing_interface_demo/srv/detail/service_msg__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "plumbing_interface_demo/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "plumbing_interface_demo/srv/detail/service_msg__struct.h"
#include "plumbing_interface_demo/srv/detail/service_msg__functions.h"
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


using _ServiceMsg_Request__ros_msg_type = plumbing_interface_demo__srv__ServiceMsg_Request;

static bool _ServiceMsg_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ServiceMsg_Request__ros_msg_type * ros_message = static_cast<const _ServiceMsg_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: data1
  {
    cdr << ros_message->data1;
  }

  // Field name: data2
  {
    cdr << ros_message->data2;
  }

  return true;
}

static bool _ServiceMsg_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ServiceMsg_Request__ros_msg_type * ros_message = static_cast<_ServiceMsg_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: data1
  {
    cdr >> ros_message->data1;
  }

  // Field name: data2
  {
    cdr >> ros_message->data2;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_plumbing_interface_demo
size_t get_serialized_size_plumbing_interface_demo__srv__ServiceMsg_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ServiceMsg_Request__ros_msg_type * ros_message = static_cast<const _ServiceMsg_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name data1
  {
    size_t item_size = sizeof(ros_message->data1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name data2
  {
    size_t item_size = sizeof(ros_message->data2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ServiceMsg_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_plumbing_interface_demo__srv__ServiceMsg_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_plumbing_interface_demo
size_t max_serialized_size_plumbing_interface_demo__srv__ServiceMsg_Request(
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

  // member: data1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: data2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ServiceMsg_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_plumbing_interface_demo__srv__ServiceMsg_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ServiceMsg_Request = {
  "plumbing_interface_demo::srv",
  "ServiceMsg_Request",
  _ServiceMsg_Request__cdr_serialize,
  _ServiceMsg_Request__cdr_deserialize,
  _ServiceMsg_Request__get_serialized_size,
  _ServiceMsg_Request__max_serialized_size
};

static rosidl_message_type_support_t _ServiceMsg_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ServiceMsg_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, plumbing_interface_demo, srv, ServiceMsg_Request)() {
  return &_ServiceMsg_Request__type_support;
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
// #include "plumbing_interface_demo/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "plumbing_interface_demo/srv/detail/service_msg__struct.h"
// already included above
// #include "plumbing_interface_demo/srv/detail/service_msg__functions.h"
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


using _ServiceMsg_Response__ros_msg_type = plumbing_interface_demo__srv__ServiceMsg_Response;

static bool _ServiceMsg_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ServiceMsg_Response__ros_msg_type * ros_message = static_cast<const _ServiceMsg_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: sum
  {
    cdr << ros_message->sum;
  }

  return true;
}

static bool _ServiceMsg_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ServiceMsg_Response__ros_msg_type * ros_message = static_cast<_ServiceMsg_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: sum
  {
    cdr >> ros_message->sum;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_plumbing_interface_demo
size_t get_serialized_size_plumbing_interface_demo__srv__ServiceMsg_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ServiceMsg_Response__ros_msg_type * ros_message = static_cast<const _ServiceMsg_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name sum
  {
    size_t item_size = sizeof(ros_message->sum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ServiceMsg_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_plumbing_interface_demo__srv__ServiceMsg_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_plumbing_interface_demo
size_t max_serialized_size_plumbing_interface_demo__srv__ServiceMsg_Response(
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

  // member: sum
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ServiceMsg_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_plumbing_interface_demo__srv__ServiceMsg_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ServiceMsg_Response = {
  "plumbing_interface_demo::srv",
  "ServiceMsg_Response",
  _ServiceMsg_Response__cdr_serialize,
  _ServiceMsg_Response__cdr_deserialize,
  _ServiceMsg_Response__get_serialized_size,
  _ServiceMsg_Response__max_serialized_size
};

static rosidl_message_type_support_t _ServiceMsg_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ServiceMsg_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, plumbing_interface_demo, srv, ServiceMsg_Response)() {
  return &_ServiceMsg_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "plumbing_interface_demo/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "plumbing_interface_demo/srv/service_msg.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ServiceMsg__callbacks = {
  "plumbing_interface_demo::srv",
  "ServiceMsg",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, plumbing_interface_demo, srv, ServiceMsg_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, plumbing_interface_demo, srv, ServiceMsg_Response)(),
};

static rosidl_service_type_support_t ServiceMsg__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ServiceMsg__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, plumbing_interface_demo, srv, ServiceMsg)() {
  return &ServiceMsg__handle;
}

#if defined(__cplusplus)
}
#endif
