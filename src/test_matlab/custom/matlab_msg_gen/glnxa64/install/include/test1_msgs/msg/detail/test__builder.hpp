// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from test1_msgs:msg/Test.idl
// generated code does not contain a copyright notice

#ifndef TEST1_MSGS__MSG__DETAIL__TEST__BUILDER_HPP_
#define TEST1_MSGS__MSG__DETAIL__TEST__BUILDER_HPP_

#include "test1_msgs/msg/detail/test__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace test1_msgs
{

namespace msg
{

namespace builder
{

class Init_Test_num
{
public:
  Init_Test_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::test1_msgs::msg::Test num(::test1_msgs::msg::Test::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::test1_msgs::msg::Test msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::test1_msgs::msg::Test>()
{
  return test1_msgs::msg::builder::Init_Test_num();
}

}  // namespace test1_msgs

#endif  // TEST1_MSGS__MSG__DETAIL__TEST__BUILDER_HPP_
