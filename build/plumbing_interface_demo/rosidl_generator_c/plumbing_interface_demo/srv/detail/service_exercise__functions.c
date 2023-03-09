// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from plumbing_interface_demo:srv/ServiceExercise.idl
// generated code does not contain a copyright notice
#include "plumbing_interface_demo/srv/detail/service_exercise__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
plumbing_interface_demo__srv__ServiceExercise_Request__init(plumbing_interface_demo__srv__ServiceExercise_Request * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // theta
  return true;
}

void
plumbing_interface_demo__srv__ServiceExercise_Request__fini(plumbing_interface_demo__srv__ServiceExercise_Request * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // theta
}

bool
plumbing_interface_demo__srv__ServiceExercise_Request__are_equal(const plumbing_interface_demo__srv__ServiceExercise_Request * lhs, const plumbing_interface_demo__srv__ServiceExercise_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // theta
  if (lhs->theta != rhs->theta) {
    return false;
  }
  return true;
}

bool
plumbing_interface_demo__srv__ServiceExercise_Request__copy(
  const plumbing_interface_demo__srv__ServiceExercise_Request * input,
  plumbing_interface_demo__srv__ServiceExercise_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // theta
  output->theta = input->theta;
  return true;
}

plumbing_interface_demo__srv__ServiceExercise_Request *
plumbing_interface_demo__srv__ServiceExercise_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plumbing_interface_demo__srv__ServiceExercise_Request * msg = (plumbing_interface_demo__srv__ServiceExercise_Request *)allocator.allocate(sizeof(plumbing_interface_demo__srv__ServiceExercise_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(plumbing_interface_demo__srv__ServiceExercise_Request));
  bool success = plumbing_interface_demo__srv__ServiceExercise_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
plumbing_interface_demo__srv__ServiceExercise_Request__destroy(plumbing_interface_demo__srv__ServiceExercise_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    plumbing_interface_demo__srv__ServiceExercise_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
plumbing_interface_demo__srv__ServiceExercise_Request__Sequence__init(plumbing_interface_demo__srv__ServiceExercise_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plumbing_interface_demo__srv__ServiceExercise_Request * data = NULL;

  if (size) {
    data = (plumbing_interface_demo__srv__ServiceExercise_Request *)allocator.zero_allocate(size, sizeof(plumbing_interface_demo__srv__ServiceExercise_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = plumbing_interface_demo__srv__ServiceExercise_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        plumbing_interface_demo__srv__ServiceExercise_Request__fini(&data[i - 1]);
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
plumbing_interface_demo__srv__ServiceExercise_Request__Sequence__fini(plumbing_interface_demo__srv__ServiceExercise_Request__Sequence * array)
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
      plumbing_interface_demo__srv__ServiceExercise_Request__fini(&array->data[i]);
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

plumbing_interface_demo__srv__ServiceExercise_Request__Sequence *
plumbing_interface_demo__srv__ServiceExercise_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plumbing_interface_demo__srv__ServiceExercise_Request__Sequence * array = (plumbing_interface_demo__srv__ServiceExercise_Request__Sequence *)allocator.allocate(sizeof(plumbing_interface_demo__srv__ServiceExercise_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = plumbing_interface_demo__srv__ServiceExercise_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
plumbing_interface_demo__srv__ServiceExercise_Request__Sequence__destroy(plumbing_interface_demo__srv__ServiceExercise_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    plumbing_interface_demo__srv__ServiceExercise_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
plumbing_interface_demo__srv__ServiceExercise_Request__Sequence__are_equal(const plumbing_interface_demo__srv__ServiceExercise_Request__Sequence * lhs, const plumbing_interface_demo__srv__ServiceExercise_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!plumbing_interface_demo__srv__ServiceExercise_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
plumbing_interface_demo__srv__ServiceExercise_Request__Sequence__copy(
  const plumbing_interface_demo__srv__ServiceExercise_Request__Sequence * input,
  plumbing_interface_demo__srv__ServiceExercise_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(plumbing_interface_demo__srv__ServiceExercise_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    plumbing_interface_demo__srv__ServiceExercise_Request * data =
      (plumbing_interface_demo__srv__ServiceExercise_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!plumbing_interface_demo__srv__ServiceExercise_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          plumbing_interface_demo__srv__ServiceExercise_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!plumbing_interface_demo__srv__ServiceExercise_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
plumbing_interface_demo__srv__ServiceExercise_Response__init(plumbing_interface_demo__srv__ServiceExercise_Response * msg)
{
  if (!msg) {
    return false;
  }
  // distance
  return true;
}

void
plumbing_interface_demo__srv__ServiceExercise_Response__fini(plumbing_interface_demo__srv__ServiceExercise_Response * msg)
{
  if (!msg) {
    return;
  }
  // distance
}

bool
plumbing_interface_demo__srv__ServiceExercise_Response__are_equal(const plumbing_interface_demo__srv__ServiceExercise_Response * lhs, const plumbing_interface_demo__srv__ServiceExercise_Response * rhs)
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
plumbing_interface_demo__srv__ServiceExercise_Response__copy(
  const plumbing_interface_demo__srv__ServiceExercise_Response * input,
  plumbing_interface_demo__srv__ServiceExercise_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // distance
  output->distance = input->distance;
  return true;
}

plumbing_interface_demo__srv__ServiceExercise_Response *
plumbing_interface_demo__srv__ServiceExercise_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plumbing_interface_demo__srv__ServiceExercise_Response * msg = (plumbing_interface_demo__srv__ServiceExercise_Response *)allocator.allocate(sizeof(plumbing_interface_demo__srv__ServiceExercise_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(plumbing_interface_demo__srv__ServiceExercise_Response));
  bool success = plumbing_interface_demo__srv__ServiceExercise_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
plumbing_interface_demo__srv__ServiceExercise_Response__destroy(plumbing_interface_demo__srv__ServiceExercise_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    plumbing_interface_demo__srv__ServiceExercise_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
plumbing_interface_demo__srv__ServiceExercise_Response__Sequence__init(plumbing_interface_demo__srv__ServiceExercise_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plumbing_interface_demo__srv__ServiceExercise_Response * data = NULL;

  if (size) {
    data = (plumbing_interface_demo__srv__ServiceExercise_Response *)allocator.zero_allocate(size, sizeof(plumbing_interface_demo__srv__ServiceExercise_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = plumbing_interface_demo__srv__ServiceExercise_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        plumbing_interface_demo__srv__ServiceExercise_Response__fini(&data[i - 1]);
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
plumbing_interface_demo__srv__ServiceExercise_Response__Sequence__fini(plumbing_interface_demo__srv__ServiceExercise_Response__Sequence * array)
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
      plumbing_interface_demo__srv__ServiceExercise_Response__fini(&array->data[i]);
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

plumbing_interface_demo__srv__ServiceExercise_Response__Sequence *
plumbing_interface_demo__srv__ServiceExercise_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plumbing_interface_demo__srv__ServiceExercise_Response__Sequence * array = (plumbing_interface_demo__srv__ServiceExercise_Response__Sequence *)allocator.allocate(sizeof(plumbing_interface_demo__srv__ServiceExercise_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = plumbing_interface_demo__srv__ServiceExercise_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
plumbing_interface_demo__srv__ServiceExercise_Response__Sequence__destroy(plumbing_interface_demo__srv__ServiceExercise_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    plumbing_interface_demo__srv__ServiceExercise_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
plumbing_interface_demo__srv__ServiceExercise_Response__Sequence__are_equal(const plumbing_interface_demo__srv__ServiceExercise_Response__Sequence * lhs, const plumbing_interface_demo__srv__ServiceExercise_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!plumbing_interface_demo__srv__ServiceExercise_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
plumbing_interface_demo__srv__ServiceExercise_Response__Sequence__copy(
  const plumbing_interface_demo__srv__ServiceExercise_Response__Sequence * input,
  plumbing_interface_demo__srv__ServiceExercise_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(plumbing_interface_demo__srv__ServiceExercise_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    plumbing_interface_demo__srv__ServiceExercise_Response * data =
      (plumbing_interface_demo__srv__ServiceExercise_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!plumbing_interface_demo__srv__ServiceExercise_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          plumbing_interface_demo__srv__ServiceExercise_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!plumbing_interface_demo__srv__ServiceExercise_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
