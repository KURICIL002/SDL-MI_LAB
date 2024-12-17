// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from model_sc_msg:msg/Modelcomm.idl
// generated code does not contain a copyright notice

#ifndef MODEL_SC_MSG__MSG__DETAIL__MODELCOMM__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define MODEL_SC_MSG__MSG__DETAIL__MODELCOMM__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "model_sc_msg/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "model_sc_msg/msg/detail/modelcomm__struct.hpp"

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

#include "fastcdr/Cdr.h"

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
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_model_sc_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  model_sc_msg::msg::Modelcomm & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_model_sc_msg
get_serialized_size(
  const model_sc_msg::msg::Modelcomm & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_model_sc_msg
max_serialized_size_Modelcomm(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace model_sc_msg

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_model_sc_msg
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, model_sc_msg, msg, Modelcomm)();

#ifdef __cplusplus
}
#endif

#endif  // MODEL_SC_MSG__MSG__DETAIL__MODELCOMM__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
