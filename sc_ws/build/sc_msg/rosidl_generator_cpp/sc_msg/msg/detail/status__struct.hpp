// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sc_msg:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef SC_MSG__MSG__DETAIL__STATUS__STRUCT_HPP_
#define SC_MSG__MSG__DETAIL__STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sc_msg__msg__Status __attribute__((deprecated))
#else
# define DEPRECATED__sc_msg__msg__Status __declspec(deprecated)
#endif

namespace sc_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Status_
{
  using Type = Status_<ContainerAllocator>;

  explicit Status_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rpm = 0l;
      this->isvacon = false;
      this->scstatus = 0l;
    }
  }

  explicit Status_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rpm = 0l;
      this->isvacon = false;
      this->scstatus = 0l;
    }
  }

  // field types and members
  using _rpm_type =
    int32_t;
  _rpm_type rpm;
  using _isvacon_type =
    bool;
  _isvacon_type isvacon;
  using _scstatus_type =
    int32_t;
  _scstatus_type scstatus;

  // setters for named parameter idiom
  Type & set__rpm(
    const int32_t & _arg)
  {
    this->rpm = _arg;
    return *this;
  }
  Type & set__isvacon(
    const bool & _arg)
  {
    this->isvacon = _arg;
    return *this;
  }
  Type & set__scstatus(
    const int32_t & _arg)
  {
    this->scstatus = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sc_msg::msg::Status_<ContainerAllocator> *;
  using ConstRawPtr =
    const sc_msg::msg::Status_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sc_msg::msg::Status_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sc_msg::msg::Status_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sc_msg::msg::Status_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sc_msg::msg::Status_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sc_msg::msg::Status_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sc_msg::msg::Status_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sc_msg::msg::Status_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sc_msg::msg::Status_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sc_msg__msg__Status
    std::shared_ptr<sc_msg::msg::Status_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sc_msg__msg__Status
    std::shared_ptr<sc_msg::msg::Status_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Status_ & other) const
  {
    if (this->rpm != other.rpm) {
      return false;
    }
    if (this->isvacon != other.isvacon) {
      return false;
    }
    if (this->scstatus != other.scstatus) {
      return false;
    }
    return true;
  }
  bool operator!=(const Status_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Status_

// alias to use template instance with default allocator
using Status =
  sc_msg::msg::Status_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sc_msg

#endif  // SC_MSG__MSG__DETAIL__STATUS__STRUCT_HPP_
