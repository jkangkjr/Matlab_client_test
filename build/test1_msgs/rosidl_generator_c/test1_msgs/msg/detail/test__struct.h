// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from test1_msgs:msg/Test.idl
// generated code does not contain a copyright notice

#ifndef TEST1_MSGS__MSG__DETAIL__TEST__STRUCT_H_
#define TEST1_MSGS__MSG__DETAIL__TEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Test in the package test1_msgs.
typedef struct test1_msgs__msg__Test
{
  double num;
} test1_msgs__msg__Test;

// Struct for a sequence of test1_msgs__msg__Test.
typedef struct test1_msgs__msg__Test__Sequence
{
  test1_msgs__msg__Test * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test1_msgs__msg__Test__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST1_MSGS__MSG__DETAIL__TEST__STRUCT_H_
