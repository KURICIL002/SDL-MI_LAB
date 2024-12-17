// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from model_sc_msg:msg/Modelcomm.idl
// generated code does not contain a copyright notice

#ifndef MODEL_SC_MSG__MSG__DETAIL__MODELCOMM__TRAITS_HPP_
#define MODEL_SC_MSG__MSG__DETAIL__MODELCOMM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "model_sc_msg/msg/detail/modelcomm__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace model_sc_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const Modelcomm & msg,
  std::ostream & out)
{
  out << "{";
  // member: apex_sc_command
  {
    out << "apex_sc_command: ";
    rosidl_generator_traits::value_to_yaml(msg.apex_sc_command, out);
    out << ", ";
  }

  // member: apex_sc_rpm
  {
    out << "apex_sc_rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.apex_sc_rpm, out);
    out << ", ";
  }

  // member: apex_sc_duration
  {
    out << "apex_sc_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.apex_sc_duration, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Modelcomm & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: apex_sc_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "apex_sc_command: ";
    rosidl_generator_traits::value_to_yaml(msg.apex_sc_command, out);
    out << "\n";
  }

  // member: apex_sc_rpm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "apex_sc_rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.apex_sc_rpm, out);
    out << "\n";
  }

  // member: apex_sc_duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "apex_sc_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.apex_sc_duration, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Modelcomm & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace model_sc_msg

namespace rosidl_generator_traits
{

[[deprecated("use model_sc_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const model_sc_msg::msg::Modelcomm & msg,
  std::ostream & out, size_t indentation = 0)
{
  model_sc_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use model_sc_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const model_sc_msg::msg::Modelcomm & msg)
{
  return model_sc_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<model_sc_msg::msg::Modelcomm>()
{
  return "model_sc_msg::msg::Modelcomm";
}

template<>
inline const char * name<model_sc_msg::msg::Modelcomm>()
{
  return "model_sc_msg/msg/Modelcomm";
}

template<>
struct has_fixed_size<model_sc_msg::msg::Modelcomm>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<model_sc_msg::msg::Modelcomm>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<model_sc_msg::msg::Modelcomm>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MODEL_SC_MSG__MSG__DETAIL__MODELCOMM__TRAITS_HPP_
