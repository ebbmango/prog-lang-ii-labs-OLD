#include <Functions/ReferenceFunctions.h>

#include <algorithm>
#include <cmath>
#include <iostream>

#include <cctype>
#include <string>

namespace referenceFunctions
{
/****************************************************************/
// // Exercise - toLowerCase
/**
 * @brief Define function "toLowerCase". Function should convert provided string to lowerCase inplace using reference.
 * @param str std::string - string to convert
 * @return none
 */
void toLowerCase(std::string &str) {
  for (auto &chr : str) {
      chr = char(std::tolower(chr));
    }
}
/*********************** place code above ***********************/
/****************************************************************/

/****************************************************************/
// // Exercise - Swap
/**
 * @brief Define function "swap". Function should swap Values of Two arguments Variables.
 * @param a int - first value
 * @param b int - second value
 * @return none
 */

void swap(int &a, int &b) {
  a = a - b;
  b = b + a;
  a = b - a;
}
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
int increment(int const &a){
    return a+1;
}
/*********************** place code above ***********************/
/****************************************************************/

/****************************************************************/
// // Exercise - sortVector
/**
 * @brief Declare function "sortVector".
 * Function should sort in ascending order argument vector.
 * @param values std::vector<int> - values
 * @return none
 */
void sortVector(std::vector<int> &values) {
  sort(values.begin(), values.end());
}

/*********************** place code above ***********************/
/****************************************************************/
}  // namespace referenceFunctions
