// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from plumbing_interface_demo:action/ActionMsg.idl
// generated code does not contain a copyright notice

#ifndef PLUMBING_INTERFACE_DEMO__ACTION__DETAIL__ACTION_MSG__STRUCT_H_
#define PLUMBING_INTERFACE_DEMO__ACTION__DETAIL__ACTION_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/ActionMsg in the package plumbing_interface_demo.
typedef struct plumbing_interface_demo__action__ActionMsg_Goal
{
  int64_t num;
} plumbing_interface_demo__action__ActionMsg_Goal;

// Struct for a sequence of plumbing_interface_demo__action__ActionMsg_Goal.
typedef struct plumbing_interface_demo__action__ActionMsg_Goal__Sequence
{
  plumbing_interface_demo__action__ActionMsg_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} plumbing_interface_demo__action__ActionMsg_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/ActionMsg in the package plumbing_interface_demo.
typedef struct plumbing_interface_demo__action__ActionMsg_Result
{
  int64_t sum;
} plumbing_interface_demo__action__ActionMsg_Result;

// Struct for a sequence of plumbing_interface_demo__action__ActionMsg_Result.
typedef struct plumbing_interface_demo__action__ActionMsg_Result__Sequence
{
  plumbing_interface_demo__action__ActionMsg_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} plumbing_interface_demo__action__ActionMsg_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/ActionMsg in the package plumbing_interface_demo.
typedef struct plumbing_interface_demo__action__ActionMsg_Feedback
{
  double progess;
} plumbing_interface_demo__action__ActionMsg_Feedback;

// Struct for a sequence of plumbing_interface_demo__action__ActionMsg_Feedback.
typedef struct plumbing_interface_demo__action__ActionMsg_Feedback__Sequence
{
  plumbing_interface_demo__action__ActionMsg_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} plumbing_interface_demo__action__ActionMsg_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "plumbing_interface_demo/action/detail/action_msg__struct.h"

/// Struct defined in action/ActionMsg in the package plumbing_interface_demo.
typedef struct plumbing_interface_demo__action__ActionMsg_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  plumbing_interface_demo__action__ActionMsg_Goal goal;
} plumbing_interface_demo__action__ActionMsg_SendGoal_Request;

// Struct for a sequence of plumbing_interface_demo__action__ActionMsg_SendGoal_Request.
typedef struct plumbing_interface_demo__action__ActionMsg_SendGoal_Request__Sequence
{
  plumbing_interface_demo__action__ActionMsg_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} plumbing_interface_demo__action__ActionMsg_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ActionMsg in the package plumbing_interface_demo.
typedef struct plumbing_interface_demo__action__ActionMsg_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} plumbing_interface_demo__action__ActionMsg_SendGoal_Response;

// Struct for a sequence of plumbing_interface_demo__action__ActionMsg_SendGoal_Response.
typedef struct plumbing_interface_demo__action__ActionMsg_SendGoal_Response__Sequence
{
  plumbing_interface_demo__action__ActionMsg_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} plumbing_interface_demo__action__ActionMsg_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ActionMsg in the package plumbing_interface_demo.
typedef struct plumbing_interface_demo__action__ActionMsg_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} plumbing_interface_demo__action__ActionMsg_GetResult_Request;

// Struct for a sequence of plumbing_interface_demo__action__ActionMsg_GetResult_Request.
typedef struct plumbing_interface_demo__action__ActionMsg_GetResult_Request__Sequence
{
  plumbing_interface_demo__action__ActionMsg_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} plumbing_interface_demo__action__ActionMsg_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "plumbing_interface_demo/action/detail/action_msg__struct.h"

/// Struct defined in action/ActionMsg in the package plumbing_interface_demo.
typedef struct plumbing_interface_demo__action__ActionMsg_GetResult_Response
{
  int8_t status;
  plumbing_interface_demo__action__ActionMsg_Result result;
} plumbing_interface_demo__action__ActionMsg_GetResult_Response;

// Struct for a sequence of plumbing_interface_demo__action__ActionMsg_GetResult_Response.
typedef struct plumbing_interface_demo__action__ActionMsg_GetResult_Response__Sequence
{
  plumbing_interface_demo__action__ActionMsg_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} plumbing_interface_demo__action__ActionMsg_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "plumbing_interface_demo/action/detail/action_msg__struct.h"

/// Struct defined in action/ActionMsg in the package plumbing_interface_demo.
typedef struct plumbing_interface_demo__action__ActionMsg_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  plumbing_interface_demo__action__ActionMsg_Feedback feedback;
} plumbing_interface_demo__action__ActionMsg_FeedbackMessage;

// Struct for a sequence of plumbing_interface_demo__action__ActionMsg_FeedbackMessage.
typedef struct plumbing_interface_demo__action__ActionMsg_FeedbackMessage__Sequence
{
  plumbing_interface_demo__action__ActionMsg_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} plumbing_interface_demo__action__ActionMsg_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PLUMBING_INTERFACE_DEMO__ACTION__DETAIL__ACTION_MSG__STRUCT_H_
