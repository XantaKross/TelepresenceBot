// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from custom_interface:msg/Act.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE__MSG__DETAIL__ACT__FUNCTIONS_H_
#define CUSTOM_INTERFACE__MSG__DETAIL__ACT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "custom_interface/msg/rosidl_generator_c__visibility_control.h"

#include "custom_interface/msg/detail/act__struct.h"

/// Initialize msg/Act message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * custom_interface__msg__Act
 * )) before or use
 * custom_interface__msg__Act__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interface
bool
custom_interface__msg__Act__init(custom_interface__msg__Act * msg);

/// Finalize msg/Act message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interface
void
custom_interface__msg__Act__fini(custom_interface__msg__Act * msg);

/// Create msg/Act message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * custom_interface__msg__Act__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interface
custom_interface__msg__Act *
custom_interface__msg__Act__create();

/// Destroy msg/Act message.
/**
 * It calls
 * custom_interface__msg__Act__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interface
void
custom_interface__msg__Act__destroy(custom_interface__msg__Act * msg);

/// Check for msg/Act message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interface
bool
custom_interface__msg__Act__are_equal(const custom_interface__msg__Act * lhs, const custom_interface__msg__Act * rhs);

/// Copy a msg/Act message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interface
bool
custom_interface__msg__Act__copy(
  const custom_interface__msg__Act * input,
  custom_interface__msg__Act * output);

/// Initialize array of msg/Act messages.
/**
 * It allocates the memory for the number of elements and calls
 * custom_interface__msg__Act__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interface
bool
custom_interface__msg__Act__Sequence__init(custom_interface__msg__Act__Sequence * array, size_t size);

/// Finalize array of msg/Act messages.
/**
 * It calls
 * custom_interface__msg__Act__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interface
void
custom_interface__msg__Act__Sequence__fini(custom_interface__msg__Act__Sequence * array);

/// Create array of msg/Act messages.
/**
 * It allocates the memory for the array and calls
 * custom_interface__msg__Act__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interface
custom_interface__msg__Act__Sequence *
custom_interface__msg__Act__Sequence__create(size_t size);

/// Destroy array of msg/Act messages.
/**
 * It calls
 * custom_interface__msg__Act__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interface
void
custom_interface__msg__Act__Sequence__destroy(custom_interface__msg__Act__Sequence * array);

/// Check for msg/Act message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interface
bool
custom_interface__msg__Act__Sequence__are_equal(const custom_interface__msg__Act__Sequence * lhs, const custom_interface__msg__Act__Sequence * rhs);

/// Copy an array of msg/Act messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interface
bool
custom_interface__msg__Act__Sequence__copy(
  const custom_interface__msg__Act__Sequence * input,
  custom_interface__msg__Act__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACE__MSG__DETAIL__ACT__FUNCTIONS_H_
