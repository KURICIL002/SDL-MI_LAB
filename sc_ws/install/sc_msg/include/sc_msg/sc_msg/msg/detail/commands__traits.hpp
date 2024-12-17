// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sc_msg:msg/Commands.idl
// generated code does not contain a copyright notice

#ifndef SC_MSG__MSG__DETAIL__COMMANDS__TRAITS_HPP_
#define SC_MSG__MSG__DETAIL__COMMANDS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sc_msg/msg/detail/commands__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sc_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const Commands & msg,
  std::ostream & out)
{
  out << "{";
  // member: sccmd
  {
    out << "sccmd: ";
    rosidl_generator_traits::value_to_yaml(msg.sccmd, out);
    out << ", ";
  }

  // member: scrpm
  {
    out << "scrpm: ";
    rosidl_generator_traits::value_to_yaml(msg.scrpm, out);
    out << ", ";
  }

  // member: sctime
  {
    out << "sctime: ";
    rosidl_generator_traits::value_to_yaml(msg.sctime, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Commands & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sccmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sccmd: ";
    rosidl_generator_traits::value_to_yaml(msg.sccmd, out);
    out << "\n";
  }

  // member: scrpm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scrpm: ";
    rosidl_generator_traits::value_to_yaml(msg.scrpm, out);
    out << "\n";
  }

  // member: sctime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sctime: ";
    rosidl_generator_traits::value_to_yaml(msg.sctime, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Commands & msg, bool use_flow_style = false)
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

}  // namespace sc_msg

namespace rosidl_generator_traits
{

[[deprecated("use sc_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sc_msg::msg::Commands & msg,
  std::ostream & out, size_t indentation = 0)
{
  sc_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sc_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const sc_msg::msg::Commands & msg)
{
  return sc_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sc_msg::msg::Commands>()
{
  return "sc_msg::msg::Commands";
}

template<>
inline const char * name<sc_msg::msg::Commands>()
{
  return "sc_msg/msg/Commands";
}

template<>
struct has_fixed_size<sc_msg::msg::Commands>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sc_msg::msg::Commands>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sc_msg::msg::Commands>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SC_MSG__MSG__DETAIL__COMMANDS__TRAITS_HPP_
