// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from plumbing_interface_demo:msg/CustomMsg.idl
// generated code does not contain a copyright notice
#include "plumbing_interface_demo/msg/detail/custom_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
plumbing_interface_demo__msg__CustomMsg__init(plumbing_interface_demo__msg__CustomMsg * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    plumbing_interface_demo__msg__CustomMsg__fini(msg);
    return false;
  }
  // data_int
  // data_float
  return true;
}

void
plumbing_interface_demo__msg__CustomMsg__fini(plumbing_interface_demo__msg__CustomMsg * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // data_int
  // data_float
}

bool
plumbing_interface_demo__msg__CustomMsg__are_equal(const plumbing_interface_demo__msg__CustomMsg * lhs, const plumbing_interface_demo__msg__CustomMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // data_int
  if (lhs->data_int != rhs->data_int) {
    return false;
  }
  // data_float
  if (lhs->data_float != rhs->data_float) {
    return false;
  }
  return true;
}

bool
plumbing_interface_demo__msg__CustomMsg__copy(
  const plumbing_interface_demo__msg__CustomMsg * input,
  plumbing_interface_demo__msg__CustomMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // data_int
  output->data_int = input->data_int;
  // data_float
  output->data_float = input->data_float;
  return true;
}

plumbing_interface_demo__msg__CustomMsg *
plumbing_interface_demo__msg__CustomMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plumbing_interface_demo__msg__CustomMsg * msg = (plumbing_interface_demo__msg__CustomMsg *)allocator.allocate(sizeof(plumbing_interface_demo__msg__CustomMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(plumbing_interface_demo__msg__CustomMsg));
  bool success = plumbing_interface_demo__msg__CustomMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
plumbing_interface_demo__msg__CustomMsg__destroy(plumbing_interface_demo__msg__CustomMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    plumbing_interface_demo__msg__CustomMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
plumbing_interface_demo__msg__CustomMsg__Sequence__init(plumbing_interface_demo__msg__CustomMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plumbing_interface_demo__msg__CustomMsg * data = NULL;

  if (size) {
    data = (plumbing_interface_demo__msg__CustomMsg *)allocator.zero_allocate(size, sizeof(plumbing_interface_demo__msg__CustomMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = plumbing_interface_demo__msg__CustomMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        plumbing_interface_demo__msg__CustomMsg__fini(&data[i - 1]);
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
plumbing_interface_demo__msg__CustomMsg__Sequence__fini(plumbing_interface_demo__msg__CustomMsg__Sequence * array)
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
      plumbing_interface_demo__msg__CustomMsg__fini(&array->data[i]);
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

plumbing_interface_demo__msg__CustomMsg__Sequence *
plumbing_interface_demo__msg__CustomMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plumbing_interface_demo__msg__CustomMsg__Sequence * array = (plumbing_interface_demo__msg__CustomMsg__Sequence *)allocator.allocate(sizeof(plumbing_interface_demo__msg__CustomMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = plumbing_interface_demo__msg__CustomMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
plumbing_interface_demo__msg__CustomMsg__Sequence__destroy(plumbing_interface_demo__msg__CustomMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    plumbing_interface_demo__msg__CustomMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
plumbing_interface_demo__msg__CustomMsg__Sequence__are_equal(const plumbing_interface_demo__msg__CustomMsg__Sequence * lhs, const plumbing_interface_demo__msg__CustomMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!plumbing_interface_demo__msg__CustomMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
plumbing_interface_demo__msg__CustomMsg__Sequence__copy(
  const plumbing_interface_demo__msg__CustomMsg__Sequence * input,
  plumbing_interface_demo__msg__CustomMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(plumbing_interface_demo__msg__CustomMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    plumbing_interface_demo__msg__CustomMsg * data =
      (plumbing_interface_demo__msg__CustomMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!plumbing_interface_demo__msg__CustomMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          plumbing_interface_demo__msg__CustomMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!plumbing_interface_demo__msg__CustomMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
