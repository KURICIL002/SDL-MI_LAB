// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sc_msg:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef SC_MSG__MSG__DETAIL__STATUS__BUILDER_HPP_
#define SC_MSG__MSG__DETAIL__STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sc_msg/msg/detail/status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sc_msg
{

namespace msg
{

namespace builder
{

class Init_Status_scstatus
{
public:
  explicit Init_Status_scstatus(::sc_msg::msg::Status & msg)
  : msg_(msg)
  {}
  ::sc_msg::msg::Status scstatus(::sc_msg::msg::Status::_scstatus_type arg)
  {
    msg_.scstatus = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sc_msg::msg::Status msg_;
};

class Init_Status_isvacon
{
public:
  explicit Init_Status_isvacon(::sc_msg::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_scstatus isvacon(::sc_msg::msg::Status::_isvacon_type arg)
  {
    msg_.isvacon = std::move(arg);
    return Init_Status_scstatus(msg_);
  }

private:
  ::sc_msg::msg::Status msg_;
};

class Init_Status_rpm
{
public:
  Init_Status_rpm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Status_isvacon rpm(::sc_msg::msg::Status::_rpm_type arg)
  {
    msg_.rpm = std::move(arg);
    return Init_Status_isvacon(msg_);
  }

private:
  ::sc_msg::msg::Status msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sc_msg::msg::Status>()
{
  return sc_msg::msg::builder::Init_Status_rpm();
}

}  // namespace sc_msg

#endif  // SC_MSG__MSG__DETAIL__STATUS__BUILDER_HPP_
