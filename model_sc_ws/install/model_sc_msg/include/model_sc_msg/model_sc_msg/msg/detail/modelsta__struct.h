// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from model_sc_msg:msg/Modelsta.idl
// generated code does not contain a copyright notice

#ifndef MODEL_SC_MSG__MSG__DETAIL__MODELSTA__STRUCT_H_
#define MODEL_SC_MSG__MSG__DETAIL__MODELSTA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Modelsta in the package model_sc_msg.
typedef struct model_sc_msg__msg__Modelsta
{
  int32_t rpm;
  bool is_vacuum_on;
  int32_t apex_sc_status;
} model_sc_msg__msg__Modelsta;

// Struct for a sequence of model_sc_msg__msg__Modelsta.
typedef struct model_sc_msg__msg__Modelsta__Sequence
{
  model_sc_msg__msg__Modelsta * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} model_sc_msg__msg__Modelsta__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MODEL_SC_MSG__MSG__DETAIL__MODELSTA__STRUCT_H_
