// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from sc_msg:msg/Commands.idl
// generated code does not contain a copyright notice

#ifndef SC_MSG__MSG__DETAIL__COMMANDS__FUNCTIONS_H_
#define SC_MSG__MSG__DETAIL__COMMANDS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "sc_msg/msg/rosidl_generator_c__visibility_control.h"

#include "sc_msg/msg/detail/commands__struct.h"

/// Initialize msg/Commands message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sc_msg__msg__Commands
 * )) before or use
 * sc_msg__msg__Commands__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sc_msg
bool
sc_msg__msg__Commands__init(sc_msg__msg__Commands * msg);

/// Finalize msg/Commands message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc_msg
void
sc_msg__msg__Commands__fini(sc_msg__msg__Commands * msg);

/// Create msg/Commands message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sc_msg__msg__Commands__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sc_msg
sc_msg__msg__Commands *
sc_msg__msg__Commands__create();

/// Destroy msg/Commands message.
/**
 * It calls
 * sc_msg__msg__Commands__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc_msg
void
sc_msg__msg__Commands__destroy(sc_msg__msg__Commands * msg);

/// Check for msg/Commands message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc_msg
bool
sc_msg__msg__Commands__are_equal(const sc_msg__msg__Commands * lhs, const sc_msg__msg__Commands * rhs);

/// Copy a msg/Commands message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc_msg
bool
sc_msg__msg__Commands__copy(
  const sc_msg__msg__Commands * input,
  sc_msg__msg__Commands * output);

/// Initialize array of msg/Commands messages.
/**
 * It allocates the memory for the number of elements and calls
 * sc_msg__msg__Commands__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc_msg
bool
sc_msg__msg__Commands__Sequence__init(sc_msg__msg__Commands__Sequence * array, size_t size);

/// Finalize array of msg/Commands messages.
/**
 * It calls
 * sc_msg__msg__Commands__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc_msg
void
sc_msg__msg__Commands__Sequence__fini(sc_msg__msg__Commands__Sequence * array);

/// Create array of msg/Commands messages.
/**
 * It allocates the memory for the array and calls
 * sc_msg__msg__Commands__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sc_msg
sc_msg__msg__Commands__Sequence *
sc_msg__msg__Commands__Sequence__create(size_t size);

/// Destroy array of msg/Commands messages.
/**
 * It calls
 * sc_msg__msg__Commands__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc_msg
void
sc_msg__msg__Commands__Sequence__destroy(sc_msg__msg__Commands__Sequence * array);

/// Check for msg/Commands message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc_msg
bool
sc_msg__msg__Commands__Sequence__are_equal(const sc_msg__msg__Commands__Sequence * lhs, const sc_msg__msg__Commands__Sequence * rhs);

/// Copy an array of msg/Commands messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc_msg
bool
sc_msg__msg__Commands__Sequence__copy(
  const sc_msg__msg__Commands__Sequence * input,
  sc_msg__msg__Commands__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SC_MSG__MSG__DETAIL__COMMANDS__FUNCTIONS_H_
