// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from model_sc_msg:msg/Modelsta.idl
// generated code does not contain a copyright notice

#ifndef MODEL_SC_MSG__MSG__DETAIL__MODELSTA__TRAITS_HPP_
#define MODEL_SC_MSG__MSG__DETAIL__MODELSTA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "model_sc_msg/msg/detail/modelsta__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace model_sc_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const Modelsta & msg,
  std::ostream & out)
{
  out << "{";
  // member: rpm
  {
    out << "rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.rpm, out);
    out << ", ";
  }

  // member: is_vacuum_on
  {
    out << "is_vacuum_on: ";
    rosidl_generator_traits::value_to_yaml(msg.is_vacuum_on, out);
    out << ", ";
  }

  // member: apex_sc_status
  {
    out << "apex_sc_status: ";
    rosidl_generator_traits::value_to_yaml(msg.apex_sc_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Modelsta & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: rpm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.rpm, out);
    out << "\n";
  }

  // member: is_vacuum_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_vacuum_on: ";
    rosidl_generator_traits::value_to_yaml(msg.is_vacuum_on, out);
    out << "\n";
  }

  // member: apex_sc_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "apex_sc_status: ";
    rosidl_generator_traits::value_to_yaml(msg.apex_sc_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Modelsta & msg, bool use_flow_style = false)
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
  const model_sc_msg::msg::Modelsta & msg,
  std::ostream & out, size_t indentation = 0)
{
  model_sc_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use model_sc_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const model_sc_msg::msg::Modelsta & msg)
{
  return model_sc_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<model_sc_msg::msg::Modelsta>()
{
  return "model_sc_msg::msg::Modelsta";
}

template<>
inline const char * name<model_sc_msg::msg::Modelsta>()
{
  return "model_sc_msg/msg/Modelsta";
}

template<>
struct has_fixed_size<model_sc_msg::msg::Modelsta>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<model_sc_msg::msg::Modelsta>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<model_sc_msg::msg::Modelsta>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MODEL_SC_MSG__MSG__DETAIL__MODELSTA__TRAITS_HPP_
