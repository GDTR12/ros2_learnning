// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from plumbing_interface_demo:action/ActionExercise.idl
// generated code does not contain a copyright notice

#ifndef PLUMBING_INTERFACE_DEMO__ACTION__DETAIL__ACTION_EXERCISE__STRUCT_H_
#define PLUMBING_INTERFACE_DEMO__ACTION__DETAIL__ACTION_EXERCISE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/ActionExercise in the package plumbing_interface_demo.
typedef struct plumbing_interface_demo__action__ActionExercise_Goal
{
  float goal_x;
  float goal_y;
  float goal_theta;
} plumbing_interface_demo__action__ActionExercise_Goal;

// Struct for a sequence of plumbing_interface_demo__action__ActionExercise_Goal.
typedef struct plumbing_interface_demo__action__ActionExercise_Goal__Sequence
{
  plumbing_interface_demo__action__ActionExercise_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} plumbing_interface_demo__action__ActionExercise_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/ActionExercise in the package plumbing_interface_demo.
typedef struct plumbing_interface_demo__action__ActionExercise_Result
{
  float finally_x;
  float finally_y;
  float finally_theta;
} plumbing_interface_demo__action__ActionExercise_Result;

// Struct for a sequence of plumbing_interface_demo__action__ActionExercise_Result.
typedef struct plumbing_interface_demo__action__ActionExercise_Result__Sequence
{
  plumbing_interface_demo__action__ActionExercise_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} plumbing_interface_demo__action__ActionExercise_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/ActionExercise in the package plumbing_interface_demo.
typedef struct plumbing_interface_demo__action__ActionExercise_Feedback
{
  float distance;
} plumbing_interface_demo__action__ActionExercise_Feedback;

// Struct for a sequence of plumbing_interface_demo__action__ActionExercise_Feedback.
typedef struct plumbing_interface_demo__action__ActionExercise_Feedback__Sequence
{
  plumbing_interface_demo__action__ActionExercise_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} plumbing_interface_demo__action__ActionExercise_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "plumbing_interface_demo/action/detail/action_exercise__struct.h"

/// Struct defined in action/ActionExercise in the package plumbing_interface_demo.
typedef struct plumbing_interface_demo__action__ActionExercise_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  plumbing_interface_demo__action__ActionExercise_Goal goal;
} plumbing_interface_demo__action__ActionExercise_SendGoal_Request;

// Struct for a sequence of plumbing_interface_demo__action__ActionExercise_SendGoal_Request.
typedef struct plumbing_interface_demo__action__ActionExercise_SendGoal_Request__Sequence
{
  plumbing_interface_demo__action__ActionExercise_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} plumbing_interface_demo__action__ActionExercise_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ActionExercise in the package plumbing_interface_demo.
typedef struct plumbing_interface_demo__action__ActionExercise_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} plumbing_interface_demo__action__ActionExercise_SendGoal_Response;

// Struct for a sequence of plumbing_interface_demo__action__ActionExercise_SendGoal_Response.
typedef struct plumbing_interface_demo__action__ActionExercise_SendGoal_Response__Sequence
{
  plumbing_interface_demo__action__ActionExercise_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} plumbing_interface_demo__action__ActionExercise_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ActionExercise in the package plumbing_interface_demo.
typedef struct plumbing_interface_demo__action__ActionExercise_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} plumbing_interface_demo__action__ActionExercise_GetResult_Request;

// Struct for a sequence of plumbing_interface_demo__action__ActionExercise_GetResult_Request.
typedef struct plumbing_interface_demo__action__ActionExercise_GetResult_Request__Sequence
{
  plumbing_interface_demo__action__ActionExercise_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} plumbing_interface_demo__action__ActionExercise_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "plumbing_interface_demo/action/detail/action_exercise__struct.h"

/// Struct defined in action/ActionExercise in the package plumbing_interface_demo.
typedef struct plumbing_interface_demo__action__ActionExercise_GetResult_Response
{
  int8_t status;
  plumbing_interface_demo__action__ActionExercise_Result result;
} plumbing_interface_demo__action__ActionExercise_GetResult_Response;

// Struct for a sequence of plumbing_interface_demo__action__ActionExercise_GetResult_Response.
typedef struct plumbing_interface_demo__action__ActionExercise_GetResult_Response__Sequence
{
  plumbing_interface_demo__action__ActionExercise_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} plumbing_interface_demo__action__ActionExercise_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "plumbing_interface_demo/action/detail/action_exercise__struct.h"

/// Struct defined in action/ActionExercise in the package plumbing_interface_demo.
typedef struct plumbing_interface_demo__action__ActionExercise_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  plumbing_interface_demo__action__ActionExercise_Feedback feedback;
} plumbing_interface_demo__action__ActionExercise_FeedbackMessage;

// Struct for a sequence of plumbing_interface_demo__action__ActionExercise_FeedbackMessage.
typedef struct plumbing_interface_demo__action__ActionExercise_FeedbackMessage__Sequence
{
  plumbing_interface_demo__action__ActionExercise_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} plumbing_interface_demo__action__ActionExercise_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PLUMBING_INTERFACE_DEMO__ACTION__DETAIL__ACTION_EXERCISE__STRUCT_H_
