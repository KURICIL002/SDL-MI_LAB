// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from model_sc_msg:msg/Modelsta.idl
// generated code does not contain a copyright notice
#include "model_sc_msg/msg/detail/modelsta__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
model_sc_msg__msg__Modelsta__init(model_sc_msg__msg__Modelsta * msg)
{
  if (!msg) {
    return false;
  }
  // rpm
  // is_vacuum_on
  // apex_sc_status
  return true;
}

void
model_sc_msg__msg__Modelsta__fini(model_sc_msg__msg__Modelsta * msg)
{
  if (!msg) {
    return;
  }
  // rpm
  // is_vacuum_on
  // apex_sc_status
}

bool
model_sc_msg__msg__Modelsta__are_equal(const model_sc_msg__msg__Modelsta * lhs, const model_sc_msg__msg__Modelsta * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // rpm
  if (lhs->rpm != rhs->rpm) {
    return false;
  }
  // is_vacuum_on
  if (lhs->is_vacuum_on != rhs->is_vacuum_on) {
    return false;
  }
  // apex_sc_status
  if (lhs->apex_sc_status != rhs->apex_sc_status) {
    return false;
  }
  return true;
}

bool
model_sc_msg__msg__Modelsta__copy(
  const model_sc_msg__msg__Modelsta * input,
  model_sc_msg__msg__Modelsta * output)
{
  if (!input || !output) {
    return false;
  }
  // rpm
  output->rpm = input->rpm;
  // is_vacuum_on
  output->is_vacuum_on = input->is_vacuum_on;
  // apex_sc_status
  output->apex_sc_status = input->apex_sc_status;
  return true;
}

model_sc_msg__msg__Modelsta *
model_sc_msg__msg__Modelsta__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  model_sc_msg__msg__Modelsta * msg = (model_sc_msg__msg__Modelsta *)allocator.allocate(sizeof(model_sc_msg__msg__Modelsta), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(model_sc_msg__msg__Modelsta));
  bool success = model_sc_msg__msg__Modelsta__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
model_sc_msg__msg__Modelsta__destroy(model_sc_msg__msg__Modelsta * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    model_sc_msg__msg__Modelsta__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
model_sc_msg__msg__Modelsta__Sequence__init(model_sc_msg__msg__Modelsta__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  model_sc_msg__msg__Modelsta * data = NULL;

  if (size) {
    data = (model_sc_msg__msg__Modelsta *)allocator.zero_allocate(size, sizeof(model_sc_msg__msg__Modelsta), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = model_sc_msg__msg__Modelsta__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        model_sc_msg__msg__Modelsta__fini(&data[i - 1]);
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
model_sc_msg__msg__Modelsta__Sequence__fini(model_sc_msg__msg__Modelsta__Sequence * array)
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
      model_sc_msg__msg__Modelsta__fini(&array->data[i]);
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

model_sc_msg__msg__Modelsta__Sequence *
model_sc_msg__msg__Modelsta__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  model_sc_msg__msg__Modelsta__Sequence * array = (model_sc_msg__msg__Modelsta__Sequence *)allocator.allocate(sizeof(model_sc_msg__msg__Modelsta__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = model_sc_msg__msg__Modelsta__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
model_sc_msg__msg__Modelsta__Sequence__destroy(model_sc_msg__msg__Modelsta__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    model_sc_msg__msg__Modelsta__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
model_sc_msg__msg__Modelsta__Sequence__are_equal(const model_sc_msg__msg__Modelsta__Sequence * lhs, const model_sc_msg__msg__Modelsta__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!model_sc_msg__msg__Modelsta__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
model_sc_msg__msg__Modelsta__Sequence__copy(
  const model_sc_msg__msg__Modelsta__Sequence * input,
  model_sc_msg__msg__Modelsta__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(model_sc_msg__msg__Modelsta);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    model_sc_msg__msg__Modelsta * data =
      (model_sc_msg__msg__Modelsta *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!model_sc_msg__msg__Modelsta__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          model_sc_msg__msg__Modelsta__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!model_sc_msg__msg__Modelsta__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
