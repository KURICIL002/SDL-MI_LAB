// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from model_sc_msg:msg/Modelcomm.idl
// generated code does not contain a copyright notice

#ifndef MODEL_SC_MSG__MSG__DETAIL__MODELCOMM__STRUCT_HPP_
#define MODEL_SC_MSG__MSG__DETAIL__MODELCOMM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__model_sc_msg__msg__Modelcomm __attribute__((deprecated))
#else
# define DEPRECATED__model_sc_msg__msg__Modelcomm __declspec(deprecated)
#endif

namespace model_sc_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Modelcomm_
{
  using Type = Modelcomm_<ContainerAllocator>;

  explicit Modelcomm_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->apex_sc_command = 0l;
      this->apex_sc_rpm = 0l;
      this->apex_sc_duration = 0l;
    }
  }

  explicit Modelcomm_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->apex_sc_command = 0l;
      this->apex_sc_rpm = 0l;
      this->apex_sc_duration = 0l;
    }
  }

  // field types and members
  using _apex_sc_command_type =
    int32_t;
  _apex_sc_command_type apex_sc_command;
  using _apex_sc_rpm_type =
    int32_t;
  _apex_sc_rpm_type apex_sc_rpm;
  using _apex_sc_duration_type =
    int32_t;
  _apex_sc_duration_type apex_sc_duration;

  // setters for named parameter idiom
  Type & set__apex_sc_command(
    const int32_t & _arg)
  {
    this->apex_sc_command = _arg;
    return *this;
  }
  Type & set__apex_sc_rpm(
    const int32_t & _arg)
  {
    this->apex_sc_rpm = _arg;
    return *this;
  }
  Type & set__apex_sc_duration(
    const int32_t & _arg)
  {
    this->apex_sc_duration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    model_sc_msg::msg::Modelcomm_<ContainerAllocator> *;
  using ConstRawPtr =
    const model_sc_msg::msg::Modelcomm_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<model_sc_msg::msg::Modelcomm_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<model_sc_msg::msg::Modelcomm_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      model_sc_msg::msg::Modelcomm_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<model_sc_msg::msg::Modelcomm_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      model_sc_msg::msg::Modelcomm_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<model_sc_msg::msg::Modelcomm_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<model_sc_msg::msg::Modelcomm_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<model_sc_msg::msg::Modelcomm_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__model_sc_msg__msg__Modelcomm
    std::shared_ptr<model_sc_msg::msg::Modelcomm_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__model_sc_msg__msg__Modelcomm
    std::shared_ptr<model_sc_msg::msg::Modelcomm_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Modelcomm_ & other) const
  {
    if (this->apex_sc_command != other.apex_sc_command) {
      return false;
    }
    if (this->apex_sc_rpm != other.apex_sc_rpm) {
      return false;
    }
    if (this->apex_sc_duration != other.apex_sc_duration) {
      return false;
    }
    return true;
  }
  bool operator!=(const Modelcomm_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Modelcomm_

// alias to use template instance with default allocator
using Modelcomm =
  model_sc_msg::msg::Modelcomm_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace model_sc_msg

#endif  // MODEL_SC_MSG__MSG__DETAIL__MODELCOMM__STRUCT_HPP_
