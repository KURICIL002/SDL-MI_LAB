// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from model_sc_msg:msg/Modelcomm.idl
// generated code does not contain a copyright notice

#ifndef MODEL_SC_MSG__MSG__DETAIL__MODELCOMM__STRUCT_H_
#define MODEL_SC_MSG__MSG__DETAIL__MODELCOMM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Modelcomm in the package model_sc_msg.
/**
  * Required commands to use the Apex spin coater
 */
typedef struct model_sc_msg__msg__Modelcomm
{
  int32_t apex_sc_command;
  int32_t apex_sc_rpm;
  int32_t apex_sc_duration;
} model_sc_msg__msg__Modelcomm;

// Struct for a sequence of model_sc_msg__msg__Modelcomm.
typedef struct model_sc_msg__msg__Modelcomm__Sequence
{
  model_sc_msg__msg__Modelcomm * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} model_sc_msg__msg__Modelcomm__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MODEL_SC_MSG__MSG__DETAIL__MODELCOMM__STRUCT_H_
