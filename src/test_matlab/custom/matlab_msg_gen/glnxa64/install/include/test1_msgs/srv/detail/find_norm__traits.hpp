// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from test1_msgs:srv/FindNorm.idl
// generated code does not contain a copyright notice

#ifndef TEST1_MSGS__SRV__DETAIL__FIND_NORM__TRAITS_HPP_
#define TEST1_MSGS__SRV__DETAIL__FIND_NORM__TRAITS_HPP_

#include "test1_msgs/srv/detail/find_norm__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'input'
#include "test1_msgs/msg/detail/test__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test1_msgs::srv::FindNorm_Request>()
{
  return "test1_msgs::srv::FindNorm_Request";
}

template<>
inline const char * name<test1_msgs::srv::FindNorm_Request>()
{
  return "test1_msgs/srv/FindNorm_Request";
}

template<>
struct has_fixed_size<test1_msgs::srv::FindNorm_Request>
  : std::integral_constant<bool, has_fixed_size<test1_msgs::msg::Test>::value> {};

template<>
struct has_bounded_size<test1_msgs::srv::FindNorm_Request>
  : std::integral_constant<bool, has_bounded_size<test1_msgs::msg::Test>::value> {};

template<>
struct is_message<test1_msgs::srv::FindNorm_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'norm'
// already included above
// #include "test1_msgs/msg/detail/test__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test1_msgs::srv::FindNorm_Response>()
{
  return "test1_msgs::srv::FindNorm_Response";
}

template<>
inline const char * name<test1_msgs::srv::FindNorm_Response>()
{
  return "test1_msgs/srv/FindNorm_Response";
}

template<>
struct has_fixed_size<test1_msgs::srv::FindNorm_Response>
  : std::integral_constant<bool, has_fixed_size<test1_msgs::msg::Test>::value> {};

template<>
struct has_bounded_size<test1_msgs::srv::FindNorm_Response>
  : std::integral_constant<bool, has_bounded_size<test1_msgs::msg::Test>::value> {};

template<>
struct is_message<test1_msgs::srv::FindNorm_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test1_msgs::srv::FindNorm>()
{
  return "test1_msgs::srv::FindNorm";
}

template<>
inline const char * name<test1_msgs::srv::FindNorm>()
{
  return "test1_msgs/srv/FindNorm";
}

template<>
struct has_fixed_size<test1_msgs::srv::FindNorm>
  : std::integral_constant<
    bool,
    has_fixed_size<test1_msgs::srv::FindNorm_Request>::value &&
    has_fixed_size<test1_msgs::srv::FindNorm_Response>::value
  >
{
};

template<>
struct has_bounded_size<test1_msgs::srv::FindNorm>
  : std::integral_constant<
    bool,
    has_bounded_size<test1_msgs::srv::FindNorm_Request>::value &&
    has_bounded_size<test1_msgs::srv::FindNorm_Response>::value
  >
{
};

template<>
struct is_service<test1_msgs::srv::FindNorm>
  : std::true_type
{
};

template<>
struct is_service_request<test1_msgs::srv::FindNorm_Request>
  : std::true_type
{
};

template<>
struct is_service_response<test1_msgs::srv::FindNorm_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TEST1_MSGS__SRV__DETAIL__FIND_NORM__TRAITS_HPP_
