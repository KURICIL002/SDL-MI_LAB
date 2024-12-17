// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sc_msg:msg/Commands.idl
// generated code does not contain a copyright notice

#ifndef SC_MSG__MSG__DETAIL__COMMANDS__STRUCT_H_
#define SC_MSG__MSG__DETAIL__COMMANDS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'VACCUM_ON'.
enum
{
  sc_msg__msg__Commands__VACCUM_ON = 1l
};

/// Constant 'SC_COAT'.
enum
{
  sc_msg__msg__Commands__SC_COAT = 2l
};

/// Constant 'STOP'.
enum
{
  sc_msg__msg__Commands__STOP = 3l
};

/// Constant 'VACCUM_OFF'.
enum
{
  sc_msg__msg__Commands__VACCUM_OFF = 4l
};

/// Struct defined in msg/Commands in the package sc_msg.
/**
  * Required commands to use the Apex spin coater
 */
typedef struct sc_msg__msg__Commands
{
  int32_t sccmd;
  int32_t scrpm;
  int32_t sctime;
} sc_msg__msg__Commands;

// Struct for a sequence of sc_msg__msg__Commands.
typedef struct sc_msg__msg__Commands__Sequence
{
  sc_msg__msg__Commands * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sc_msg__msg__Commands__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SC_MSG__MSG__DETAIL__COMMANDS__STRUCT_H_
