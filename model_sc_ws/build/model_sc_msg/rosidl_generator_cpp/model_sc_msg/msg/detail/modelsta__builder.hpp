// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from model_sc_msg:msg/Modelsta.idl
// generated code does not contain a copyright notice

#ifndef MODEL_SC_MSG__MSG__DETAIL__MODELSTA__BUILDER_HPP_
#define MODEL_SC_MSG__MSG__DETAIL__MODELSTA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "model_sc_msg/msg/detail/modelsta__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace model_sc_msg
{

namespace msg
{

namespace builder
{

class Init_Modelsta_apex_sc_status
{
public:
  explicit Init_Modelsta_apex_sc_status(::model_sc_msg::msg::Modelsta & msg)
  : msg_(msg)
  {}
  ::model_sc_msg::msg::Modelsta apex_sc_status(::model_sc_msg::msg::Modelsta::_apex_sc_status_type arg)
  {
    msg_.apex_sc_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::model_sc_msg::msg::Modelsta msg_;
};

class Init_Modelsta_is_vacuum_on
{
public:
  explicit Init_Modelsta_is_vacuum_on(::model_sc_msg::msg::Modelsta & msg)
  : msg_(msg)
  {}
  Init_Modelsta_apex_sc_status is_vacuum_on(::model_sc_msg::msg::Modelsta::_is_vacuum_on_type arg)
  {
    msg_.is_vacuum_on = std::move(arg);
    return Init_Modelsta_apex_sc_status(msg_);
  }

private:
  ::model_sc_msg::msg::Modelsta msg_;
};

class Init_Modelsta_rpm
{
public:
  Init_Modelsta_rpm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Modelsta_is_vacuum_on rpm(::model_sc_msg::msg::Modelsta::_rpm_type arg)
  {
    msg_.rpm = std::move(arg);
    return Init_Modelsta_is_vacuum_on(msg_);
  }

private:
  ::model_sc_msg::msg::Modelsta msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::model_sc_msg::msg::Modelsta>()
{
  return model_sc_msg::msg::builder::Init_Modelsta_rpm();
}

}  // namespace model_sc_msg

#endif  // MODEL_SC_MSG__MSG__DETAIL__MODELSTA__BUILDER_HPP_
