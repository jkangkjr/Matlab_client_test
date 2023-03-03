// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from test1_msgs:srv/FindNorm.idl
// generated code does not contain a copyright notice

#ifndef TEST1_MSGS__SRV__DETAIL__FIND_NORM__STRUCT_H_
#define TEST1_MSGS__SRV__DETAIL__FIND_NORM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'input'
#include "test1_msgs/msg/detail/test__struct.h"

// Struct defined in srv/FindNorm in the package test1_msgs.
typedef struct test1_msgs__srv__FindNorm_Request
{
  test1_msgs__msg__Test input;
} test1_msgs__srv__FindNorm_Request;

// Struct for a sequence of test1_msgs__srv__FindNorm_Request.
typedef struct test1_msgs__srv__FindNorm_Request__Sequence
{
  test1_msgs__srv__FindNorm_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test1_msgs__srv__FindNorm_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'norm'
// already included above
// #include "test1_msgs/msg/detail/test__struct.h"

// Struct defined in srv/FindNorm in the package test1_msgs.
typedef struct test1_msgs__srv__FindNorm_Response
{
  test1_msgs__msg__Test norm;
} test1_msgs__srv__FindNorm_Response;

// Struct for a sequence of test1_msgs__srv__FindNorm_Response.
typedef struct test1_msgs__srv__FindNorm_Response__Sequence
{
  test1_msgs__srv__FindNorm_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test1_msgs__srv__FindNorm_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST1_MSGS__SRV__DETAIL__FIND_NORM__STRUCT_H_
