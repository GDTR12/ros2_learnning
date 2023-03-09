// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from plumbing_interface_demo:srv/ServiceExercise.idl
// generated code does not contain a copyright notice

#ifndef PLUMBING_INTERFACE_DEMO__SRV__DETAIL__SERVICE_EXERCISE__FUNCTIONS_H_
#define PLUMBING_INTERFACE_DEMO__SRV__DETAIL__SERVICE_EXERCISE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "plumbing_interface_demo/msg/rosidl_generator_c__visibility_control.h"

#include "plumbing_interface_demo/srv/detail/service_exercise__struct.h"

/// Initialize srv/ServiceExercise message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * plumbing_interface_demo__srv__ServiceExercise_Request
 * )) before or use
 * plumbing_interface_demo__srv__ServiceExercise_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
bool
plumbing_interface_demo__srv__ServiceExercise_Request__init(plumbing_interface_demo__srv__ServiceExercise_Request * msg);

/// Finalize srv/ServiceExercise message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
void
plumbing_interface_demo__srv__ServiceExercise_Request__fini(plumbing_interface_demo__srv__ServiceExercise_Request * msg);

/// Create srv/ServiceExercise message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * plumbing_interface_demo__srv__ServiceExercise_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
plumbing_interface_demo__srv__ServiceExercise_Request *
plumbing_interface_demo__srv__ServiceExercise_Request__create();

/// Destroy srv/ServiceExercise message.
/**
 * It calls
 * plumbing_interface_demo__srv__ServiceExercise_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
void
plumbing_interface_demo__srv__ServiceExercise_Request__destroy(plumbing_interface_demo__srv__ServiceExercise_Request * msg);

/// Check for srv/ServiceExercise message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
bool
plumbing_interface_demo__srv__ServiceExercise_Request__are_equal(const plumbing_interface_demo__srv__ServiceExercise_Request * lhs, const plumbing_interface_demo__srv__ServiceExercise_Request * rhs);

/// Copy a srv/ServiceExercise message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
bool
plumbing_interface_demo__srv__ServiceExercise_Request__copy(
  const plumbing_interface_demo__srv__ServiceExercise_Request * input,
  plumbing_interface_demo__srv__ServiceExercise_Request * output);

/// Initialize array of srv/ServiceExercise messages.
/**
 * It allocates the memory for the number of elements and calls
 * plumbing_interface_demo__srv__ServiceExercise_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
bool
plumbing_interface_demo__srv__ServiceExercise_Request__Sequence__init(plumbing_interface_demo__srv__ServiceExercise_Request__Sequence * array, size_t size);

/// Finalize array of srv/ServiceExercise messages.
/**
 * It calls
 * plumbing_interface_demo__srv__ServiceExercise_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
void
plumbing_interface_demo__srv__ServiceExercise_Request__Sequence__fini(plumbing_interface_demo__srv__ServiceExercise_Request__Sequence * array);

/// Create array of srv/ServiceExercise messages.
/**
 * It allocates the memory for the array and calls
 * plumbing_interface_demo__srv__ServiceExercise_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
plumbing_interface_demo__srv__ServiceExercise_Request__Sequence *
plumbing_interface_demo__srv__ServiceExercise_Request__Sequence__create(size_t size);

/// Destroy array of srv/ServiceExercise messages.
/**
 * It calls
 * plumbing_interface_demo__srv__ServiceExercise_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
void
plumbing_interface_demo__srv__ServiceExercise_Request__Sequence__destroy(plumbing_interface_demo__srv__ServiceExercise_Request__Sequence * array);

/// Check for srv/ServiceExercise message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
bool
plumbing_interface_demo__srv__ServiceExercise_Request__Sequence__are_equal(const plumbing_interface_demo__srv__ServiceExercise_Request__Sequence * lhs, const plumbing_interface_demo__srv__ServiceExercise_Request__Sequence * rhs);

/// Copy an array of srv/ServiceExercise messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
bool
plumbing_interface_demo__srv__ServiceExercise_Request__Sequence__copy(
  const plumbing_interface_demo__srv__ServiceExercise_Request__Sequence * input,
  plumbing_interface_demo__srv__ServiceExercise_Request__Sequence * output);

/// Initialize srv/ServiceExercise message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * plumbing_interface_demo__srv__ServiceExercise_Response
 * )) before or use
 * plumbing_interface_demo__srv__ServiceExercise_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
bool
plumbing_interface_demo__srv__ServiceExercise_Response__init(plumbing_interface_demo__srv__ServiceExercise_Response * msg);

/// Finalize srv/ServiceExercise message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
void
plumbing_interface_demo__srv__ServiceExercise_Response__fini(plumbing_interface_demo__srv__ServiceExercise_Response * msg);

/// Create srv/ServiceExercise message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * plumbing_interface_demo__srv__ServiceExercise_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
plumbing_interface_demo__srv__ServiceExercise_Response *
plumbing_interface_demo__srv__ServiceExercise_Response__create();

/// Destroy srv/ServiceExercise message.
/**
 * It calls
 * plumbing_interface_demo__srv__ServiceExercise_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
void
plumbing_interface_demo__srv__ServiceExercise_Response__destroy(plumbing_interface_demo__srv__ServiceExercise_Response * msg);

/// Check for srv/ServiceExercise message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
bool
plumbing_interface_demo__srv__ServiceExercise_Response__are_equal(const plumbing_interface_demo__srv__ServiceExercise_Response * lhs, const plumbing_interface_demo__srv__ServiceExercise_Response * rhs);

/// Copy a srv/ServiceExercise message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
bool
plumbing_interface_demo__srv__ServiceExercise_Response__copy(
  const plumbing_interface_demo__srv__ServiceExercise_Response * input,
  plumbing_interface_demo__srv__ServiceExercise_Response * output);

/// Initialize array of srv/ServiceExercise messages.
/**
 * It allocates the memory for the number of elements and calls
 * plumbing_interface_demo__srv__ServiceExercise_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
bool
plumbing_interface_demo__srv__ServiceExercise_Response__Sequence__init(plumbing_interface_demo__srv__ServiceExercise_Response__Sequence * array, size_t size);

/// Finalize array of srv/ServiceExercise messages.
/**
 * It calls
 * plumbing_interface_demo__srv__ServiceExercise_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
void
plumbing_interface_demo__srv__ServiceExercise_Response__Sequence__fini(plumbing_interface_demo__srv__ServiceExercise_Response__Sequence * array);

/// Create array of srv/ServiceExercise messages.
/**
 * It allocates the memory for the array and calls
 * plumbing_interface_demo__srv__ServiceExercise_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
plumbing_interface_demo__srv__ServiceExercise_Response__Sequence *
plumbing_interface_demo__srv__ServiceExercise_Response__Sequence__create(size_t size);

/// Destroy array of srv/ServiceExercise messages.
/**
 * It calls
 * plumbing_interface_demo__srv__ServiceExercise_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
void
plumbing_interface_demo__srv__ServiceExercise_Response__Sequence__destroy(plumbing_interface_demo__srv__ServiceExercise_Response__Sequence * array);

/// Check for srv/ServiceExercise message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
bool
plumbing_interface_demo__srv__ServiceExercise_Response__Sequence__are_equal(const plumbing_interface_demo__srv__ServiceExercise_Response__Sequence * lhs, const plumbing_interface_demo__srv__ServiceExercise_Response__Sequence * rhs);

/// Copy an array of srv/ServiceExercise messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
bool
plumbing_interface_demo__srv__ServiceExercise_Response__Sequence__copy(
  const plumbing_interface_demo__srv__ServiceExercise_Response__Sequence * input,
  plumbing_interface_demo__srv__ServiceExercise_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PLUMBING_INTERFACE_DEMO__SRV__DETAIL__SERVICE_EXERCISE__FUNCTIONS_H_
