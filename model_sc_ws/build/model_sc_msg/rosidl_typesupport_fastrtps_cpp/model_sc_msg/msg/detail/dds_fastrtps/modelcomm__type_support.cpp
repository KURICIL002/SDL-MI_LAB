// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from model_sc_msg:msg/Modelcomm.idl
// generated code does not contain a copyright notice
#include "model_sc_msg/msg/detail/modelcomm__rosidl_typesupport_fastrtps_cpp.hpp"
#include "model_sc_msg/msg/detail/modelcomm__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace model_sc_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_model_sc_msg
cdr_serialize(
  const model_sc_msg::msg::Modelcomm & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: apex_sc_command
  cdr << ros_message.apex_sc_command;
  // Member: apex_sc_rpm
  cdr << ros_message.apex_sc_rpm;
  // Member: apex_sc_duration
  cdr << ros_message.apex_sc_duration;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_model_sc_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  model_sc_msg::msg::Modelcomm & ros_message)
{
  // Member: apex_sc_command
  cdr >> ros_message.apex_sc_command;

  // Member: apex_sc_rpm
  cdr >> ros_message.apex_sc_rpm;

  // Member: apex_sc_duration
  cdr >> ros_message.apex_sc_duration;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_model_sc_msg
get_serialized_size(
  const model_sc_msg::msg::Modelcomm & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: apex_sc_command
  {
    size_t item_size = sizeof(ros_message.apex_sc_command);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: apex_sc_rpm
  {
    size_t item_size = sizeof(ros_message.apex_sc_rpm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: apex_sc_duration
  {
    size_t item_size = sizeof(ros_message.apex_sc_duration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_model_sc_msg
max_serialized_size_Modelcomm(
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


  // Member: apex_sc_command
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: apex_sc_rpm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: apex_sc_duration
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
    using DataType = model_sc_msg::msg::Modelcomm;
    is_plain =
      (
      offsetof(DataType, apex_sc_duration) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Modelcomm__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const model_sc_msg::msg::Modelcomm *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Modelcomm__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<model_sc_msg::msg::Modelcomm *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Modelcomm__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const model_sc_msg::msg::Modelcomm *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Modelcomm__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Modelcomm(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Modelcomm__callbacks = {
  "model_sc_msg::msg",
  "Modelcomm",
  _Modelcomm__cdr_serialize,
  _Modelcomm__cdr_deserialize,
  _Modelcomm__get_serialized_size,
  _Modelcomm__max_serialized_size
};

static rosidl_message_type_support_t _Modelcomm__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Modelcomm__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace model_sc_msg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_model_sc_msg
const rosidl_message_type_support_t *
get_message_type_support_handle<model_sc_msg::msg::Modelcomm>()
{
  return &model_sc_msg::msg::typesupport_fastrtps_cpp::_Modelcomm__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, model_sc_msg, msg, Modelcomm)() {
  return &model_sc_msg::msg::typesupport_fastrtps_cpp::_Modelcomm__handle;
}

#ifdef __cplusplus
}
#endif
