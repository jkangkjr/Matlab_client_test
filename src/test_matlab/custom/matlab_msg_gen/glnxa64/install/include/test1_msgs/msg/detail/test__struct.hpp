// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from test1_msgs:msg/Test.idl
// generated code does not contain a copyright notice

#ifndef TEST1_MSGS__MSG__DETAIL__TEST__STRUCT_HPP_
#define TEST1_MSGS__MSG__DETAIL__TEST__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__test1_msgs__msg__Test __attribute__((deprecated))
#else
# define DEPRECATED__test1_msgs__msg__Test __declspec(deprecated)
#endif

namespace test1_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Test_
{
  using Type = Test_<ContainerAllocator>;

  explicit Test_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num = 0.0;
    }
  }

  explicit Test_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num = 0.0;
    }
  }

  // field types and members
  using _num_type =
    double;
  _num_type num;

  // setters for named parameter idiom
  Type & set__num(
    const double & _arg)
  {
    this->num = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    test1_msgs::msg::Test_<ContainerAllocator> *;
  using ConstRawPtr =
    const test1_msgs::msg::Test_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<test1_msgs::msg::Test_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<test1_msgs::msg::Test_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      test1_msgs::msg::Test_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<test1_msgs::msg::Test_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      test1_msgs::msg::Test_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<test1_msgs::msg::Test_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<test1_msgs::msg::Test_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<test1_msgs::msg::Test_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__test1_msgs__msg__Test
    std::shared_ptr<test1_msgs::msg::Test_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__test1_msgs__msg__Test
    std::shared_ptr<test1_msgs::msg::Test_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Test_ & other) const
  {
    if (this->num != other.num) {
      return false;
    }
    return true;
  }
  bool operator!=(const Test_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Test_

// alias to use template instance with default allocator
using Test =
  test1_msgs::msg::Test_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace test1_msgs

#endif  // TEST1_MSGS__MSG__DETAIL__TEST__STRUCT_HPP_
