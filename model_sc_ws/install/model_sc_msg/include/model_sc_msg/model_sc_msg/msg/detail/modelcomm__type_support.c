// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from model_sc_msg:msg/Modelcomm.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "model_sc_msg/msg/detail/modelcomm__rosidl_typesupport_introspection_c.h"
#include "model_sc_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "model_sc_msg/msg/detail/modelcomm__functions.h"
#include "model_sc_msg/msg/detail/modelcomm__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void model_sc_msg__msg__Modelcomm__rosidl_typesupport_introspection_c__Modelcomm_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  model_sc_msg__msg__Modelcomm__init(message_memory);
}

void model_sc_msg__msg__Modelcomm__rosidl_typesupport_introspection_c__Modelcomm_fini_function(void * message_memory)
{
  model_sc_msg__msg__Modelcomm__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember model_sc_msg__msg__Modelcomm__rosidl_typesupport_introspection_c__Modelcomm_message_member_array[3] = {
  {
    "apex_sc_command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(model_sc_msg__msg__Modelcomm, apex_sc_command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "apex_sc_rpm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(model_sc_msg__msg__Modelcomm, apex_sc_rpm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "apex_sc_duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(model_sc_msg__msg__Modelcomm, apex_sc_duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers model_sc_msg__msg__Modelcomm__rosidl_typesupport_introspection_c__Modelcomm_message_members = {
  "model_sc_msg__msg",  // message namespace
  "Modelcomm",  // message name
  3,  // number of fields
  sizeof(model_sc_msg__msg__Modelcomm),
  model_sc_msg__msg__Modelcomm__rosidl_typesupport_introspection_c__Modelcomm_message_member_array,  // message members
  model_sc_msg__msg__Modelcomm__rosidl_typesupport_introspection_c__Modelcomm_init_function,  // function to initialize message memory (memory has to be allocated)
  model_sc_msg__msg__Modelcomm__rosidl_typesupport_introspection_c__Modelcomm_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t model_sc_msg__msg__Modelcomm__rosidl_typesupport_introspection_c__Modelcomm_message_type_support_handle = {
  0,
  &model_sc_msg__msg__Modelcomm__rosidl_typesupport_introspection_c__Modelcomm_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_model_sc_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, model_sc_msg, msg, Modelcomm)() {
  if (!model_sc_msg__msg__Modelcomm__rosidl_typesupport_introspection_c__Modelcomm_message_type_support_handle.typesupport_identifier) {
    model_sc_msg__msg__Modelcomm__rosidl_typesupport_introspection_c__Modelcomm_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &model_sc_msg__msg__Modelcomm__rosidl_typesupport_introspection_c__Modelcomm_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
