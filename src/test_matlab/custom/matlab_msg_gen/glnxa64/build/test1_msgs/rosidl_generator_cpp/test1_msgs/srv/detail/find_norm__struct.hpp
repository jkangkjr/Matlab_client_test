// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from test1_msgs:srv/FindNorm.idl
// generated code does not contain a copyright notice

#ifndef TEST1_MSGS__SRV__DETAIL__FIND_NORM__STRUCT_HPP_
#define TEST1_MSGS__SRV__DETAIL__FIND_NORM__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'input'
#include "test1_msgs/msg/detail/test__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__test1_msgs__srv__FindNorm_Request __attribute__((deprecated))
#else
# define DEPRECATED__test1_msgs__srv__FindNorm_Request __declspec(deprecated)
#endif

namespace test1_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FindNorm_Request_
{
  using Type = FindNorm_Request_<ContainerAllocator>;

  explicit FindNorm_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : input(_init)
  {
    (void)_init;
  }

  explicit FindNorm_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : input(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _input_type =
    test1_msgs::msg::Test_<ContainerAllocator>;
  _input_type input;

  // setters for named parameter idiom
  Type & set__input(
    const test1_msgs::msg::Test_<ContainerAllocator> & _arg)
  {
    this->input = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    test1_msgs::srv::FindNorm_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const test1_msgs::srv::FindNorm_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<test1_msgs::srv::FindNorm_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<test1_msgs::srv::FindNorm_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      test1_msgs::srv::FindNorm_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<test1_msgs::srv::FindNorm_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      test1_msgs::srv::FindNorm_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<test1_msgs::srv::FindNorm_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<test1_msgs::srv::FindNorm_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<test1_msgs::srv::FindNorm_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__test1_msgs__srv__FindNorm_Request
    std::shared_ptr<test1_msgs::srv::FindNorm_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__test1_msgs__srv__FindNorm_Request
    std::shared_ptr<test1_msgs::srv::FindNorm_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FindNorm_Request_ & other) const
  {
    if (this->input != other.input) {
      return false;
    }
    return true;
  }
  bool operator!=(const FindNorm_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FindNorm_Request_

// alias to use template instance with default allocator
using FindNorm_Request =
  test1_msgs::srv::FindNorm_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace test1_msgs


// Include directives for member types
// Member 'norm'
// already included above
// #include "test1_msgs/msg/detail/test__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__test1_msgs__srv__FindNorm_Response __attribute__((deprecated))
#else
# define DEPRECATED__test1_msgs__srv__FindNorm_Response __declspec(deprecated)
#endif

namespace test1_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FindNorm_Response_
{
  using Type = FindNorm_Response_<ContainerAllocator>;

  explicit FindNorm_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : norm(_init)
  {
    (void)_init;
  }

  explicit FindNorm_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : norm(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _norm_type =
    test1_msgs::msg::Test_<ContainerAllocator>;
  _norm_type norm;

  // setters for named parameter idiom
  Type & set__norm(
    const test1_msgs::msg::Test_<ContainerAllocator> & _arg)
  {
    this->norm = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    test1_msgs::srv::FindNorm_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const test1_msgs::srv::FindNorm_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<test1_msgs::srv::FindNorm_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<test1_msgs::srv::FindNorm_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      test1_msgs::srv::FindNorm_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<test1_msgs::srv::FindNorm_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      test1_msgs::srv::FindNorm_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<test1_msgs::srv::FindNorm_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<test1_msgs::srv::FindNorm_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<test1_msgs::srv::FindNorm_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__test1_msgs__srv__FindNorm_Response
    std::shared_ptr<test1_msgs::srv::FindNorm_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__test1_msgs__srv__FindNorm_Response
    std::shared_ptr<test1_msgs::srv::FindNorm_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FindNorm_Response_ & other) const
  {
    if (this->norm != other.norm) {
      return false;
    }
    return true;
  }
  bool operator!=(const FindNorm_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FindNorm_Response_

// alias to use template instance with default allocator
using FindNorm_Response =
  test1_msgs::srv::FindNorm_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace test1_msgs

namespace test1_msgs
{

namespace srv
{

struct FindNorm
{
  using Request = test1_msgs::srv::FindNorm_Request;
  using Response = test1_msgs::srv::FindNorm_Response;
};

}  // namespace srv

}  // namespace test1_msgs

#endif  // TEST1_MSGS__SRV__DETAIL__FIND_NORM__STRUCT_HPP_
