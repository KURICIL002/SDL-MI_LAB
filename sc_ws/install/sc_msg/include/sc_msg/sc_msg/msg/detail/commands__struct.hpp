// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sc_msg:msg/Commands.idl
// generated code does not contain a copyright notice

#ifndef SC_MSG__MSG__DETAIL__COMMANDS__STRUCT_HPP_
#define SC_MSG__MSG__DETAIL__COMMANDS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sc_msg__msg__Commands __attribute__((deprecated))
#else
# define DEPRECATED__sc_msg__msg__Commands __declspec(deprecated)
#endif

namespace sc_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Commands_
{
  using Type = Commands_<ContainerAllocator>;

  explicit Commands_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sccmd = 0l;
      this->scrpm = 0l;
      this->sctime = 0l;
    }
  }

  explicit Commands_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sccmd = 0l;
      this->scrpm = 0l;
      this->sctime = 0l;
    }
  }

  // field types and members
  using _sccmd_type =
    int32_t;
  _sccmd_type sccmd;
  using _scrpm_type =
    int32_t;
  _scrpm_type scrpm;
  using _sctime_type =
    int32_t;
  _sctime_type sctime;

  // setters for named parameter idiom
  Type & set__sccmd(
    const int32_t & _arg)
  {
    this->sccmd = _arg;
    return *this;
  }
  Type & set__scrpm(
    const int32_t & _arg)
  {
    this->scrpm = _arg;
    return *this;
  }
  Type & set__sctime(
    const int32_t & _arg)
  {
    this->sctime = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t VACCUM_ON =
    1;
  static constexpr int32_t SC_COAT =
    2;
  static constexpr int32_t STOP =
    3;
  static constexpr int32_t VACCUM_OFF =
    4;

  // pointer types
  using RawPtr =
    sc_msg::msg::Commands_<ContainerAllocator> *;
  using ConstRawPtr =
    const sc_msg::msg::Commands_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sc_msg::msg::Commands_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sc_msg::msg::Commands_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sc_msg::msg::Commands_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sc_msg::msg::Commands_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sc_msg::msg::Commands_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sc_msg::msg::Commands_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sc_msg::msg::Commands_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sc_msg::msg::Commands_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sc_msg__msg__Commands
    std::shared_ptr<sc_msg::msg::Commands_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sc_msg__msg__Commands
    std::shared_ptr<sc_msg::msg::Commands_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Commands_ & other) const
  {
    if (this->sccmd != other.sccmd) {
      return false;
    }
    if (this->scrpm != other.scrpm) {
      return false;
    }
    if (this->sctime != other.sctime) {
      return false;
    }
    return true;
  }
  bool operator!=(const Commands_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Commands_

// alias to use template instance with default allocator
using Commands =
  sc_msg::msg::Commands_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Commands_<ContainerAllocator>::VACCUM_ON;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Commands_<ContainerAllocator>::SC_COAT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Commands_<ContainerAllocator>::STOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Commands_<ContainerAllocator>::VACCUM_OFF;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace sc_msg

#endif  // SC_MSG__MSG__DETAIL__COMMANDS__STRUCT_HPP_
