// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sc_msg:msg/Commands.idl
// generated code does not contain a copyright notice
#include "sc_msg/msg/detail/commands__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
sc_msg__msg__Commands__init(sc_msg__msg__Commands * msg)
{
  if (!msg) {
    return false;
  }
  // sccmd
  // scrpm
  // sctime
  return true;
}

void
sc_msg__msg__Commands__fini(sc_msg__msg__Commands * msg)
{
  if (!msg) {
    return;
  }
  // sccmd
  // scrpm
  // sctime
}

bool
sc_msg__msg__Commands__are_equal(const sc_msg__msg__Commands * lhs, const sc_msg__msg__Commands * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sccmd
  if (lhs->sccmd != rhs->sccmd) {
    return false;
  }
  // scrpm
  if (lhs->scrpm != rhs->scrpm) {
    return false;
  }
  // sctime
  if (lhs->sctime != rhs->sctime) {
    return false;
  }
  return true;
}

bool
sc_msg__msg__Commands__copy(
  const sc_msg__msg__Commands * input,
  sc_msg__msg__Commands * output)
{
  if (!input || !output) {
    return false;
  }
  // sccmd
  output->sccmd = input->sccmd;
  // scrpm
  output->scrpm = input->scrpm;
  // sctime
  output->sctime = input->sctime;
  return true;
}

sc_msg__msg__Commands *
sc_msg__msg__Commands__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sc_msg__msg__Commands * msg = (sc_msg__msg__Commands *)allocator.allocate(sizeof(sc_msg__msg__Commands), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sc_msg__msg__Commands));
  bool success = sc_msg__msg__Commands__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sc_msg__msg__Commands__destroy(sc_msg__msg__Commands * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sc_msg__msg__Commands__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sc_msg__msg__Commands__Sequence__init(sc_msg__msg__Commands__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sc_msg__msg__Commands * data = NULL;

  if (size) {
    data = (sc_msg__msg__Commands *)allocator.zero_allocate(size, sizeof(sc_msg__msg__Commands), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sc_msg__msg__Commands__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sc_msg__msg__Commands__fini(&data[i - 1]);
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
sc_msg__msg__Commands__Sequence__fini(sc_msg__msg__Commands__Sequence * array)
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
      sc_msg__msg__Commands__fini(&array->data[i]);
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

sc_msg__msg__Commands__Sequence *
sc_msg__msg__Commands__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sc_msg__msg__Commands__Sequence * array = (sc_msg__msg__Commands__Sequence *)allocator.allocate(sizeof(sc_msg__msg__Commands__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sc_msg__msg__Commands__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sc_msg__msg__Commands__Sequence__destroy(sc_msg__msg__Commands__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sc_msg__msg__Commands__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sc_msg__msg__Commands__Sequence__are_equal(const sc_msg__msg__Commands__Sequence * lhs, const sc_msg__msg__Commands__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sc_msg__msg__Commands__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sc_msg__msg__Commands__Sequence__copy(
  const sc_msg__msg__Commands__Sequence * input,
  sc_msg__msg__Commands__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sc_msg__msg__Commands);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sc_msg__msg__Commands * data =
      (sc_msg__msg__Commands *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sc_msg__msg__Commands__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sc_msg__msg__Commands__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sc_msg__msg__Commands__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
