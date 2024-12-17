// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from model_sc_msg:msg/Modelsta.idl
// generated code does not contain a copyright notice

#ifndef MODEL_SC_MSG__MSG__DETAIL__MODELSTA__STRUCT_HPP_
#define MODEL_SC_MSG__MSG__DETAIL__MODELSTA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__model_sc_msg__msg__Modelsta __attribute__((deprecated))
#else
# define DEPRECATED__model_sc_msg__msg__Modelsta __declspec(deprecated)
#endif

namespace model_sc_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Modelsta_
{
  using Type = Modelsta_<ContainerAllocator>;

  explicit Modelsta_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rpm = 0l;
      this->is_vacuum_on = false;
      this->apex_sc_status = 0l;
    }
  }

  explicit Modelsta_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rpm = 0l;
      this->is_vacuum_on = false;
      this->apex_sc_status = 0l;
    }
  }

  // field types and members
  using _rpm_type =
    int32_t;
  _rpm_type rpm;
  using _is_vacuum_on_type =
    bool;
  _is_vacuum_on_type is_vacuum_on;
  using _apex_sc_status_type =
    int32_t;
  _apex_sc_status_type apex_sc_status;

  // setters for named parameter idiom
  Type & set__rpm(
    const int32_t & _arg)
  {
    this->rpm = _arg;
    return *this;
  }
  Type & set__is_vacuum_on(
    const bool & _arg)
  {
    this->is_vacuum_on = _arg;
    return *this;
  }
  Type & set__apex_sc_status(
    const int32_t & _arg)
  {
    this->apex_sc_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    model_sc_msg::msg::Modelsta_<ContainerAllocator> *;
  using ConstRawPtr =
    const model_sc_msg::msg::Modelsta_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<model_sc_msg::msg::Modelsta_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<model_sc_msg::msg::Modelsta_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      model_sc_msg::msg::Modelsta_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<model_sc_msg::msg::Modelsta_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      model_sc_msg::msg::Modelsta_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<model_sc_msg::msg::Modelsta_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<model_sc_msg::msg::Modelsta_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<model_sc_msg::msg::Modelsta_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__model_sc_msg__msg__Modelsta
    std::shared_ptr<model_sc_msg::msg::Modelsta_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__model_sc_msg__msg__Modelsta
    std::shared_ptr<model_sc_msg::msg::Modelsta_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Modelsta_ & other) const
  {
    if (this->rpm != other.rpm) {
      return false;
    }
    if (this->is_vacuum_on != other.is_vacuum_on) {
      return false;
    }
    if (this->apex_sc_status != other.apex_sc_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const Modelsta_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Modelsta_

// alias to use template instance with default allocator
using Modelsta =
  model_sc_msg::msg::Modelsta_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace model_sc_msg

#endif  // MODEL_SC_MSG__MSG__DETAIL__MODELSTA__STRUCT_HPP_
