// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sc_msg:msg/Commands.idl
// generated code does not contain a copyright notice

#ifndef SC_MSG__MSG__DETAIL__COMMANDS__BUILDER_HPP_
#define SC_MSG__MSG__DETAIL__COMMANDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sc_msg/msg/detail/commands__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sc_msg
{

namespace msg
{

namespace builder
{

class Init_Commands_sctime
{
public:
  explicit Init_Commands_sctime(::sc_msg::msg::Commands & msg)
  : msg_(msg)
  {}
  ::sc_msg::msg::Commands sctime(::sc_msg::msg::Commands::_sctime_type arg)
  {
    msg_.sctime = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sc_msg::msg::Commands msg_;
};

class Init_Commands_scrpm
{
public:
  explicit Init_Commands_scrpm(::sc_msg::msg::Commands & msg)
  : msg_(msg)
  {}
  Init_Commands_sctime scrpm(::sc_msg::msg::Commands::_scrpm_type arg)
  {
    msg_.scrpm = std::move(arg);
    return Init_Commands_sctime(msg_);
  }

private:
  ::sc_msg::msg::Commands msg_;
};

class Init_Commands_sccmd
{
public:
  Init_Commands_sccmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Commands_scrpm sccmd(::sc_msg::msg::Commands::_sccmd_type arg)
  {
    msg_.sccmd = std::move(arg);
    return Init_Commands_scrpm(msg_);
  }

private:
  ::sc_msg::msg::Commands msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sc_msg::msg::Commands>()
{
  return sc_msg::msg::builder::Init_Commands_sccmd();
}

}  // namespace sc_msg

#endif  // SC_MSG__MSG__DETAIL__COMMANDS__BUILDER_HPP_
