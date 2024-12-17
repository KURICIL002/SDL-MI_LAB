// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from model_sc_msg:msg/Modelcomm.idl
// generated code does not contain a copyright notice
#include "model_sc_msg/msg/detail/modelcomm__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
model_sc_msg__msg__Modelcomm__init(model_sc_msg__msg__Modelcomm * msg)
{
  if (!msg) {
    return false;
  }
  // apex_sc_command
  // apex_sc_rpm
  // apex_sc_duration
  return true;
}

void
model_sc_msg__msg__Modelcomm__fini(model_sc_msg__msg__Modelcomm * msg)
{
  if (!msg) {
    return;
  }
  // apex_sc_command
  // apex_sc_rpm
  // apex_sc_duration
}

bool
model_sc_msg__msg__Modelcomm__are_equal(const model_sc_msg__msg__Modelcomm * lhs, const model_sc_msg__msg__Modelcomm * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // apex_sc_command
  if (lhs->apex_sc_command != rhs->apex_sc_command) {
    return false;
  }
  // apex_sc_rpm
  if (lhs->apex_sc_rpm != rhs->apex_sc_rpm) {
    return false;
  }
  // apex_sc_duration
  if (lhs->apex_sc_duration != rhs->apex_sc_duration) {
    return false;
  }
  return true;
}

bool
model_sc_msg__msg__Modelcomm__copy(
  const model_sc_msg__msg__Modelcomm * input,
  model_sc_msg__msg__Modelcomm * output)
{
  if (!input || !output) {
    return false;
  }
  // apex_sc_command
  output->apex_sc_command = input->apex_sc_command;
  // apex_sc_rpm
  output->apex_sc_rpm = input->apex_sc_rpm;
  // apex_sc_duration
  output->apex_sc_duration = input->apex_sc_duration;
  return true;
}

model_sc_msg__msg__Modelcomm *
model_sc_msg__msg__Modelcomm__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  model_sc_msg__msg__Modelcomm * msg = (model_sc_msg__msg__Modelcomm *)allocator.allocate(sizeof(model_sc_msg__msg__Modelcomm), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(model_sc_msg__msg__Modelcomm));
  bool success = model_sc_msg__msg__Modelcomm__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
model_sc_msg__msg__Modelcomm__destroy(model_sc_msg__msg__Modelcomm * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    model_sc_msg__msg__Modelcomm__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
model_sc_msg__msg__Modelcomm__Sequence__init(model_sc_msg__msg__Modelcomm__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  model_sc_msg__msg__Modelcomm * data = NULL;

  if (size) {
    data = (model_sc_msg__msg__Modelcomm *)allocator.zero_allocate(size, sizeof(model_sc_msg__msg__Modelcomm), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = model_sc_msg__msg__Modelcomm__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        model_sc_msg__msg__Modelcomm__fini(&data[i - 1]);
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
model_sc_msg__msg__Modelcomm__Sequence__fini(model_sc_msg__msg__Modelcomm__Sequence * array)
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
      model_sc_msg__msg__Modelcomm__fini(&array->data[i]);
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

model_sc_msg__msg__Modelcomm__Sequence *
model_sc_msg__msg__Modelcomm__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  model_sc_msg__msg__Modelcomm__Sequence * array = (model_sc_msg__msg__Modelcomm__Sequence *)allocator.allocate(sizeof(model_sc_msg__msg__Modelcomm__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = model_sc_msg__msg__Modelcomm__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
model_sc_msg__msg__Modelcomm__Sequence__destroy(model_sc_msg__msg__Modelcomm__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    model_sc_msg__msg__Modelcomm__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
model_sc_msg__msg__Modelcomm__Sequence__are_equal(const model_sc_msg__msg__Modelcomm__Sequence * lhs, const model_sc_msg__msg__Modelcomm__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!model_sc_msg__msg__Modelcomm__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
model_sc_msg__msg__Modelcomm__Sequence__copy(
  const model_sc_msg__msg__Modelcomm__Sequence * input,
  model_sc_msg__msg__Modelcomm__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(model_sc_msg__msg__Modelcomm);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    model_sc_msg__msg__Modelcomm * data =
      (model_sc_msg__msg__Modelcomm *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!model_sc_msg__msg__Modelcomm__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          model_sc_msg__msg__Modelcomm__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!model_sc_msg__msg__Modelcomm__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
