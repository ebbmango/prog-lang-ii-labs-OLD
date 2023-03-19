#pragma once

#include <iostream>
#include <vector>

namespace referenceFunctions
{
/****************************************************************/
// // Exercise - toLowerCase
/**
 * @brief Define function "toLowerCase".
 * Function should convert provided string to lowerCase inplace using reference.
 *
 * @param str std::string - string to convert
 * @return none
 */
void toLowerCase(std::string &str);
/*********************** place code above ***********************/
/****************************************************************/

/****************************************************************/
// // Exercise - Swap
/**
 * @brief Declare function "swap". Function should swap Values of Two arguments Variables.
 * @param a int -  first value
 * @param b int -  second value
 * @return none
 */
void swap(int &a, int &b);
/*********************** place code above ***********************/
/****************************************************************/

/****************************************************************/
// // Exercise - increment
/**
 * @brief Declare function "increment".
 * Function should return incremented argument.
 * Argument should be reference.
 * Argument should be const.
 * @param a int -   value
 * @return int incremented argument
 */

/*********************** place code above ***********************/
/****************************************************************/
int increment(int const &a);
/****************************************************************/
// // Exercise - sortVector
/**
 * @brief Declare function "sortVector".
 * Function should sort in ascending order argument vector.
 * @param values std::vector<int> - values
 * @return none
 */
void sortVector(std::vector<int> &values);
/*********************** place code above ***********************/
/****************************************************************/

}  // namespace referenceFunctions
