// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from plumbing_interface_demo:action/ActionExercise.idl
// generated code does not contain a copyright notice

#ifndef PLUMBING_INTERFACE_DEMO__ACTION__DETAIL__ACTION_EXERCISE__FUNCTIONS_H_
#define PLUMBING_INTERFACE_DEMO__ACTION__DETAIL__ACTION_EXERCISE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "plumbing_interface_demo/msg/rosidl_generator_c__visibility_control.h"

#include "plumbing_interface_demo/action/detail/action_exercise__struct.h"

/// Initialize action/ActionExercise message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * plumbing_interface_demo__action__ActionExercise_Goal
 * )) before or use
 * plumbing_interface_demo__action__ActionExercise_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
bool
plumbing_interface_demo__action__ActionExercise_Goal__init(plumbing_interface_demo__action__ActionExercise_Goal * msg);

/// Finalize action/ActionExercise message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
void
plumbing_interface_demo__action__ActionExercise_Goal__fini(plumbing_interface_demo__action__ActionExercise_Goal * msg);

/// Create action/ActionExercise message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * plumbing_interface_demo__action__ActionExercise_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
plumbing_interface_demo__action__ActionExercise_Goal *
plumbing_interface_demo__action__ActionExercise_Goal__create();

/// Destroy action/ActionExercise message.
/**
 * It calls
 * plumbing_interface_demo__action__ActionExercise_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
void
plumbing_interface_demo__action__ActionExercise_Goal__destroy(plumbing_interface_demo__action__ActionExercise_Goal * msg);

/// Check for action/ActionExercise message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
bool
plumbing_interface_demo__action__ActionExercise_Goal__are_equal(const plumbing_interface_demo__action__ActionExercise_Goal * lhs, const plumbing_interface_demo__action__ActionExercise_Goal * rhs);

/// Copy a action/ActionExercise message.
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
plumbing_interface_demo__action__ActionExercise_Goal__copy(
  const plumbing_interface_demo__action__ActionExercise_Goal * input,
  plumbing_interface_demo__action__ActionExercise_Goal * output);

/// Initialize array of action/ActionExercise messages.
/**
 * It allocates the memory for the number of elements and calls
 * plumbing_interface_demo__action__ActionExercise_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
bool
plumbing_interface_demo__action__ActionExercise_Goal__Sequence__init(plumbing_interface_demo__action__ActionExercise_Goal__Sequence * array, size_t size);

/// Finalize array of action/ActionExercise messages.
/**
 * It calls
 * plumbing_interface_demo__action__ActionExercise_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
void
plumbing_interface_demo__action__ActionExercise_Goal__Sequence__fini(plumbing_interface_demo__action__ActionExercise_Goal__Sequence * array);

/// Create array of action/ActionExercise messages.
/**
 * It allocates the memory for the array and calls
 * plumbing_interface_demo__action__ActionExercise_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
plumbing_interface_demo__action__ActionExercise_Goal__Sequence *
plumbing_interface_demo__action__ActionExercise_Goal__Sequence__create(size_t size);

/// Destroy array of action/ActionExercise messages.
/**
 * It calls
 * plumbing_interface_demo__action__ActionExercise_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
void
plumbing_interface_demo__action__ActionExercise_Goal__Sequence__destroy(plumbing_interface_demo__action__ActionExercise_Goal__Sequence * array);

/// Check for action/ActionExercise message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
bool
plumbing_interface_demo__action__ActionExercise_Goal__Sequence__are_equal(const plumbing_interface_demo__action__ActionExercise_Goal__Sequence * lhs, const plumbing_interface_demo__action__ActionExercise_Goal__Sequence * rhs);

/// Copy an array of action/ActionExercise messages.
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
plumbing_interface_demo__action__ActionExercise_Goal__Sequence__copy(
  const plumbing_interface_demo__action__ActionExercise_Goal__Sequence * input,
  plumbing_interface_demo__action__ActionExercise_Goal__Sequence * output);

/// Initialize action/ActionExercise message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * plumbing_interface_demo__action__ActionExercise_Result
 * )) before or use
 * plumbing_interface_demo__action__ActionExercise_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
bool
plumbing_interface_demo__action__ActionExercise_Result__init(plumbing_interface_demo__action__ActionExercise_Result * msg);

/// Finalize action/ActionExercise message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
void
plumbing_interface_demo__action__ActionExercise_Result__fini(plumbing_interface_demo__action__ActionExercise_Result * msg);

/// Create action/ActionExercise message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * plumbing_interface_demo__action__ActionExercise_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
plumbing_interface_demo__action__ActionExercise_Result *
plumbing_interface_demo__action__ActionExercise_Result__create();

/// Destroy action/ActionExercise message.
/**
 * It calls
 * plumbing_interface_demo__action__ActionExercise_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
void
plumbing_interface_demo__action__ActionExercise_Result__destroy(plumbing_interface_demo__action__ActionExercise_Result * msg);

/// Check for action/ActionExercise message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
bool
plumbing_interface_demo__action__ActionExercise_Result__are_equal(const plumbing_interface_demo__action__ActionExercise_Result * lhs, const plumbing_interface_demo__action__ActionExercise_Result * rhs);

/// Copy a action/ActionExercise message.
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
plumbing_interface_demo__action__ActionExercise_Result__copy(
  const plumbing_interface_demo__action__ActionExercise_Result * input,
  plumbing_interface_demo__action__ActionExercise_Result * output);

/// Initialize array of action/ActionExercise messages.
/**
 * It allocates the memory for the number of elements and calls
 * plumbing_interface_demo__action__ActionExercise_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
bool
plumbing_interface_demo__action__ActionExercise_Result__Sequence__init(plumbing_interface_demo__action__ActionExercise_Result__Sequence * array, size_t size);

/// Finalize array of action/ActionExercise messages.
/**
 * It calls
 * plumbing_interface_demo__action__ActionExercise_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
void
plumbing_interface_demo__action__ActionExercise_Result__Sequence__fini(plumbing_interface_demo__action__ActionExercise_Result__Sequence * array);

/// Create array of action/ActionExercise messages.
/**
 * It allocates the memory for the array and calls
 * plumbing_interface_demo__action__ActionExercise_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
plumbing_interface_demo__action__ActionExercise_Result__Sequence *
plumbing_interface_demo__action__ActionExercise_Result__Sequence__create(size_t size);

/// Destroy array of action/ActionExercise messages.
/**
 * It calls
 * plumbing_interface_demo__action__ActionExercise_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
void
plumbing_interface_demo__action__ActionExercise_Result__Sequence__destroy(plumbing_interface_demo__action__ActionExercise_Result__Sequence * array);

/// Check for action/ActionExercise message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
bool
plumbing_interface_demo__action__ActionExercise_Result__Sequence__are_equal(const plumbing_interface_demo__action__ActionExercise_Result__Sequence * lhs, const plumbing_interface_demo__action__ActionExercise_Result__Sequence * rhs);

/// Copy an array of action/ActionExercise messages.
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
plumbing_interface_demo__action__ActionExercise_Result__Sequence__copy(
  const plumbing_interface_demo__action__ActionExercise_Result__Sequence * input,
  plumbing_interface_demo__action__ActionExercise_Result__Sequence * output);

/// Initialize action/ActionExercise message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * plumbing_interface_demo__action__ActionExercise_Feedback
 * )) before or use
 * plumbing_interface_demo__action__ActionExercise_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
bool
plumbing_interface_demo__action__ActionExercise_Feedback__init(plumbing_interface_demo__action__ActionExercise_Feedback * msg);

/// Finalize action/ActionExercise message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
void
plumbing_interface_demo__action__ActionExercise_Feedback__fini(plumbing_interface_demo__action__ActionExercise_Feedback * msg);

/// Create action/ActionExercise message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * plumbing_interface_demo__action__ActionExercise_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
plumbing_interface_demo__action__ActionExercise_Feedback *
plumbing_interface_demo__action__ActionExercise_Feedback__create();

/// Destroy action/ActionExercise message.
/**
 * It calls
 * plumbing_interface_demo__action__ActionExercise_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
void
plumbing_interface_demo__action__ActionExercise_Feedback__destroy(plumbing_interface_demo__action__ActionExercise_Feedback * msg);

/// Check for action/ActionExercise message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
bool
plumbing_interface_demo__action__ActionExercise_Feedback__are_equal(const plumbing_interface_demo__action__ActionExercise_Feedback * lhs, const plumbing_interface_demo__action__ActionExercise_Feedback * rhs);

/// Copy a action/ActionExercise message.
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
plumbing_interface_demo__action__ActionExercise_Feedback__copy(
  const plumbing_interface_demo__action__ActionExercise_Feedback * input,
  plumbing_interface_demo__action__ActionExercise_Feedback * output);

/// Initialize array of action/ActionExercise messages.
/**
 * It allocates the memory for the number of elements and calls
 * plumbing_interface_demo__action__ActionExercise_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
bool
plumbing_interface_demo__action__ActionExercise_Feedback__Sequence__init(plumbing_interface_demo__action__ActionExercise_Feedback__Sequence * array, size_t size);

/// Finalize array of action/ActionExercise messages.
/**
 * It calls
 * plumbing_interface_demo__action__ActionExercise_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
void
plumbing_interface_demo__action__ActionExercise_Feedback__Sequence__fini(plumbing_interface_demo__action__ActionExercise_Feedback__Sequence * array);

/// Create array of action/ActionExercise messages.
/**
 * It allocates the memory for the array and calls
 * plumbing_interface_demo__action__ActionExercise_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
plumbing_interface_demo__action__ActionExercise_Feedback__Sequence *
plumbing_interface_demo__action__ActionExercise_Feedback__Sequence__create(size_t size);

/// Destroy array of action/ActionExercise messages.
/**
 * It calls
 * plumbing_interface_demo__action__ActionExercise_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
void
plumbing_interface_demo__action__ActionExercise_Feedback__Sequence__destroy(plumbing_interface_demo__action__ActionExercise_Feedback__Sequence * array);

/// Check for action/ActionExercise message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
bool
plumbing_interface_demo__action__ActionExercise_Feedback__Sequence__are_equal(const plumbing_interface_demo__action__ActionExercise_Feedback__Sequence * lhs, const plumbing_interface_demo__action__ActionExercise_Feedback__Sequence * rhs);

/// Copy an array of action/ActionExercise messages.
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
plumbing_interface_demo__action__ActionExercise_Feedback__Sequence__copy(
  const plumbing_interface_demo__action__ActionExercise_Feedback__Sequence * input,
  plumbing_interface_demo__action__ActionExercise_Feedback__Sequence * output);

/// Initialize action/ActionExercise message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * plumbing_interface_demo__action__ActionExercise_SendGoal_Request
 * )) before or use
 * plumbing_interface_demo__action__ActionExercise_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
bool
plumbing_interface_demo__action__ActionExercise_SendGoal_Request__init(plumbing_interface_demo__action__ActionExercise_SendGoal_Request * msg);

/// Finalize action/ActionExercise message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
void
plumbing_interface_demo__action__ActionExercise_SendGoal_Request__fini(plumbing_interface_demo__action__ActionExercise_SendGoal_Request * msg);

/// Create action/ActionExercise message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * plumbing_interface_demo__action__ActionExercise_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
plumbing_interface_demo__action__ActionExercise_SendGoal_Request *
plumbing_interface_demo__action__ActionExercise_SendGoal_Request__create();

/// Destroy action/ActionExercise message.
/**
 * It calls
 * plumbing_interface_demo__action__ActionExercise_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
void
plumbing_interface_demo__action__ActionExercise_SendGoal_Request__destroy(plumbing_interface_demo__action__ActionExercise_SendGoal_Request * msg);

/// Check for action/ActionExercise message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
bool
plumbing_interface_demo__action__ActionExercise_SendGoal_Request__are_equal(const plumbing_interface_demo__action__ActionExercise_SendGoal_Request * lhs, const plumbing_interface_demo__action__ActionExercise_SendGoal_Request * rhs);

/// Copy a action/ActionExercise message.
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
plumbing_interface_demo__action__ActionExercise_SendGoal_Request__copy(
  const plumbing_interface_demo__action__ActionExercise_SendGoal_Request * input,
  plumbing_interface_demo__action__ActionExercise_SendGoal_Request * output);

/// Initialize array of action/ActionExercise messages.
/**
 * It allocates the memory for the number of elements and calls
 * plumbing_interface_demo__action__ActionExercise_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
bool
plumbing_interface_demo__action__ActionExercise_SendGoal_Request__Sequence__init(plumbing_interface_demo__action__ActionExercise_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/ActionExercise messages.
/**
 * It calls
 * plumbing_interface_demo__action__ActionExercise_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
void
plumbing_interface_demo__action__ActionExercise_SendGoal_Request__Sequence__fini(plumbing_interface_demo__action__ActionExercise_SendGoal_Request__Sequence * array);

/// Create array of action/ActionExercise messages.
/**
 * It allocates the memory for the array and calls
 * plumbing_interface_demo__action__ActionExercise_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
plumbing_interface_demo__action__ActionExercise_SendGoal_Request__Sequence *
plumbing_interface_demo__action__ActionExercise_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/ActionExercise messages.
/**
 * It calls
 * plumbing_interface_demo__action__ActionExercise_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
void
plumbing_interface_demo__action__ActionExercise_SendGoal_Request__Sequence__destroy(plumbing_interface_demo__action__ActionExercise_SendGoal_Request__Sequence * array);

/// Check for action/ActionExercise message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
bool
plumbing_interface_demo__action__ActionExercise_SendGoal_Request__Sequence__are_equal(const plumbing_interface_demo__action__ActionExercise_SendGoal_Request__Sequence * lhs, const plumbing_interface_demo__action__ActionExercise_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/ActionExercise messages.
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
plumbing_interface_demo__action__ActionExercise_SendGoal_Request__Sequence__copy(
  const plumbing_interface_demo__action__ActionExercise_SendGoal_Request__Sequence * input,
  plumbing_interface_demo__action__ActionExercise_SendGoal_Request__Sequence * output);

/// Initialize action/ActionExercise message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * plumbing_interface_demo__action__ActionExercise_SendGoal_Response
 * )) before or use
 * plumbing_interface_demo__action__ActionExercise_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
bool
plumbing_interface_demo__action__ActionExercise_SendGoal_Response__init(plumbing_interface_demo__action__ActionExercise_SendGoal_Response * msg);

/// Finalize action/ActionExercise message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
void
plumbing_interface_demo__action__ActionExercise_SendGoal_Response__fini(plumbing_interface_demo__action__ActionExercise_SendGoal_Response * msg);

/// Create action/ActionExercise message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * plumbing_interface_demo__action__ActionExercise_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
plumbing_interface_demo__action__ActionExercise_SendGoal_Response *
plumbing_interface_demo__action__ActionExercise_SendGoal_Response__create();

/// Destroy action/ActionExercise message.
/**
 * It calls
 * plumbing_interface_demo__action__ActionExercise_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
void
plumbing_interface_demo__action__ActionExercise_SendGoal_Response__destroy(plumbing_interface_demo__action__ActionExercise_SendGoal_Response * msg);

/// Check for action/ActionExercise message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
bool
plumbing_interface_demo__action__ActionExercise_SendGoal_Response__are_equal(const plumbing_interface_demo__action__ActionExercise_SendGoal_Response * lhs, const plumbing_interface_demo__action__ActionExercise_SendGoal_Response * rhs);

/// Copy a action/ActionExercise message.
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
plumbing_interface_demo__action__ActionExercise_SendGoal_Response__copy(
  const plumbing_interface_demo__action__ActionExercise_SendGoal_Response * input,
  plumbing_interface_demo__action__ActionExercise_SendGoal_Response * output);

/// Initialize array of action/ActionExercise messages.
/**
 * It allocates the memory for the number of elements and calls
 * plumbing_interface_demo__action__ActionExercise_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
bool
plumbing_interface_demo__action__ActionExercise_SendGoal_Response__Sequence__init(plumbing_interface_demo__action__ActionExercise_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/ActionExercise messages.
/**
 * It calls
 * plumbing_interface_demo__action__ActionExercise_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
void
plumbing_interface_demo__action__ActionExercise_SendGoal_Response__Sequence__fini(plumbing_interface_demo__action__ActionExercise_SendGoal_Response__Sequence * array);

/// Create array of action/ActionExercise messages.
/**
 * It allocates the memory for the array and calls
 * plumbing_interface_demo__action__ActionExercise_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
plumbing_interface_demo__action__ActionExercise_SendGoal_Response__Sequence *
plumbing_interface_demo__action__ActionExercise_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/ActionExercise messages.
/**
 * It calls
 * plumbing_interface_demo__action__ActionExercise_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
void
plumbing_interface_demo__action__ActionExercise_SendGoal_Response__Sequence__destroy(plumbing_interface_demo__action__ActionExercise_SendGoal_Response__Sequence * array);

/// Check for action/ActionExercise message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
bool
plumbing_interface_demo__action__ActionExercise_SendGoal_Response__Sequence__are_equal(const plumbing_interface_demo__action__ActionExercise_SendGoal_Response__Sequence * lhs, const plumbing_interface_demo__action__ActionExercise_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/ActionExercise messages.
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
plumbing_interface_demo__action__ActionExercise_SendGoal_Response__Sequence__copy(
  const plumbing_interface_demo__action__ActionExercise_SendGoal_Response__Sequence * input,
  plumbing_interface_demo__action__ActionExercise_SendGoal_Response__Sequence * output);

/// Initialize action/ActionExercise message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * plumbing_interface_demo__action__ActionExercise_GetResult_Request
 * )) before or use
 * plumbing_interface_demo__action__ActionExercise_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
bool
plumbing_interface_demo__action__ActionExercise_GetResult_Request__init(plumbing_interface_demo__action__ActionExercise_GetResult_Request * msg);

/// Finalize action/ActionExercise message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
void
plumbing_interface_demo__action__ActionExercise_GetResult_Request__fini(plumbing_interface_demo__action__ActionExercise_GetResult_Request * msg);

/// Create action/ActionExercise message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * plumbing_interface_demo__action__ActionExercise_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
plumbing_interface_demo__action__ActionExercise_GetResult_Request *
plumbing_interface_demo__action__ActionExercise_GetResult_Request__create();

/// Destroy action/ActionExercise message.
/**
 * It calls
 * plumbing_interface_demo__action__ActionExercise_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
void
plumbing_interface_demo__action__ActionExercise_GetResult_Request__destroy(plumbing_interface_demo__action__ActionExercise_GetResult_Request * msg);

/// Check for action/ActionExercise message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
bool
plumbing_interface_demo__action__ActionExercise_GetResult_Request__are_equal(const plumbing_interface_demo__action__ActionExercise_GetResult_Request * lhs, const plumbing_interface_demo__action__ActionExercise_GetResult_Request * rhs);

/// Copy a action/ActionExercise message.
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
plumbing_interface_demo__action__ActionExercise_GetResult_Request__copy(
  const plumbing_interface_demo__action__ActionExercise_GetResult_Request * input,
  plumbing_interface_demo__action__ActionExercise_GetResult_Request * output);

/// Initialize array of action/ActionExercise messages.
/**
 * It allocates the memory for the number of elements and calls
 * plumbing_interface_demo__action__ActionExercise_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
bool
plumbing_interface_demo__action__ActionExercise_GetResult_Request__Sequence__init(plumbing_interface_demo__action__ActionExercise_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/ActionExercise messages.
/**
 * It calls
 * plumbing_interface_demo__action__ActionExercise_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
void
plumbing_interface_demo__action__ActionExercise_GetResult_Request__Sequence__fini(plumbing_interface_demo__action__ActionExercise_GetResult_Request__Sequence * array);

/// Create array of action/ActionExercise messages.
/**
 * It allocates the memory for the array and calls
 * plumbing_interface_demo__action__ActionExercise_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
plumbing_interface_demo__action__ActionExercise_GetResult_Request__Sequence *
plumbing_interface_demo__action__ActionExercise_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/ActionExercise messages.
/**
 * It calls
 * plumbing_interface_demo__action__ActionExercise_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
void
plumbing_interface_demo__action__ActionExercise_GetResult_Request__Sequence__destroy(plumbing_interface_demo__action__ActionExercise_GetResult_Request__Sequence * array);

/// Check for action/ActionExercise message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
bool
plumbing_interface_demo__action__ActionExercise_GetResult_Request__Sequence__are_equal(const plumbing_interface_demo__action__ActionExercise_GetResult_Request__Sequence * lhs, const plumbing_interface_demo__action__ActionExercise_GetResult_Request__Sequence * rhs);

/// Copy an array of action/ActionExercise messages.
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
plumbing_interface_demo__action__ActionExercise_GetResult_Request__Sequence__copy(
  const plumbing_interface_demo__action__ActionExercise_GetResult_Request__Sequence * input,
  plumbing_interface_demo__action__ActionExercise_GetResult_Request__Sequence * output);

/// Initialize action/ActionExercise message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * plumbing_interface_demo__action__ActionExercise_GetResult_Response
 * )) before or use
 * plumbing_interface_demo__action__ActionExercise_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
bool
plumbing_interface_demo__action__ActionExercise_GetResult_Response__init(plumbing_interface_demo__action__ActionExercise_GetResult_Response * msg);

/// Finalize action/ActionExercise message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
void
plumbing_interface_demo__action__ActionExercise_GetResult_Response__fini(plumbing_interface_demo__action__ActionExercise_GetResult_Response * msg);

/// Create action/ActionExercise message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * plumbing_interface_demo__action__ActionExercise_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
plumbing_interface_demo__action__ActionExercise_GetResult_Response *
plumbing_interface_demo__action__ActionExercise_GetResult_Response__create();

/// Destroy action/ActionExercise message.
/**
 * It calls
 * plumbing_interface_demo__action__ActionExercise_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
void
plumbing_interface_demo__action__ActionExercise_GetResult_Response__destroy(plumbing_interface_demo__action__ActionExercise_GetResult_Response * msg);

/// Check for action/ActionExercise message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
bool
plumbing_interface_demo__action__ActionExercise_GetResult_Response__are_equal(const plumbing_interface_demo__action__ActionExercise_GetResult_Response * lhs, const plumbing_interface_demo__action__ActionExercise_GetResult_Response * rhs);

/// Copy a action/ActionExercise message.
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
plumbing_interface_demo__action__ActionExercise_GetResult_Response__copy(
  const plumbing_interface_demo__action__ActionExercise_GetResult_Response * input,
  plumbing_interface_demo__action__ActionExercise_GetResult_Response * output);

/// Initialize array of action/ActionExercise messages.
/**
 * It allocates the memory for the number of elements and calls
 * plumbing_interface_demo__action__ActionExercise_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
bool
plumbing_interface_demo__action__ActionExercise_GetResult_Response__Sequence__init(plumbing_interface_demo__action__ActionExercise_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/ActionExercise messages.
/**
 * It calls
 * plumbing_interface_demo__action__ActionExercise_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
void
plumbing_interface_demo__action__ActionExercise_GetResult_Response__Sequence__fini(plumbing_interface_demo__action__ActionExercise_GetResult_Response__Sequence * array);

/// Create array of action/ActionExercise messages.
/**
 * It allocates the memory for the array and calls
 * plumbing_interface_demo__action__ActionExercise_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
plumbing_interface_demo__action__ActionExercise_GetResult_Response__Sequence *
plumbing_interface_demo__action__ActionExercise_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/ActionExercise messages.
/**
 * It calls
 * plumbing_interface_demo__action__ActionExercise_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
void
plumbing_interface_demo__action__ActionExercise_GetResult_Response__Sequence__destroy(plumbing_interface_demo__action__ActionExercise_GetResult_Response__Sequence * array);

/// Check for action/ActionExercise message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
bool
plumbing_interface_demo__action__ActionExercise_GetResult_Response__Sequence__are_equal(const plumbing_interface_demo__action__ActionExercise_GetResult_Response__Sequence * lhs, const plumbing_interface_demo__action__ActionExercise_GetResult_Response__Sequence * rhs);

/// Copy an array of action/ActionExercise messages.
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
plumbing_interface_demo__action__ActionExercise_GetResult_Response__Sequence__copy(
  const plumbing_interface_demo__action__ActionExercise_GetResult_Response__Sequence * input,
  plumbing_interface_demo__action__ActionExercise_GetResult_Response__Sequence * output);

/// Initialize action/ActionExercise message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * plumbing_interface_demo__action__ActionExercise_FeedbackMessage
 * )) before or use
 * plumbing_interface_demo__action__ActionExercise_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
bool
plumbing_interface_demo__action__ActionExercise_FeedbackMessage__init(plumbing_interface_demo__action__ActionExercise_FeedbackMessage * msg);

/// Finalize action/ActionExercise message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
void
plumbing_interface_demo__action__ActionExercise_FeedbackMessage__fini(plumbing_interface_demo__action__ActionExercise_FeedbackMessage * msg);

/// Create action/ActionExercise message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * plumbing_interface_demo__action__ActionExercise_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
plumbing_interface_demo__action__ActionExercise_FeedbackMessage *
plumbing_interface_demo__action__ActionExercise_FeedbackMessage__create();

/// Destroy action/ActionExercise message.
/**
 * It calls
 * plumbing_interface_demo__action__ActionExercise_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
void
plumbing_interface_demo__action__ActionExercise_FeedbackMessage__destroy(plumbing_interface_demo__action__ActionExercise_FeedbackMessage * msg);

/// Check for action/ActionExercise message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
bool
plumbing_interface_demo__action__ActionExercise_FeedbackMessage__are_equal(const plumbing_interface_demo__action__ActionExercise_FeedbackMessage * lhs, const plumbing_interface_demo__action__ActionExercise_FeedbackMessage * rhs);

/// Copy a action/ActionExercise message.
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
plumbing_interface_demo__action__ActionExercise_FeedbackMessage__copy(
  const plumbing_interface_demo__action__ActionExercise_FeedbackMessage * input,
  plumbing_interface_demo__action__ActionExercise_FeedbackMessage * output);

/// Initialize array of action/ActionExercise messages.
/**
 * It allocates the memory for the number of elements and calls
 * plumbing_interface_demo__action__ActionExercise_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
bool
plumbing_interface_demo__action__ActionExercise_FeedbackMessage__Sequence__init(plumbing_interface_demo__action__ActionExercise_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/ActionExercise messages.
/**
 * It calls
 * plumbing_interface_demo__action__ActionExercise_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
void
plumbing_interface_demo__action__ActionExercise_FeedbackMessage__Sequence__fini(plumbing_interface_demo__action__ActionExercise_FeedbackMessage__Sequence * array);

/// Create array of action/ActionExercise messages.
/**
 * It allocates the memory for the array and calls
 * plumbing_interface_demo__action__ActionExercise_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
plumbing_interface_demo__action__ActionExercise_FeedbackMessage__Sequence *
plumbing_interface_demo__action__ActionExercise_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/ActionExercise messages.
/**
 * It calls
 * plumbing_interface_demo__action__ActionExercise_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
void
plumbing_interface_demo__action__ActionExercise_FeedbackMessage__Sequence__destroy(plumbing_interface_demo__action__ActionExercise_FeedbackMessage__Sequence * array);

/// Check for action/ActionExercise message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_plumbing_interface_demo
bool
plumbing_interface_demo__action__ActionExercise_FeedbackMessage__Sequence__are_equal(const plumbing_interface_demo__action__ActionExercise_FeedbackMessage__Sequence * lhs, const plumbing_interface_demo__action__ActionExercise_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/ActionExercise messages.
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
plumbing_interface_demo__action__ActionExercise_FeedbackMessage__Sequence__copy(
  const plumbing_interface_demo__action__ActionExercise_FeedbackMessage__Sequence * input,
  plumbing_interface_demo__action__ActionExercise_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PLUMBING_INTERFACE_DEMO__ACTION__DETAIL__ACTION_EXERCISE__FUNCTIONS_H_
