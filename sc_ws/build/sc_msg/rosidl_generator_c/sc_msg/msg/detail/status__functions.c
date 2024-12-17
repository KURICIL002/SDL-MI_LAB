// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sc_msg:msg/Status.idl
// generated code does not contain a copyright notice
#include "sc_msg/msg/detail/status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
sc_msg__msg__Status__init(sc_msg__msg__Status * msg)
{
  if (!msg) {
    return false;
  }
  // rpm
  // isvacon
  // scstatus
  return true;
}

void
sc_msg__msg__Status__fini(sc_msg__msg__Status * msg)
{
  if (!msg) {
    return;
  }
  // rpm
  // isvacon
  // scstatus
}

bool
sc_msg__msg__Status__are_equal(const sc_msg__msg__Status * lhs, const sc_msg__msg__Status * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // rpm
  if (lhs->rpm != rhs->rpm) {
    return false;
  }
  // isvacon
  if (lhs->isvacon != rhs->isvacon) {
    return false;
  }
  // scstatus
  if (lhs->scstatus != rhs->scstatus) {
    return false;
  }
  return true;
}

bool
sc_msg__msg__Status__copy(
  const sc_msg__msg__Status * input,
  sc_msg__msg__Status * output)
{
  if (!input || !output) {
    return false;
  }
  // rpm
  output->rpm = input->rpm;
  // isvacon
  output->isvacon = input->isvacon;
  // scstatus
  output->scstatus = input->scstatus;
  return true;
}

sc_msg__msg__Status *
sc_msg__msg__Status__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sc_msg__msg__Status * msg = (sc_msg__msg__Status *)allocator.allocate(sizeof(sc_msg__msg__Status), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sc_msg__msg__Status));
  bool success = sc_msg__msg__Status__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sc_msg__msg__Status__destroy(sc_msg__msg__Status * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sc_msg__msg__Status__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sc_msg__msg__Status__Sequence__init(sc_msg__msg__Status__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sc_msg__msg__Status * data = NULL;

  if (size) {
    data = (sc_msg__msg__Status *)allocator.zero_allocate(size, sizeof(sc_msg__msg__Status), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sc_msg__msg__Status__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sc_msg__msg__Status__fini(&data[i - 1]);
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
sc_msg__msg__Status__Sequence__fini(sc_msg__msg__Status__Sequence * array)
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
      sc_msg__msg__Status__fini(&array->data[i]);
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

sc_msg__msg__Status__Sequence *
sc_msg__msg__Status__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sc_msg__msg__Status__Sequence * array = (sc_msg__msg__Status__Sequence *)allocator.allocate(sizeof(sc_msg__msg__Status__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sc_msg__msg__Status__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sc_msg__msg__Status__Sequence__destroy(sc_msg__msg__Status__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sc_msg__msg__Status__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sc_msg__msg__Status__Sequence__are_equal(const sc_msg__msg__Status__Sequence * lhs, const sc_msg__msg__Status__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sc_msg__msg__Status__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sc_msg__msg__Status__Sequence__copy(
  const sc_msg__msg__Status__Sequence * input,
  sc_msg__msg__Status__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sc_msg__msg__Status);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sc_msg__msg__Status * data =
      (sc_msg__msg__Status *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sc_msg__msg__Status__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sc_msg__msg__Status__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sc_msg__msg__Status__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
