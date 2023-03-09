// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from plumbing_interface_demo:action/ActionExercise.idl
// generated code does not contain a copyright notice
#include "plumbing_interface_demo/action/detail/action_exercise__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
plumbing_interface_demo__action__ActionExercise_Goal__init(plumbing_interface_demo__action__ActionExercise_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // goal_x
  // goal_y
  // goal_theta
  return true;
}

void
plumbing_interface_demo__action__ActionExercise_Goal__fini(plumbing_interface_demo__action__ActionExercise_Goal * msg)
{
  if (!msg) {
    return;
  }
  // goal_x
  // goal_y
  // goal_theta
}

bool
plumbing_interface_demo__action__ActionExercise_Goal__are_equal(const plumbing_interface_demo__action__ActionExercise_Goal * lhs, const plumbing_interface_demo__action__ActionExercise_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_x
  if (lhs->goal_x != rhs->goal_x) {
    return false;
  }
  // goal_y
  if (lhs->goal_y != rhs->goal_y) {
    return false;
  }
  // goal_theta
  if (lhs->goal_theta != rhs->goal_theta) {
    return false;
  }
  return true;
}

bool
plumbing_interface_demo__action__ActionExercise_Goal__copy(
  const plumbing_interface_demo__action__ActionExercise_Goal * input,
  plumbing_interface_demo__action__ActionExercise_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_x
  output->goal_x = input->goal_x;
  // goal_y
  output->goal_y = input->goal_y;
  // goal_theta
  output->goal_theta = input->goal_theta;
  return true;
}

plumbing_interface_demo__action__ActionExercise_Goal *
plumbing_interface_demo__action__ActionExercise_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plumbing_interface_demo__action__ActionExercise_Goal * msg = (plumbing_interface_demo__action__ActionExercise_Goal *)allocator.allocate(sizeof(plumbing_interface_demo__action__ActionExercise_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(plumbing_interface_demo__action__ActionExercise_Goal));
  bool success = plumbing_interface_demo__action__ActionExercise_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
plumbing_interface_demo__action__ActionExercise_Goal__destroy(plumbing_interface_demo__action__ActionExercise_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    plumbing_interface_demo__action__ActionExercise_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
plumbing_interface_demo__action__ActionExercise_Goal__Sequence__init(plumbing_interface_demo__action__ActionExercise_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plumbing_interface_demo__action__ActionExercise_Goal * data = NULL;

  if (size) {
    data = (plumbing_interface_demo__action__ActionExercise_Goal *)allocator.zero_allocate(size, sizeof(plumbing_interface_demo__action__ActionExercise_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = plumbing_interface_demo__action__ActionExercise_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        plumbing_interface_demo__action__ActionExercise_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
plumbing_interface_demo__action__ActionExercise_Goal__Sequence__fini(plumbing_interface_demo__action__ActionExercise_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      plumbing_interface_demo__action__ActionExercise_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

plumbing_interface_demo__action__ActionExercise_Goal__Sequence *
plumbing_interface_demo__action__ActionExercise_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plumbing_interface_demo__action__ActionExercise_Goal__Sequence * array = (plumbing_interface_demo__action__ActionExercise_Goal__Sequence *)allocator.allocate(sizeof(plumbing_interface_demo__action__ActionExercise_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = plumbing_interface_demo__action__ActionExercise_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
plumbing_interface_demo__action__ActionExercise_Goal__Sequence__destroy(plumbing_interface_demo__action__ActionExercise_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    plumbing_interface_demo__action__ActionExercise_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
plumbing_interface_demo__action__ActionExercise_Goal__Sequence__are_equal(const plumbing_interface_demo__action__ActionExercise_Goal__Sequence * lhs, const plumbing_interface_demo__action__ActionExercise_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!plumbing_interface_demo__action__ActionExercise_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
plumbing_interface_demo__action__ActionExercise_Goal__Sequence__copy(
  const plumbing_interface_demo__action__ActionExercise_Goal__Sequence * input,
  plumbing_interface_demo__action__ActionExercise_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(plumbing_interface_demo__action__ActionExercise_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    plumbing_interface_demo__action__ActionExercise_Goal * data =
      (plumbing_interface_demo__action__ActionExercise_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!plumbing_interface_demo__action__ActionExercise_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          plumbing_interface_demo__action__ActionExercise_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!plumbing_interface_demo__action__ActionExercise_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
plumbing_interface_demo__action__ActionExercise_Result__init(plumbing_interface_demo__action__ActionExercise_Result * msg)
{
  if (!msg) {
    return false;
  }
  // finally_x
  // finally_y
  // finally_theta
  return true;
}

void
plumbing_interface_demo__action__ActionExercise_Result__fini(plumbing_interface_demo__action__ActionExercise_Result * msg)
{
  if (!msg) {
    return;
  }
  // finally_x
  // finally_y
  // finally_theta
}

bool
plumbing_interface_demo__action__ActionExercise_Result__are_equal(const plumbing_interface_demo__action__ActionExercise_Result * lhs, const plumbing_interface_demo__action__ActionExercise_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // finally_x
  if (lhs->finally_x != rhs->finally_x) {
    return false;
  }
  // finally_y
  if (lhs->finally_y != rhs->finally_y) {
    return false;
  }
  // finally_theta
  if (lhs->finally_theta != rhs->finally_theta) {
    return false;
  }
  return true;
}

bool
plumbing_interface_demo__action__ActionExercise_Result__copy(
  const plumbing_interface_demo__action__ActionExercise_Result * input,
  plumbing_interface_demo__action__ActionExercise_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // finally_x
  output->finally_x = input->finally_x;
  // finally_y
  output->finally_y = input->finally_y;
  // finally_theta
  output->finally_theta = input->finally_theta;
  return true;
}

plumbing_interface_demo__action__ActionExercise_Result *
plumbing_interface_demo__action__ActionExercise_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plumbing_interface_demo__action__ActionExercise_Result * msg = (plumbing_interface_demo__action__ActionExercise_Result *)allocator.allocate(sizeof(plumbing_interface_demo__action__ActionExercise_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(plumbing_interface_demo__action__ActionExercise_Result));
  bool success = plumbing_interface_demo__action__ActionExercise_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
plumbing_interface_demo__action__ActionExercise_Result__destroy(plumbing_interface_demo__action__ActionExercise_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    plumbing_interface_demo__action__ActionExercise_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
plumbing_interface_demo__action__ActionExercise_Result__Sequence__init(plumbing_interface_demo__action__ActionExercise_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plumbing_interface_demo__action__ActionExercise_Result * data = NULL;

  if (size) {
    data = (plumbing_interface_demo__action__ActionExercise_Result *)allocator.zero_allocate(size, sizeof(plumbing_interface_demo__action__ActionExercise_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = plumbing_interface_demo__action__ActionExercise_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        plumbing_interface_demo__action__ActionExercise_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
plumbing_interface_demo__action__ActionExercise_Result__Sequence__fini(plumbing_interface_demo__action__ActionExercise_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      plumbing_interface_demo__action__ActionExercise_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

plumbing_interface_demo__action__ActionExercise_Result__Sequence *
plumbing_interface_demo__action__ActionExercise_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plumbing_interface_demo__action__ActionExercise_Result__Sequence * array = (plumbing_interface_demo__action__ActionExercise_Result__Sequence *)allocator.allocate(sizeof(plumbing_interface_demo__action__ActionExercise_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = plumbing_interface_demo__action__ActionExercise_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
plumbing_interface_demo__action__ActionExercise_Result__Sequence__destroy(plumbing_interface_demo__action__ActionExercise_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    plumbing_interface_demo__action__ActionExercise_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
plumbing_interface_demo__action__ActionExercise_Result__Sequence__are_equal(const plumbing_interface_demo__action__ActionExercise_Result__Sequence * lhs, const plumbing_interface_demo__action__ActionExercise_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!plumbing_interface_demo__action__ActionExercise_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
plumbing_interface_demo__action__ActionExercise_Result__Sequence__copy(
  const plumbing_interface_demo__action__ActionExercise_Result__Sequence * input,
  plumbing_interface_demo__action__ActionExercise_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(plumbing_interface_demo__action__ActionExercise_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    plumbing_interface_demo__action__ActionExercise_Result * data =
      (plumbing_interface_demo__action__ActionExercise_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!plumbing_interface_demo__action__ActionExercise_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          plumbing_interface_demo__action__ActionExercise_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!plumbing_interface_demo__action__ActionExercise_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
plumbing_interface_demo__action__ActionExercise_Feedback__init(plumbing_interface_demo__action__ActionExercise_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // distance
  return true;
}

void
plumbing_interface_demo__action__ActionExercise_Feedback__fini(plumbing_interface_demo__action__ActionExercise_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // distance
}

bool
plumbing_interface_demo__action__ActionExercise_Feedback__are_equal(const plumbing_interface_demo__action__ActionExercise_Feedback * lhs, const plumbing_interface_demo__action__ActionExercise_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  return true;
}

bool
plumbing_interface_demo__action__ActionExercise_Feedback__copy(
  const plumbing_interface_demo__action__ActionExercise_Feedback * input,
  plumbing_interface_demo__action__ActionExercise_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // distance
  output->distance = input->distance;
  return true;
}

plumbing_interface_demo__action__ActionExercise_Feedback *
plumbing_interface_demo__action__ActionExercise_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plumbing_interface_demo__action__ActionExercise_Feedback * msg = (plumbing_interface_demo__action__ActionExercise_Feedback *)allocator.allocate(sizeof(plumbing_interface_demo__action__ActionExercise_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(plumbing_interface_demo__action__ActionExercise_Feedback));
  bool success = plumbing_interface_demo__action__ActionExercise_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
plumbing_interface_demo__action__ActionExercise_Feedback__destroy(plumbing_interface_demo__action__ActionExercise_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    plumbing_interface_demo__action__ActionExercise_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
plumbing_interface_demo__action__ActionExercise_Feedback__Sequence__init(plumbing_interface_demo__action__ActionExercise_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plumbing_interface_demo__action__ActionExercise_Feedback * data = NULL;

  if (size) {
    data = (plumbing_interface_demo__action__ActionExercise_Feedback *)allocator.zero_allocate(size, sizeof(plumbing_interface_demo__action__ActionExercise_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = plumbing_interface_demo__action__ActionExercise_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        plumbing_interface_demo__action__ActionExercise_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
plumbing_interface_demo__action__ActionExercise_Feedback__Sequence__fini(plumbing_interface_demo__action__ActionExercise_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      plumbing_interface_demo__action__ActionExercise_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

plumbing_interface_demo__action__ActionExercise_Feedback__Sequence *
plumbing_interface_demo__action__ActionExercise_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plumbing_interface_demo__action__ActionExercise_Feedback__Sequence * array = (plumbing_interface_demo__action__ActionExercise_Feedback__Sequence *)allocator.allocate(sizeof(plumbing_interface_demo__action__ActionExercise_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = plumbing_interface_demo__action__ActionExercise_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
plumbing_interface_demo__action__ActionExercise_Feedback__Sequence__destroy(plumbing_interface_demo__action__ActionExercise_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    plumbing_interface_demo__action__ActionExercise_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
plumbing_interface_demo__action__ActionExercise_Feedback__Sequence__are_equal(const plumbing_interface_demo__action__ActionExercise_Feedback__Sequence * lhs, const plumbing_interface_demo__action__ActionExercise_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!plumbing_interface_demo__action__ActionExercise_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
plumbing_interface_demo__action__ActionExercise_Feedback__Sequence__copy(
  const plumbing_interface_demo__action__ActionExercise_Feedback__Sequence * input,
  plumbing_interface_demo__action__ActionExercise_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(plumbing_interface_demo__action__ActionExercise_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    plumbing_interface_demo__action__ActionExercise_Feedback * data =
      (plumbing_interface_demo__action__ActionExercise_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!plumbing_interface_demo__action__ActionExercise_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          plumbing_interface_demo__action__ActionExercise_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!plumbing_interface_demo__action__ActionExercise_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "plumbing_interface_demo/action/detail/action_exercise__functions.h"

bool
plumbing_interface_demo__action__ActionExercise_SendGoal_Request__init(plumbing_interface_demo__action__ActionExercise_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    plumbing_interface_demo__action__ActionExercise_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!plumbing_interface_demo__action__ActionExercise_Goal__init(&msg->goal)) {
    plumbing_interface_demo__action__ActionExercise_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
plumbing_interface_demo__action__ActionExercise_SendGoal_Request__fini(plumbing_interface_demo__action__ActionExercise_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  plumbing_interface_demo__action__ActionExercise_Goal__fini(&msg->goal);
}

bool
plumbing_interface_demo__action__ActionExercise_SendGoal_Request__are_equal(const plumbing_interface_demo__action__ActionExercise_SendGoal_Request * lhs, const plumbing_interface_demo__action__ActionExercise_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!plumbing_interface_demo__action__ActionExercise_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
plumbing_interface_demo__action__ActionExercise_SendGoal_Request__copy(
  const plumbing_interface_demo__action__ActionExercise_SendGoal_Request * input,
  plumbing_interface_demo__action__ActionExercise_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!plumbing_interface_demo__action__ActionExercise_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

plumbing_interface_demo__action__ActionExercise_SendGoal_Request *
plumbing_interface_demo__action__ActionExercise_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plumbing_interface_demo__action__ActionExercise_SendGoal_Request * msg = (plumbing_interface_demo__action__ActionExercise_SendGoal_Request *)allocator.allocate(sizeof(plumbing_interface_demo__action__ActionExercise_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(plumbing_interface_demo__action__ActionExercise_SendGoal_Request));
  bool success = plumbing_interface_demo__action__ActionExercise_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
plumbing_interface_demo__action__ActionExercise_SendGoal_Request__destroy(plumbing_interface_demo__action__ActionExercise_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    plumbing_interface_demo__action__ActionExercise_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
plumbing_interface_demo__action__ActionExercise_SendGoal_Request__Sequence__init(plumbing_interface_demo__action__ActionExercise_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plumbing_interface_demo__action__ActionExercise_SendGoal_Request * data = NULL;

  if (size) {
    data = (plumbing_interface_demo__action__ActionExercise_SendGoal_Request *)allocator.zero_allocate(size, sizeof(plumbing_interface_demo__action__ActionExercise_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = plumbing_interface_demo__action__ActionExercise_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        plumbing_interface_demo__action__ActionExercise_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
plumbing_interface_demo__action__ActionExercise_SendGoal_Request__Sequence__fini(plumbing_interface_demo__action__ActionExercise_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      plumbing_interface_demo__action__ActionExercise_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

plumbing_interface_demo__action__ActionExercise_SendGoal_Request__Sequence *
plumbing_interface_demo__action__ActionExercise_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plumbing_interface_demo__action__ActionExercise_SendGoal_Request__Sequence * array = (plumbing_interface_demo__action__ActionExercise_SendGoal_Request__Sequence *)allocator.allocate(sizeof(plumbing_interface_demo__action__ActionExercise_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = plumbing_interface_demo__action__ActionExercise_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
plumbing_interface_demo__action__ActionExercise_SendGoal_Request__Sequence__destroy(plumbing_interface_demo__action__ActionExercise_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    plumbing_interface_demo__action__ActionExercise_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
plumbing_interface_demo__action__ActionExercise_SendGoal_Request__Sequence__are_equal(const plumbing_interface_demo__action__ActionExercise_SendGoal_Request__Sequence * lhs, const plumbing_interface_demo__action__ActionExercise_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!plumbing_interface_demo__action__ActionExercise_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
plumbing_interface_demo__action__ActionExercise_SendGoal_Request__Sequence__copy(
  const plumbing_interface_demo__action__ActionExercise_SendGoal_Request__Sequence * input,
  plumbing_interface_demo__action__ActionExercise_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(plumbing_interface_demo__action__ActionExercise_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    plumbing_interface_demo__action__ActionExercise_SendGoal_Request * data =
      (plumbing_interface_demo__action__ActionExercise_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!plumbing_interface_demo__action__ActionExercise_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          plumbing_interface_demo__action__ActionExercise_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!plumbing_interface_demo__action__ActionExercise_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
plumbing_interface_demo__action__ActionExercise_SendGoal_Response__init(plumbing_interface_demo__action__ActionExercise_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    plumbing_interface_demo__action__ActionExercise_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
plumbing_interface_demo__action__ActionExercise_SendGoal_Response__fini(plumbing_interface_demo__action__ActionExercise_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
plumbing_interface_demo__action__ActionExercise_SendGoal_Response__are_equal(const plumbing_interface_demo__action__ActionExercise_SendGoal_Response * lhs, const plumbing_interface_demo__action__ActionExercise_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
plumbing_interface_demo__action__ActionExercise_SendGoal_Response__copy(
  const plumbing_interface_demo__action__ActionExercise_SendGoal_Response * input,
  plumbing_interface_demo__action__ActionExercise_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

plumbing_interface_demo__action__ActionExercise_SendGoal_Response *
plumbing_interface_demo__action__ActionExercise_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plumbing_interface_demo__action__ActionExercise_SendGoal_Response * msg = (plumbing_interface_demo__action__ActionExercise_SendGoal_Response *)allocator.allocate(sizeof(plumbing_interface_demo__action__ActionExercise_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(plumbing_interface_demo__action__ActionExercise_SendGoal_Response));
  bool success = plumbing_interface_demo__action__ActionExercise_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
plumbing_interface_demo__action__ActionExercise_SendGoal_Response__destroy(plumbing_interface_demo__action__ActionExercise_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    plumbing_interface_demo__action__ActionExercise_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
plumbing_interface_demo__action__ActionExercise_SendGoal_Response__Sequence__init(plumbing_interface_demo__action__ActionExercise_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plumbing_interface_demo__action__ActionExercise_SendGoal_Response * data = NULL;

  if (size) {
    data = (plumbing_interface_demo__action__ActionExercise_SendGoal_Response *)allocator.zero_allocate(size, sizeof(plumbing_interface_demo__action__ActionExercise_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = plumbing_interface_demo__action__ActionExercise_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        plumbing_interface_demo__action__ActionExercise_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
plumbing_interface_demo__action__ActionExercise_SendGoal_Response__Sequence__fini(plumbing_interface_demo__action__ActionExercise_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      plumbing_interface_demo__action__ActionExercise_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

plumbing_interface_demo__action__ActionExercise_SendGoal_Response__Sequence *
plumbing_interface_demo__action__ActionExercise_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plumbing_interface_demo__action__ActionExercise_SendGoal_Response__Sequence * array = (plumbing_interface_demo__action__ActionExercise_SendGoal_Response__Sequence *)allocator.allocate(sizeof(plumbing_interface_demo__action__ActionExercise_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = plumbing_interface_demo__action__ActionExercise_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
plumbing_interface_demo__action__ActionExercise_SendGoal_Response__Sequence__destroy(plumbing_interface_demo__action__ActionExercise_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    plumbing_interface_demo__action__ActionExercise_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
plumbing_interface_demo__action__ActionExercise_SendGoal_Response__Sequence__are_equal(const plumbing_interface_demo__action__ActionExercise_SendGoal_Response__Sequence * lhs, const plumbing_interface_demo__action__ActionExercise_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!plumbing_interface_demo__action__ActionExercise_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
plumbing_interface_demo__action__ActionExercise_SendGoal_Response__Sequence__copy(
  const plumbing_interface_demo__action__ActionExercise_SendGoal_Response__Sequence * input,
  plumbing_interface_demo__action__ActionExercise_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(plumbing_interface_demo__action__ActionExercise_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    plumbing_interface_demo__action__ActionExercise_SendGoal_Response * data =
      (plumbing_interface_demo__action__ActionExercise_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!plumbing_interface_demo__action__ActionExercise_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          plumbing_interface_demo__action__ActionExercise_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!plumbing_interface_demo__action__ActionExercise_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
plumbing_interface_demo__action__ActionExercise_GetResult_Request__init(plumbing_interface_demo__action__ActionExercise_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    plumbing_interface_demo__action__ActionExercise_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
plumbing_interface_demo__action__ActionExercise_GetResult_Request__fini(plumbing_interface_demo__action__ActionExercise_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
plumbing_interface_demo__action__ActionExercise_GetResult_Request__are_equal(const plumbing_interface_demo__action__ActionExercise_GetResult_Request * lhs, const plumbing_interface_demo__action__ActionExercise_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
plumbing_interface_demo__action__ActionExercise_GetResult_Request__copy(
  const plumbing_interface_demo__action__ActionExercise_GetResult_Request * input,
  plumbing_interface_demo__action__ActionExercise_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

plumbing_interface_demo__action__ActionExercise_GetResult_Request *
plumbing_interface_demo__action__ActionExercise_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plumbing_interface_demo__action__ActionExercise_GetResult_Request * msg = (plumbing_interface_demo__action__ActionExercise_GetResult_Request *)allocator.allocate(sizeof(plumbing_interface_demo__action__ActionExercise_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(plumbing_interface_demo__action__ActionExercise_GetResult_Request));
  bool success = plumbing_interface_demo__action__ActionExercise_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
plumbing_interface_demo__action__ActionExercise_GetResult_Request__destroy(plumbing_interface_demo__action__ActionExercise_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    plumbing_interface_demo__action__ActionExercise_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
plumbing_interface_demo__action__ActionExercise_GetResult_Request__Sequence__init(plumbing_interface_demo__action__ActionExercise_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plumbing_interface_demo__action__ActionExercise_GetResult_Request * data = NULL;

  if (size) {
    data = (plumbing_interface_demo__action__ActionExercise_GetResult_Request *)allocator.zero_allocate(size, sizeof(plumbing_interface_demo__action__ActionExercise_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = plumbing_interface_demo__action__ActionExercise_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        plumbing_interface_demo__action__ActionExercise_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
plumbing_interface_demo__action__ActionExercise_GetResult_Request__Sequence__fini(plumbing_interface_demo__action__ActionExercise_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      plumbing_interface_demo__action__ActionExercise_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

plumbing_interface_demo__action__ActionExercise_GetResult_Request__Sequence *
plumbing_interface_demo__action__ActionExercise_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plumbing_interface_demo__action__ActionExercise_GetResult_Request__Sequence * array = (plumbing_interface_demo__action__ActionExercise_GetResult_Request__Sequence *)allocator.allocate(sizeof(plumbing_interface_demo__action__ActionExercise_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = plumbing_interface_demo__action__ActionExercise_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
plumbing_interface_demo__action__ActionExercise_GetResult_Request__Sequence__destroy(plumbing_interface_demo__action__ActionExercise_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    plumbing_interface_demo__action__ActionExercise_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
plumbing_interface_demo__action__ActionExercise_GetResult_Request__Sequence__are_equal(const plumbing_interface_demo__action__ActionExercise_GetResult_Request__Sequence * lhs, const plumbing_interface_demo__action__ActionExercise_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!plumbing_interface_demo__action__ActionExercise_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
plumbing_interface_demo__action__ActionExercise_GetResult_Request__Sequence__copy(
  const plumbing_interface_demo__action__ActionExercise_GetResult_Request__Sequence * input,
  plumbing_interface_demo__action__ActionExercise_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(plumbing_interface_demo__action__ActionExercise_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    plumbing_interface_demo__action__ActionExercise_GetResult_Request * data =
      (plumbing_interface_demo__action__ActionExercise_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!plumbing_interface_demo__action__ActionExercise_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          plumbing_interface_demo__action__ActionExercise_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!plumbing_interface_demo__action__ActionExercise_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "plumbing_interface_demo/action/detail/action_exercise__functions.h"

bool
plumbing_interface_demo__action__ActionExercise_GetResult_Response__init(plumbing_interface_demo__action__ActionExercise_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!plumbing_interface_demo__action__ActionExercise_Result__init(&msg->result)) {
    plumbing_interface_demo__action__ActionExercise_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
plumbing_interface_demo__action__ActionExercise_GetResult_Response__fini(plumbing_interface_demo__action__ActionExercise_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  plumbing_interface_demo__action__ActionExercise_Result__fini(&msg->result);
}

bool
plumbing_interface_demo__action__ActionExercise_GetResult_Response__are_equal(const plumbing_interface_demo__action__ActionExercise_GetResult_Response * lhs, const plumbing_interface_demo__action__ActionExercise_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!plumbing_interface_demo__action__ActionExercise_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
plumbing_interface_demo__action__ActionExercise_GetResult_Response__copy(
  const plumbing_interface_demo__action__ActionExercise_GetResult_Response * input,
  plumbing_interface_demo__action__ActionExercise_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!plumbing_interface_demo__action__ActionExercise_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

plumbing_interface_demo__action__ActionExercise_GetResult_Response *
plumbing_interface_demo__action__ActionExercise_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plumbing_interface_demo__action__ActionExercise_GetResult_Response * msg = (plumbing_interface_demo__action__ActionExercise_GetResult_Response *)allocator.allocate(sizeof(plumbing_interface_demo__action__ActionExercise_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(plumbing_interface_demo__action__ActionExercise_GetResult_Response));
  bool success = plumbing_interface_demo__action__ActionExercise_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
plumbing_interface_demo__action__ActionExercise_GetResult_Response__destroy(plumbing_interface_demo__action__ActionExercise_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    plumbing_interface_demo__action__ActionExercise_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
plumbing_interface_demo__action__ActionExercise_GetResult_Response__Sequence__init(plumbing_interface_demo__action__ActionExercise_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plumbing_interface_demo__action__ActionExercise_GetResult_Response * data = NULL;

  if (size) {
    data = (plumbing_interface_demo__action__ActionExercise_GetResult_Response *)allocator.zero_allocate(size, sizeof(plumbing_interface_demo__action__ActionExercise_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = plumbing_interface_demo__action__ActionExercise_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        plumbing_interface_demo__action__ActionExercise_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
plumbing_interface_demo__action__ActionExercise_GetResult_Response__Sequence__fini(plumbing_interface_demo__action__ActionExercise_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      plumbing_interface_demo__action__ActionExercise_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

plumbing_interface_demo__action__ActionExercise_GetResult_Response__Sequence *
plumbing_interface_demo__action__ActionExercise_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plumbing_interface_demo__action__ActionExercise_GetResult_Response__Sequence * array = (plumbing_interface_demo__action__ActionExercise_GetResult_Response__Sequence *)allocator.allocate(sizeof(plumbing_interface_demo__action__ActionExercise_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = plumbing_interface_demo__action__ActionExercise_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
plumbing_interface_demo__action__ActionExercise_GetResult_Response__Sequence__destroy(plumbing_interface_demo__action__ActionExercise_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    plumbing_interface_demo__action__ActionExercise_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
plumbing_interface_demo__action__ActionExercise_GetResult_Response__Sequence__are_equal(const plumbing_interface_demo__action__ActionExercise_GetResult_Response__Sequence * lhs, const plumbing_interface_demo__action__ActionExercise_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!plumbing_interface_demo__action__ActionExercise_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
plumbing_interface_demo__action__ActionExercise_GetResult_Response__Sequence__copy(
  const plumbing_interface_demo__action__ActionExercise_GetResult_Response__Sequence * input,
  plumbing_interface_demo__action__ActionExercise_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(plumbing_interface_demo__action__ActionExercise_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    plumbing_interface_demo__action__ActionExercise_GetResult_Response * data =
      (plumbing_interface_demo__action__ActionExercise_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!plumbing_interface_demo__action__ActionExercise_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          plumbing_interface_demo__action__ActionExercise_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!plumbing_interface_demo__action__ActionExercise_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "plumbing_interface_demo/action/detail/action_exercise__functions.h"

bool
plumbing_interface_demo__action__ActionExercise_FeedbackMessage__init(plumbing_interface_demo__action__ActionExercise_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    plumbing_interface_demo__action__ActionExercise_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!plumbing_interface_demo__action__ActionExercise_Feedback__init(&msg->feedback)) {
    plumbing_interface_demo__action__ActionExercise_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
plumbing_interface_demo__action__ActionExercise_FeedbackMessage__fini(plumbing_interface_demo__action__ActionExercise_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  plumbing_interface_demo__action__ActionExercise_Feedback__fini(&msg->feedback);
}

bool
plumbing_interface_demo__action__ActionExercise_FeedbackMessage__are_equal(const plumbing_interface_demo__action__ActionExercise_FeedbackMessage * lhs, const plumbing_interface_demo__action__ActionExercise_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!plumbing_interface_demo__action__ActionExercise_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
plumbing_interface_demo__action__ActionExercise_FeedbackMessage__copy(
  const plumbing_interface_demo__action__ActionExercise_FeedbackMessage * input,
  plumbing_interface_demo__action__ActionExercise_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!plumbing_interface_demo__action__ActionExercise_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

plumbing_interface_demo__action__ActionExercise_FeedbackMessage *
plumbing_interface_demo__action__ActionExercise_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plumbing_interface_demo__action__ActionExercise_FeedbackMessage * msg = (plumbing_interface_demo__action__ActionExercise_FeedbackMessage *)allocator.allocate(sizeof(plumbing_interface_demo__action__ActionExercise_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(plumbing_interface_demo__action__ActionExercise_FeedbackMessage));
  bool success = plumbing_interface_demo__action__ActionExercise_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
plumbing_interface_demo__action__ActionExercise_FeedbackMessage__destroy(plumbing_interface_demo__action__ActionExercise_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    plumbing_interface_demo__action__ActionExercise_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
plumbing_interface_demo__action__ActionExercise_FeedbackMessage__Sequence__init(plumbing_interface_demo__action__ActionExercise_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plumbing_interface_demo__action__ActionExercise_FeedbackMessage * data = NULL;

  if (size) {
    data = (plumbing_interface_demo__action__ActionExercise_FeedbackMessage *)allocator.zero_allocate(size, sizeof(plumbing_interface_demo__action__ActionExercise_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = plumbing_interface_demo__action__ActionExercise_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        plumbing_interface_demo__action__ActionExercise_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
plumbing_interface_demo__action__ActionExercise_FeedbackMessage__Sequence__fini(plumbing_interface_demo__action__ActionExercise_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      plumbing_interface_demo__action__ActionExercise_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

plumbing_interface_demo__action__ActionExercise_FeedbackMessage__Sequence *
plumbing_interface_demo__action__ActionExercise_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plumbing_interface_demo__action__ActionExercise_FeedbackMessage__Sequence * array = (plumbing_interface_demo__action__ActionExercise_FeedbackMessage__Sequence *)allocator.allocate(sizeof(plumbing_interface_demo__action__ActionExercise_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = plumbing_interface_demo__action__ActionExercise_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
plumbing_interface_demo__action__ActionExercise_FeedbackMessage__Sequence__destroy(plumbing_interface_demo__action__ActionExercise_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    plumbing_interface_demo__action__ActionExercise_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
plumbing_interface_demo__action__ActionExercise_FeedbackMessage__Sequence__are_equal(const plumbing_interface_demo__action__ActionExercise_FeedbackMessage__Sequence * lhs, const plumbing_interface_demo__action__ActionExercise_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!plumbing_interface_demo__action__ActionExercise_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
plumbing_interface_demo__action__ActionExercise_FeedbackMessage__Sequence__copy(
  const plumbing_interface_demo__action__ActionExercise_FeedbackMessage__Sequence * input,
  plumbing_interface_demo__action__ActionExercise_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(plumbing_interface_demo__action__ActionExercise_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    plumbing_interface_demo__action__ActionExercise_FeedbackMessage * data =
      (plumbing_interface_demo__action__ActionExercise_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!plumbing_interface_demo__action__ActionExercise_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          plumbing_interface_demo__action__ActionExercise_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!plumbing_interface_demo__action__ActionExercise_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
