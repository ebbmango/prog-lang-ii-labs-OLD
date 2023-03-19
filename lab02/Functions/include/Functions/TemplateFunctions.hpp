#pragma once

#include <iostream>

namespace templateFunctions
{
/****************************************************************/
// // Exercise - templateMax
/**
 * @brief Declare template function "max".
 * Function should returns the greater of two variables of the same type (max function).
 * @param a input value
 * @param b input value
 * @return greater from two inputs
 */
template <typename tType>
tType max(tType a, tType b) {
  return a > b ? a : b;
}
/*********************** place code above ***********************/
/****************************************************************/

/****************************************************************/
// // Exercise - templateSortVector
/**
 * @brief Declare template function "templateSortVector".
 * Function should sort in ascending order argument vector.
 * @param values std::vector<T> - values
 * @return none
 */
template <typename T>
void templateSortVector(std::vector<T> &values) {
  sort(values.begin(), values.end());
}
/*********************** place code above ***********************/
/****************************************************************/

}  // namespace templateFunctions
