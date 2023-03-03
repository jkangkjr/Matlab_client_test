// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from test1_msgs:msg/Test.idl
// generated code does not contain a copyright notice

#ifndef TEST1_MSGS__MSG__DETAIL__TEST__TRAITS_HPP_
#define TEST1_MSGS__MSG__DETAIL__TEST__TRAITS_HPP_

#include "test1_msgs/msg/detail/test__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const test1_msgs::msg::Test & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num: ";
    value_to_yaml(msg.num, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const test1_msgs::msg::Test & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<test1_msgs::msg::Test>()
{
  return "test1_msgs::msg::Test";
}

template<>
inline const char * name<test1_msgs::msg::Test>()
{
  return "test1_msgs/msg/Test";
}

template<>
struct has_fixed_size<test1_msgs::msg::Test>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<test1_msgs::msg::Test>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<test1_msgs::msg::Test>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TEST1_MSGS__MSG__DETAIL__TEST__TRAITS_HPP_
