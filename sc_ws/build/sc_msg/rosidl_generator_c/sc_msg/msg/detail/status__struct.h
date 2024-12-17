// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sc_msg:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef SC_MSG__MSG__DETAIL__STATUS__STRUCT_H_
#define SC_MSG__MSG__DETAIL__STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Status in the package sc_msg.
/**
  * Available commands to use the Fisher Scientific PPS4102 Top Pan balance 
 */
typedef struct sc_msg__msg__Status
{
  int32_t rpm;
  bool isvacon;
  int32_t scstatus;
} sc_msg__msg__Status;

// Struct for a sequence of sc_msg__msg__Status.
typedef struct sc_msg__msg__Status__Sequence
{
  sc_msg__msg__Status * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sc_msg__msg__Status__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SC_MSG__MSG__DETAIL__STATUS__STRUCT_H_
