// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from plumbing_interface_demo:srv/ServiceExercise.idl
// generated code does not contain a copyright notice

#ifndef PLUMBING_INTERFACE_DEMO__SRV__DETAIL__SERVICE_EXERCISE__STRUCT_H_
#define PLUMBING_INTERFACE_DEMO__SRV__DETAIL__SERVICE_EXERCISE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ServiceExercise in the package plumbing_interface_demo.
typedef struct plumbing_interface_demo__srv__ServiceExercise_Request
{
  float x;
  float y;
  float theta;
} plumbing_interface_demo__srv__ServiceExercise_Request;

// Struct for a sequence of plumbing_interface_demo__srv__ServiceExercise_Request.
typedef struct plumbing_interface_demo__srv__ServiceExercise_Request__Sequence
{
  plumbing_interface_demo__srv__ServiceExercise_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} plumbing_interface_demo__srv__ServiceExercise_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ServiceExercise in the package plumbing_interface_demo.
typedef struct plumbing_interface_demo__srv__ServiceExercise_Response
{
  float distance;
} plumbing_interface_demo__srv__ServiceExercise_Response;

// Struct for a sequence of plumbing_interface_demo__srv__ServiceExercise_Response.
typedef struct plumbing_interface_demo__srv__ServiceExercise_Response__Sequence
{
  plumbing_interface_demo__srv__ServiceExercise_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} plumbing_interface_demo__srv__ServiceExercise_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PLUMBING_INTERFACE_DEMO__SRV__DETAIL__SERVICE_EXERCISE__STRUCT_H_
