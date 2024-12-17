// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from model_sc_msg:msg/Modelsta.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "model_sc_msg/msg/detail/modelsta__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace model_sc_msg
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Modelsta_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) model_sc_msg::msg::Modelsta(_init);
}

void Modelsta_fini_function(void * message_memory)
{
  auto typed_message = static_cast<model_sc_msg::msg::Modelsta *>(message_memory);
  typed_message->~Modelsta();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Modelsta_message_member_array[3] = {
  {
    "rpm",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(model_sc_msg::msg::Modelsta, rpm),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_vacuum_on",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(model_sc_msg::msg::Modelsta, is_vacuum_on),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "apex_sc_status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(model_sc_msg::msg::Modelsta, apex_sc_status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Modelsta_message_members = {
  "model_sc_msg::msg",  // message namespace
  "Modelsta",  // message name
  3,  // number of fields
  sizeof(model_sc_msg::msg::Modelsta),
  Modelsta_message_member_array,  // message members
  Modelsta_init_function,  // function to initialize message memory (memory has to be allocated)
  Modelsta_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Modelsta_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Modelsta_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace model_sc_msg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<model_sc_msg::msg::Modelsta>()
{
  return &::model_sc_msg::msg::rosidl_typesupport_introspection_cpp::Modelsta_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, model_sc_msg, msg, Modelsta)() {
  return &::model_sc_msg::msg::rosidl_typesupport_introspection_cpp::Modelsta_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
