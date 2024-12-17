// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from sc_msg:msg/Commands.idl
// generated code does not contain a copyright notice
#include "sc_msg/msg/detail/commands__rosidl_typesupport_fastrtps_cpp.hpp"
#include "sc_msg/msg/detail/commands__struct.hpp"

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

namespace sc_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sc_msg
cdr_serialize(
  const sc_msg::msg::Commands & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: sccmd
  cdr << ros_message.sccmd;
  // Member: scrpm
  cdr << ros_message.scrpm;
  // Member: sctime
  cdr << ros_message.sctime;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sc_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sc_msg::msg::Commands & ros_message)
{
  // Member: sccmd
  cdr >> ros_message.sccmd;

  // Member: scrpm
  cdr >> ros_message.scrpm;

  // Member: sctime
  cdr >> ros_message.sctime;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sc_msg
get_serialized_size(
  const sc_msg::msg::Commands & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: sccmd
  {
    size_t item_size = sizeof(ros_message.sccmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: scrpm
  {
    size_t item_size = sizeof(ros_message.scrpm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sctime
  {
    size_t item_size = sizeof(ros_message.sctime);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sc_msg
max_serialized_size_Commands(
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


  // Member: sccmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: scrpm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: sctime
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
    using DataType = sc_msg::msg::Commands;
    is_plain =
      (
      offsetof(DataType, sctime) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Commands__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const sc_msg::msg::Commands *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Commands__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sc_msg::msg::Commands *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Commands__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sc_msg::msg::Commands *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Commands__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Commands(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Commands__callbacks = {
  "sc_msg::msg",
  "Commands",
  _Commands__cdr_serialize,
  _Commands__cdr_deserialize,
  _Commands__get_serialized_size,
  _Commands__max_serialized_size
};

static rosidl_message_type_support_t _Commands__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Commands__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace sc_msg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_sc_msg
const rosidl_message_type_support_t *
get_message_type_support_handle<sc_msg::msg::Commands>()
{
  return &sc_msg::msg::typesupport_fastrtps_cpp::_Commands__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sc_msg, msg, Commands)() {
  return &sc_msg::msg::typesupport_fastrtps_cpp::_Commands__handle;
}

#ifdef __cplusplus
}
#endif
