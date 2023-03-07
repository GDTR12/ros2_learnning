// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from plumbing_interface_demo:msg/CustomMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "plumbing_interface_demo/msg/detail/custom_msg__rosidl_typesupport_introspection_c.h"
#include "plumbing_interface_demo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "plumbing_interface_demo/msg/detail/custom_msg__functions.h"
#include "plumbing_interface_demo/msg/detail/custom_msg__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void plumbing_interface_demo__msg__CustomMsg__rosidl_typesupport_introspection_c__CustomMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  plumbing_interface_demo__msg__CustomMsg__init(message_memory);
}

void plumbing_interface_demo__msg__CustomMsg__rosidl_typesupport_introspection_c__CustomMsg_fini_function(void * message_memory)
{
  plumbing_interface_demo__msg__CustomMsg__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember plumbing_interface_demo__msg__CustomMsg__rosidl_typesupport_introspection_c__CustomMsg_message_member_array[3] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plumbing_interface_demo__msg__CustomMsg, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data_int",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plumbing_interface_demo__msg__CustomMsg, data_int),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data_float",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plumbing_interface_demo__msg__CustomMsg, data_float),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers plumbing_interface_demo__msg__CustomMsg__rosidl_typesupport_introspection_c__CustomMsg_message_members = {
  "plumbing_interface_demo__msg",  // message namespace
  "CustomMsg",  // message name
  3,  // number of fields
  sizeof(plumbing_interface_demo__msg__CustomMsg),
  plumbing_interface_demo__msg__CustomMsg__rosidl_typesupport_introspection_c__CustomMsg_message_member_array,  // message members
  plumbing_interface_demo__msg__CustomMsg__rosidl_typesupport_introspection_c__CustomMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  plumbing_interface_demo__msg__CustomMsg__rosidl_typesupport_introspection_c__CustomMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t plumbing_interface_demo__msg__CustomMsg__rosidl_typesupport_introspection_c__CustomMsg_message_type_support_handle = {
  0,
  &plumbing_interface_demo__msg__CustomMsg__rosidl_typesupport_introspection_c__CustomMsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_plumbing_interface_demo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plumbing_interface_demo, msg, CustomMsg)() {
  if (!plumbing_interface_demo__msg__CustomMsg__rosidl_typesupport_introspection_c__CustomMsg_message_type_support_handle.typesupport_identifier) {
    plumbing_interface_demo__msg__CustomMsg__rosidl_typesupport_introspection_c__CustomMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &plumbing_interface_demo__msg__CustomMsg__rosidl_typesupport_introspection_c__CustomMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
