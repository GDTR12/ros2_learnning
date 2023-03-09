// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from plumbing_interface_demo:action/ActionExercise.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "plumbing_interface_demo/action/detail/action_exercise__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace plumbing_interface_demo
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ActionExercise_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ActionExercise_Goal_type_support_ids_t;

static const _ActionExercise_Goal_type_support_ids_t _ActionExercise_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ActionExercise_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ActionExercise_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ActionExercise_Goal_type_support_symbol_names_t _ActionExercise_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, plumbing_interface_demo, action, ActionExercise_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, plumbing_interface_demo, action, ActionExercise_Goal)),
  }
};

typedef struct _ActionExercise_Goal_type_support_data_t
{
  void * data[2];
} _ActionExercise_Goal_type_support_data_t;

static _ActionExercise_Goal_type_support_data_t _ActionExercise_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ActionExercise_Goal_message_typesupport_map = {
  2,
  "plumbing_interface_demo",
  &_ActionExercise_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_ActionExercise_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_ActionExercise_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ActionExercise_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ActionExercise_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace plumbing_interface_demo

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<plumbing_interface_demo::action::ActionExercise_Goal>()
{
  return &::plumbing_interface_demo::action::rosidl_typesupport_cpp::ActionExercise_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, plumbing_interface_demo, action, ActionExercise_Goal)() {
  return get_message_type_support_handle<plumbing_interface_demo::action::ActionExercise_Goal>();
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
// #include "plumbing_interface_demo/action/detail/action_exercise__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ActionExercise_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ActionExercise_Result_type_support_ids_t;

static const _ActionExercise_Result_type_support_ids_t _ActionExercise_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ActionExercise_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ActionExercise_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ActionExercise_Result_type_support_symbol_names_t _ActionExercise_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, plumbing_interface_demo, action, ActionExercise_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, plumbing_interface_demo, action, ActionExercise_Result)),
  }
};

typedef struct _ActionExercise_Result_type_support_data_t
{
  void * data[2];
} _ActionExercise_Result_type_support_data_t;

static _ActionExercise_Result_type_support_data_t _ActionExercise_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ActionExercise_Result_message_typesupport_map = {
  2,
  "plumbing_interface_demo",
  &_ActionExercise_Result_message_typesupport_ids.typesupport_identifier[0],
  &_ActionExercise_Result_message_typesupport_symbol_names.symbol_name[0],
  &_ActionExercise_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ActionExercise_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ActionExercise_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace plumbing_interface_demo

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<plumbing_interface_demo::action::ActionExercise_Result>()
{
  return &::plumbing_interface_demo::action::rosidl_typesupport_cpp::ActionExercise_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, plumbing_interface_demo, action, ActionExercise_Result)() {
  return get_message_type_support_handle<plumbing_interface_demo::action::ActionExercise_Result>();
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
// #include "plumbing_interface_demo/action/detail/action_exercise__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ActionExercise_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ActionExercise_Feedback_type_support_ids_t;

static const _ActionExercise_Feedback_type_support_ids_t _ActionExercise_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ActionExercise_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ActionExercise_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ActionExercise_Feedback_type_support_symbol_names_t _ActionExercise_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, plumbing_interface_demo, action, ActionExercise_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, plumbing_interface_demo, action, ActionExercise_Feedback)),
  }
};

typedef struct _ActionExercise_Feedback_type_support_data_t
{
  void * data[2];
} _ActionExercise_Feedback_type_support_data_t;

static _ActionExercise_Feedback_type_support_data_t _ActionExercise_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ActionExercise_Feedback_message_typesupport_map = {
  2,
  "plumbing_interface_demo",
  &_ActionExercise_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_ActionExercise_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_ActionExercise_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ActionExercise_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ActionExercise_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace plumbing_interface_demo

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<plumbing_interface_demo::action::ActionExercise_Feedback>()
{
  return &::plumbing_interface_demo::action::rosidl_typesupport_cpp::ActionExercise_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, plumbing_interface_demo, action, ActionExercise_Feedback)() {
  return get_message_type_support_handle<plumbing_interface_demo::action::ActionExercise_Feedback>();
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
// #include "plumbing_interface_demo/action/detail/action_exercise__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ActionExercise_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ActionExercise_SendGoal_Request_type_support_ids_t;

static const _ActionExercise_SendGoal_Request_type_support_ids_t _ActionExercise_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ActionExercise_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ActionExercise_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ActionExercise_SendGoal_Request_type_support_symbol_names_t _ActionExercise_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, plumbing_interface_demo, action, ActionExercise_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, plumbing_interface_demo, action, ActionExercise_SendGoal_Request)),
  }
};

typedef struct _ActionExercise_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _ActionExercise_SendGoal_Request_type_support_data_t;

static _ActionExercise_SendGoal_Request_type_support_data_t _ActionExercise_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ActionExercise_SendGoal_Request_message_typesupport_map = {
  2,
  "plumbing_interface_demo",
  &_ActionExercise_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ActionExercise_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ActionExercise_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ActionExercise_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ActionExercise_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace plumbing_interface_demo

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<plumbing_interface_demo::action::ActionExercise_SendGoal_Request>()
{
  return &::plumbing_interface_demo::action::rosidl_typesupport_cpp::ActionExercise_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, plumbing_interface_demo, action, ActionExercise_SendGoal_Request)() {
  return get_message_type_support_handle<plumbing_interface_demo::action::ActionExercise_SendGoal_Request>();
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
// #include "plumbing_interface_demo/action/detail/action_exercise__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ActionExercise_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ActionExercise_SendGoal_Response_type_support_ids_t;

static const _ActionExercise_SendGoal_Response_type_support_ids_t _ActionExercise_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ActionExercise_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ActionExercise_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ActionExercise_SendGoal_Response_type_support_symbol_names_t _ActionExercise_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, plumbing_interface_demo, action, ActionExercise_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, plumbing_interface_demo, action, ActionExercise_SendGoal_Response)),
  }
};

typedef struct _ActionExercise_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _ActionExercise_SendGoal_Response_type_support_data_t;

static _ActionExercise_SendGoal_Response_type_support_data_t _ActionExercise_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ActionExercise_SendGoal_Response_message_typesupport_map = {
  2,
  "plumbing_interface_demo",
  &_ActionExercise_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ActionExercise_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ActionExercise_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ActionExercise_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ActionExercise_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace plumbing_interface_demo

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<plumbing_interface_demo::action::ActionExercise_SendGoal_Response>()
{
  return &::plumbing_interface_demo::action::rosidl_typesupport_cpp::ActionExercise_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, plumbing_interface_demo, action, ActionExercise_SendGoal_Response)() {
  return get_message_type_support_handle<plumbing_interface_demo::action::ActionExercise_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "plumbing_interface_demo/action/detail/action_exercise__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ActionExercise_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ActionExercise_SendGoal_type_support_ids_t;

static const _ActionExercise_SendGoal_type_support_ids_t _ActionExercise_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ActionExercise_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ActionExercise_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ActionExercise_SendGoal_type_support_symbol_names_t _ActionExercise_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, plumbing_interface_demo, action, ActionExercise_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, plumbing_interface_demo, action, ActionExercise_SendGoal)),
  }
};

typedef struct _ActionExercise_SendGoal_type_support_data_t
{
  void * data[2];
} _ActionExercise_SendGoal_type_support_data_t;

static _ActionExercise_SendGoal_type_support_data_t _ActionExercise_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ActionExercise_SendGoal_service_typesupport_map = {
  2,
  "plumbing_interface_demo",
  &_ActionExercise_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_ActionExercise_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_ActionExercise_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ActionExercise_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ActionExercise_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace plumbing_interface_demo

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<plumbing_interface_demo::action::ActionExercise_SendGoal>()
{
  return &::plumbing_interface_demo::action::rosidl_typesupport_cpp::ActionExercise_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "plumbing_interface_demo/action/detail/action_exercise__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ActionExercise_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ActionExercise_GetResult_Request_type_support_ids_t;

static const _ActionExercise_GetResult_Request_type_support_ids_t _ActionExercise_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ActionExercise_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ActionExercise_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ActionExercise_GetResult_Request_type_support_symbol_names_t _ActionExercise_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, plumbing_interface_demo, action, ActionExercise_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, plumbing_interface_demo, action, ActionExercise_GetResult_Request)),
  }
};

typedef struct _ActionExercise_GetResult_Request_type_support_data_t
{
  void * data[2];
} _ActionExercise_GetResult_Request_type_support_data_t;

static _ActionExercise_GetResult_Request_type_support_data_t _ActionExercise_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ActionExercise_GetResult_Request_message_typesupport_map = {
  2,
  "plumbing_interface_demo",
  &_ActionExercise_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ActionExercise_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ActionExercise_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ActionExercise_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ActionExercise_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace plumbing_interface_demo

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<plumbing_interface_demo::action::ActionExercise_GetResult_Request>()
{
  return &::plumbing_interface_demo::action::rosidl_typesupport_cpp::ActionExercise_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, plumbing_interface_demo, action, ActionExercise_GetResult_Request)() {
  return get_message_type_support_handle<plumbing_interface_demo::action::ActionExercise_GetResult_Request>();
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
// #include "plumbing_interface_demo/action/detail/action_exercise__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ActionExercise_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ActionExercise_GetResult_Response_type_support_ids_t;

static const _ActionExercise_GetResult_Response_type_support_ids_t _ActionExercise_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ActionExercise_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ActionExercise_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ActionExercise_GetResult_Response_type_support_symbol_names_t _ActionExercise_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, plumbing_interface_demo, action, ActionExercise_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, plumbing_interface_demo, action, ActionExercise_GetResult_Response)),
  }
};

typedef struct _ActionExercise_GetResult_Response_type_support_data_t
{
  void * data[2];
} _ActionExercise_GetResult_Response_type_support_data_t;

static _ActionExercise_GetResult_Response_type_support_data_t _ActionExercise_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ActionExercise_GetResult_Response_message_typesupport_map = {
  2,
  "plumbing_interface_demo",
  &_ActionExercise_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ActionExercise_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ActionExercise_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ActionExercise_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ActionExercise_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace plumbing_interface_demo

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<plumbing_interface_demo::action::ActionExercise_GetResult_Response>()
{
  return &::plumbing_interface_demo::action::rosidl_typesupport_cpp::ActionExercise_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, plumbing_interface_demo, action, ActionExercise_GetResult_Response)() {
  return get_message_type_support_handle<plumbing_interface_demo::action::ActionExercise_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "plumbing_interface_demo/action/detail/action_exercise__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace plumbing_interface_demo
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ActionExercise_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ActionExercise_GetResult_type_support_ids_t;

static const _ActionExercise_GetResult_type_support_ids_t _ActionExercise_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ActionExercise_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ActionExercise_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ActionExercise_GetResult_type_support_symbol_names_t _ActionExercise_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, plumbing_interface_demo, action, ActionExercise_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, plumbing_interface_demo, action, ActionExercise_GetResult)),
  }
};

typedef struct _ActionExercise_GetResult_type_support_data_t
{
  void * data[2];
} _ActionExercise_GetResult_type_support_data_t;

static _ActionExercise_GetResult_type_support_data_t _ActionExercise_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ActionExercise_GetResult_service_typesupport_map = {
  2,
  "plumbing_interface_demo",
  &_ActionExercise_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_ActionExercise_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_ActionExercise_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ActionExercise_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ActionExercise_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace plumbing_interface_demo

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<plumbing_interface_demo::action::ActionExercise_GetResult>()
{
  return &::plumbing_interface_demo::action::rosidl_typesupport_cpp::ActionExercise_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "plumbing_interface_demo/action/detail/action_exercise__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ActionExercise_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ActionExercise_FeedbackMessage_type_support_ids_t;

static const _ActionExercise_FeedbackMessage_type_support_ids_t _ActionExercise_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ActionExercise_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ActionExercise_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ActionExercise_FeedbackMessage_type_support_symbol_names_t _ActionExercise_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, plumbing_interface_demo, action, ActionExercise_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, plumbing_interface_demo, action, ActionExercise_FeedbackMessage)),
  }
};

typedef struct _ActionExercise_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _ActionExercise_FeedbackMessage_type_support_data_t;

static _ActionExercise_FeedbackMessage_type_support_data_t _ActionExercise_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ActionExercise_FeedbackMessage_message_typesupport_map = {
  2,
  "plumbing_interface_demo",
  &_ActionExercise_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_ActionExercise_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_ActionExercise_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ActionExercise_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ActionExercise_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace plumbing_interface_demo

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<plumbing_interface_demo::action::ActionExercise_FeedbackMessage>()
{
  return &::plumbing_interface_demo::action::rosidl_typesupport_cpp::ActionExercise_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, plumbing_interface_demo, action, ActionExercise_FeedbackMessage)() {
  return get_message_type_support_handle<plumbing_interface_demo::action::ActionExercise_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "plumbing_interface_demo/action/detail/action_exercise__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace plumbing_interface_demo
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t ActionExercise_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace plumbing_interface_demo

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<plumbing_interface_demo::action::ActionExercise>()
{
  using ::plumbing_interface_demo::action::rosidl_typesupport_cpp::ActionExercise_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  ActionExercise_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::plumbing_interface_demo::action::ActionExercise::Impl::SendGoalService>();
  ActionExercise_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::plumbing_interface_demo::action::ActionExercise::Impl::GetResultService>();
  ActionExercise_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::plumbing_interface_demo::action::ActionExercise::Impl::CancelGoalService>();
  ActionExercise_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::plumbing_interface_demo::action::ActionExercise::Impl::FeedbackMessage>();
  ActionExercise_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::plumbing_interface_demo::action::ActionExercise::Impl::GoalStatusMessage>();
  return &ActionExercise_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
