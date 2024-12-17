// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from model_sc_msg:msg/Modelsta.idl
// generated code does not contain a copyright notice
#include "model_sc_msg/msg/detail/modelsta__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "model_sc_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "model_sc_msg/msg/detail/modelsta__struct.h"
#include "model_sc_msg/msg/detail/modelsta__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Modelsta__ros_msg_type = model_sc_msg__msg__Modelsta;

static bool _Modelsta__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Modelsta__ros_msg_type * ros_message = static_cast<const _Modelsta__ros_msg_type *>(untyped_ros_message);
  // Field name: rpm
  {
    cdr << ros_message->rpm;
  }

  // Field name: is_vacuum_on
  {
    cdr << (ros_message->is_vacuum_on ? true : false);
  }

  // Field name: apex_sc_status
  {
    cdr << ros_message->apex_sc_status;
  }

  return true;
}

static bool _Modelsta__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Modelsta__ros_msg_type * ros_message = static_cast<_Modelsta__ros_msg_type *>(untyped_ros_message);
  // Field name: rpm
  {
    cdr >> ros_message->rpm;
  }

  // Field name: is_vacuum_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_vacuum_on = tmp ? true : false;
  }

  // Field name: apex_sc_status
  {
    cdr >> ros_message->apex_sc_status;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_model_sc_msg
size_t get_serialized_size_model_sc_msg__msg__Modelsta(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Modelsta__ros_msg_type * ros_message = static_cast<const _Modelsta__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name rpm
  {
    size_t item_size = sizeof(ros_message->rpm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_vacuum_on
  {
    size_t item_size = sizeof(ros_message->is_vacuum_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name apex_sc_status
  {
    size_t item_size = sizeof(ros_message->apex_sc_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Modelsta__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_model_sc_msg__msg__Modelsta(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_model_sc_msg
size_t max_serialized_size_model_sc_msg__msg__Modelsta(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: rpm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: is_vacuum_on
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: apex_sc_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = model_sc_msg__msg__Modelsta;
    is_plain =
      (
      offsetof(DataType, apex_sc_status) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Modelsta__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_model_sc_msg__msg__Modelsta(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Modelsta = {
  "model_sc_msg::msg",
  "Modelsta",
  _Modelsta__cdr_serialize,
  _Modelsta__cdr_deserialize,
  _Modelsta__get_serialized_size,
  _Modelsta__max_serialized_size
};

static rosidl_message_type_support_t _Modelsta__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Modelsta,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, model_sc_msg, msg, Modelsta)() {
  return &_Modelsta__type_support;
}

#if defined(__cplusplus)
}
#endif
