// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from plumbing_interface_demo:srv/ServiceExercise.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "plumbing_interface_demo/srv/detail/service_exercise__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace plumbing_interface_demo
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ServiceExercise_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ServiceExercise_Request_type_support_ids_t;

static const _ServiceExercise_Request_type_support_ids_t _ServiceExercise_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ServiceExercise_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ServiceExercise_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ServiceExercise_Request_type_support_symbol_names_t _ServiceExercise_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, plumbing_interface_demo, srv, ServiceExercise_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, plumbing_interface_demo, srv, ServiceExercise_Request)),
  }
};

typedef struct _ServiceExercise_Request_type_support_data_t
{
  void * data[2];
} _ServiceExercise_Request_type_support_data_t;

static _ServiceExercise_Request_type_support_data_t _ServiceExercise_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ServiceExercise_Request_message_typesupport_map = {
  2,
  "plumbing_interface_demo",
  &_ServiceExercise_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ServiceExercise_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ServiceExercise_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ServiceExercise_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ServiceExercise_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace plumbing_interface_demo

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<plumbing_interface_demo::srv::ServiceExercise_Request>()
{
  return &::plumbing_interface_demo::srv::rosidl_typesupport_cpp::ServiceExercise_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, plumbing_interface_demo, srv, ServiceExercise_Request)() {
  return get_message_type_support_handle<plumbing_interface_demo::srv::ServiceExercise_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "plumbing_interface_demo/srv/detail/service_exercise__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace plumbing_interface_demo
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ServiceExercise_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ServiceExercise_Response_type_support_ids_t;

static const _ServiceExercise_Response_type_support_ids_t _ServiceExercise_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ServiceExercise_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ServiceExercise_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ServiceExercise_Response_type_support_symbol_names_t _ServiceExercise_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, plumbing_interface_demo, srv, ServiceExercise_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, plumbing_interface_demo, srv, ServiceExercise_Response)),
  }
};

typedef struct _ServiceExercise_Response_type_support_data_t
{
  void * data[2];
} _ServiceExercise_Response_type_support_data_t;

static _ServiceExercise_Response_type_support_data_t _ServiceExercise_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ServiceExercise_Response_message_typesupport_map = {
  2,
  "plumbing_interface_demo",
  &_ServiceExercise_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ServiceExercise_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ServiceExercise_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ServiceExercise_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ServiceExercise_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace plumbing_interface_demo

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<plumbing_interface_demo::srv::ServiceExercise_Response>()
{
  return &::plumbing_interface_demo::srv::rosidl_typesupport_cpp::ServiceExercise_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, plumbing_interface_demo, srv, ServiceExercise_Response)() {
  return get_message_type_support_handle<plumbing_interface_demo::srv::ServiceExercise_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "plumbing_interface_demo/srv/detail/service_exercise__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace plumbing_interface_demo
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ServiceExercise_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ServiceExercise_type_support_ids_t;

static const _ServiceExercise_type_support_ids_t _ServiceExercise_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ServiceExercise_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ServiceExercise_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ServiceExercise_type_support_symbol_names_t _ServiceExercise_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, plumbing_interface_demo, srv, ServiceExercise)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, plumbing_interface_demo, srv, ServiceExercise)),
  }
};

typedef struct _ServiceExercise_type_support_data_t
{
  void * data[2];
} _ServiceExercise_type_support_data_t;

static _ServiceExercise_type_support_data_t _ServiceExercise_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ServiceExercise_service_typesupport_map = {
  2,
  "plumbing_interface_demo",
  &_ServiceExercise_service_typesupport_ids.typesupport_identifier[0],
  &_ServiceExercise_service_typesupport_symbol_names.symbol_name[0],
  &_ServiceExercise_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ServiceExercise_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ServiceExercise_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace plumbing_interface_demo

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<plumbing_interface_demo::srv::ServiceExercise>()
{
  return &::plumbing_interface_demo::srv::rosidl_typesupport_cpp::ServiceExercise_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
