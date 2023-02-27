// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from test1_msgs:srv/FindNorm.idl
// generated code does not contain a copyright notice

#ifndef TEST1_MSGS__SRV__DETAIL__FIND_NORM__BUILDER_HPP_
#define TEST1_MSGS__SRV__DETAIL__FIND_NORM__BUILDER_HPP_

#include "test1_msgs/srv/detail/find_norm__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace test1_msgs
{

namespace srv
{

namespace builder
{

class Init_FindNorm_Request_input
{
public:
  Init_FindNorm_Request_input()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::test1_msgs::srv::FindNorm_Request input(::test1_msgs::srv::FindNorm_Request::_input_type arg)
  {
    msg_.input = std::move(arg);
    return std::move(msg_);
  }

private:
  ::test1_msgs::srv::FindNorm_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::test1_msgs::srv::FindNorm_Request>()
{
  return test1_msgs::srv::builder::Init_FindNorm_Request_input();
}

}  // namespace test1_msgs


namespace test1_msgs
{

namespace srv
{

namespace builder
{

class Init_FindNorm_Response_norm
{
public:
  Init_FindNorm_Response_norm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::test1_msgs::srv::FindNorm_Response norm(::test1_msgs::srv::FindNorm_Response::_norm_type arg)
  {
    msg_.norm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::test1_msgs::srv::FindNorm_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::test1_msgs::srv::FindNorm_Response>()
{
  return test1_msgs::srv::builder::Init_FindNorm_Response_norm();
}

}  // namespace test1_msgs

#endif  // TEST1_MSGS__SRV__DETAIL__FIND_NORM__BUILDER_HPP_
