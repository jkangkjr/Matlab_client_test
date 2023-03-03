// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from test1_msgs:srv/FindNorm.idl
// generated code does not contain a copyright notice
#include "test1_msgs/srv/detail/find_norm__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `input`
#include "test1_msgs/msg/detail/test__functions.h"

bool
test1_msgs__srv__FindNorm_Request__init(test1_msgs__srv__FindNorm_Request * msg)
{
  if (!msg) {
    return false;
  }
  // input
  if (!test1_msgs__msg__Test__init(&msg->input)) {
    test1_msgs__srv__FindNorm_Request__fini(msg);
    return false;
  }
  return true;
}

void
test1_msgs__srv__FindNorm_Request__fini(test1_msgs__srv__FindNorm_Request * msg)
{
  if (!msg) {
    return;
  }
  // input
  test1_msgs__msg__Test__fini(&msg->input);
}

bool
test1_msgs__srv__FindNorm_Request__are_equal(const test1_msgs__srv__FindNorm_Request * lhs, const test1_msgs__srv__FindNorm_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // input
  if (!test1_msgs__msg__Test__are_equal(
      &(lhs->input), &(rhs->input)))
  {
    return false;
  }
  return true;
}

bool
test1_msgs__srv__FindNorm_Request__copy(
  const test1_msgs__srv__FindNorm_Request * input,
  test1_msgs__srv__FindNorm_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // input
  if (!test1_msgs__msg__Test__copy(
      &(input->input), &(output->input)))
  {
    return false;
  }
  return true;
}

test1_msgs__srv__FindNorm_Request *
test1_msgs__srv__FindNorm_Request__create()
{
  test1_msgs__srv__FindNorm_Request * msg = (test1_msgs__srv__FindNorm_Request *)malloc(sizeof(test1_msgs__srv__FindNorm_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(test1_msgs__srv__FindNorm_Request));
  bool success = test1_msgs__srv__FindNorm_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
test1_msgs__srv__FindNorm_Request__destroy(test1_msgs__srv__FindNorm_Request * msg)
{
  if (msg) {
    test1_msgs__srv__FindNorm_Request__fini(msg);
  }
  free(msg);
}


bool
test1_msgs__srv__FindNorm_Request__Sequence__init(test1_msgs__srv__FindNorm_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  test1_msgs__srv__FindNorm_Request * data = NULL;
  if (size) {
    data = (test1_msgs__srv__FindNorm_Request *)calloc(size, sizeof(test1_msgs__srv__FindNorm_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = test1_msgs__srv__FindNorm_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        test1_msgs__srv__FindNorm_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
test1_msgs__srv__FindNorm_Request__Sequence__fini(test1_msgs__srv__FindNorm_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      test1_msgs__srv__FindNorm_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

test1_msgs__srv__FindNorm_Request__Sequence *
test1_msgs__srv__FindNorm_Request__Sequence__create(size_t size)
{
  test1_msgs__srv__FindNorm_Request__Sequence * array = (test1_msgs__srv__FindNorm_Request__Sequence *)malloc(sizeof(test1_msgs__srv__FindNorm_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = test1_msgs__srv__FindNorm_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
test1_msgs__srv__FindNorm_Request__Sequence__destroy(test1_msgs__srv__FindNorm_Request__Sequence * array)
{
  if (array) {
    test1_msgs__srv__FindNorm_Request__Sequence__fini(array);
  }
  free(array);
}

bool
test1_msgs__srv__FindNorm_Request__Sequence__are_equal(const test1_msgs__srv__FindNorm_Request__Sequence * lhs, const test1_msgs__srv__FindNorm_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!test1_msgs__srv__FindNorm_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
test1_msgs__srv__FindNorm_Request__Sequence__copy(
  const test1_msgs__srv__FindNorm_Request__Sequence * input,
  test1_msgs__srv__FindNorm_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(test1_msgs__srv__FindNorm_Request);
    test1_msgs__srv__FindNorm_Request * data =
      (test1_msgs__srv__FindNorm_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!test1_msgs__srv__FindNorm_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          test1_msgs__srv__FindNorm_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!test1_msgs__srv__FindNorm_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `norm`
// already included above
// #include "test1_msgs/msg/detail/test__functions.h"

bool
test1_msgs__srv__FindNorm_Response__init(test1_msgs__srv__FindNorm_Response * msg)
{
  if (!msg) {
    return false;
  }
  // norm
  if (!test1_msgs__msg__Test__init(&msg->norm)) {
    test1_msgs__srv__FindNorm_Response__fini(msg);
    return false;
  }
  return true;
}

void
test1_msgs__srv__FindNorm_Response__fini(test1_msgs__srv__FindNorm_Response * msg)
{
  if (!msg) {
    return;
  }
  // norm
  test1_msgs__msg__Test__fini(&msg->norm);
}

bool
test1_msgs__srv__FindNorm_Response__are_equal(const test1_msgs__srv__FindNorm_Response * lhs, const test1_msgs__srv__FindNorm_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // norm
  if (!test1_msgs__msg__Test__are_equal(
      &(lhs->norm), &(rhs->norm)))
  {
    return false;
  }
  return true;
}

bool
test1_msgs__srv__FindNorm_Response__copy(
  const test1_msgs__srv__FindNorm_Response * input,
  test1_msgs__srv__FindNorm_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // norm
  if (!test1_msgs__msg__Test__copy(
      &(input->norm), &(output->norm)))
  {
    return false;
  }
  return true;
}

test1_msgs__srv__FindNorm_Response *
test1_msgs__srv__FindNorm_Response__create()
{
  test1_msgs__srv__FindNorm_Response * msg = (test1_msgs__srv__FindNorm_Response *)malloc(sizeof(test1_msgs__srv__FindNorm_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(test1_msgs__srv__FindNorm_Response));
  bool success = test1_msgs__srv__FindNorm_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
test1_msgs__srv__FindNorm_Response__destroy(test1_msgs__srv__FindNorm_Response * msg)
{
  if (msg) {
    test1_msgs__srv__FindNorm_Response__fini(msg);
  }
  free(msg);
}


bool
test1_msgs__srv__FindNorm_Response__Sequence__init(test1_msgs__srv__FindNorm_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  test1_msgs__srv__FindNorm_Response * data = NULL;
  if (size) {
    data = (test1_msgs__srv__FindNorm_Response *)calloc(size, sizeof(test1_msgs__srv__FindNorm_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = test1_msgs__srv__FindNorm_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        test1_msgs__srv__FindNorm_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
test1_msgs__srv__FindNorm_Response__Sequence__fini(test1_msgs__srv__FindNorm_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      test1_msgs__srv__FindNorm_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

test1_msgs__srv__FindNorm_Response__Sequence *
test1_msgs__srv__FindNorm_Response__Sequence__create(size_t size)
{
  test1_msgs__srv__FindNorm_Response__Sequence * array = (test1_msgs__srv__FindNorm_Response__Sequence *)malloc(sizeof(test1_msgs__srv__FindNorm_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = test1_msgs__srv__FindNorm_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
test1_msgs__srv__FindNorm_Response__Sequence__destroy(test1_msgs__srv__FindNorm_Response__Sequence * array)
{
  if (array) {
    test1_msgs__srv__FindNorm_Response__Sequence__fini(array);
  }
  free(array);
}

bool
test1_msgs__srv__FindNorm_Response__Sequence__are_equal(const test1_msgs__srv__FindNorm_Response__Sequence * lhs, const test1_msgs__srv__FindNorm_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!test1_msgs__srv__FindNorm_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
test1_msgs__srv__FindNorm_Response__Sequence__copy(
  const test1_msgs__srv__FindNorm_Response__Sequence * input,
  test1_msgs__srv__FindNorm_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(test1_msgs__srv__FindNorm_Response);
    test1_msgs__srv__FindNorm_Response * data =
      (test1_msgs__srv__FindNorm_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!test1_msgs__srv__FindNorm_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          test1_msgs__srv__FindNorm_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!test1_msgs__srv__FindNorm_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
