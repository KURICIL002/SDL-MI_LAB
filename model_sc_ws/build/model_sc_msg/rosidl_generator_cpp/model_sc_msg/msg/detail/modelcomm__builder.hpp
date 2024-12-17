// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from model_sc_msg:msg/Modelcomm.idl
// generated code does not contain a copyright notice

#ifndef MODEL_SC_MSG__MSG__DETAIL__MODELCOMM__BUILDER_HPP_
#define MODEL_SC_MSG__MSG__DETAIL__MODELCOMM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "model_sc_msg/msg/detail/modelcomm__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace model_sc_msg
{

namespace msg
{

namespace builder
{

class Init_Modelcomm_apex_sc_duration
{
public:
  explicit Init_Modelcomm_apex_sc_duration(::model_sc_msg::msg::Modelcomm & msg)
  : msg_(msg)
  {}
  ::model_sc_msg::msg::Modelcomm apex_sc_duration(::model_sc_msg::msg::Modelcomm::_apex_sc_duration_type arg)
  {
    msg_.apex_sc_duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::model_sc_msg::msg::Modelcomm msg_;
};

class Init_Modelcomm_apex_sc_rpm
{
public:
  explicit Init_Modelcomm_apex_sc_rpm(::model_sc_msg::msg::Modelcomm & msg)
  : msg_(msg)
  {}
  Init_Modelcomm_apex_sc_duration apex_sc_rpm(::model_sc_msg::msg::Modelcomm::_apex_sc_rpm_type arg)
  {
    msg_.apex_sc_rpm = std::move(arg);
    return Init_Modelcomm_apex_sc_duration(msg_);
  }

private:
  ::model_sc_msg::msg::Modelcomm msg_;
};

class Init_Modelcomm_apex_sc_command
{
public:
  Init_Modelcomm_apex_sc_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Modelcomm_apex_sc_rpm apex_sc_command(::model_sc_msg::msg::Modelcomm::_apex_sc_command_type arg)
  {
    msg_.apex_sc_command = std::move(arg);
    return Init_Modelcomm_apex_sc_rpm(msg_);
  }

private:
  ::model_sc_msg::msg::Modelcomm msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::model_sc_msg::msg::Modelcomm>()
{
  return model_sc_msg::msg::builder::Init_Modelcomm_apex_sc_command();
}

}  // namespace model_sc_msg

#endif  // MODEL_SC_MSG__MSG__DETAIL__MODELCOMM__BUILDER_HPP_
