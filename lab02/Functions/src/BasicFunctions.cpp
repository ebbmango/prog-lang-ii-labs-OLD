#include <Functions/BasicFunctions.h>

#include <cmath>
#include <iostream>

namespace basics
{
/****************************************************************/
// // Exercise - convert2Ascii
/**
 * @brief Declare function "convert2Ascii". Function should convert character into unsigned int value in ascii code.
 * https://www.asciitable.com/
 *
 * @param character char -  character to convert
 * @return unsigned int - character ascii code
 *
 */

  unsigned int convert2Ascii(char c) {
    return static_cast<unsigned int> ( c);
  }

/*********************** place code above ***********************/
/****************************************************************/

/****************************************************************/
// // Exercise - HexPrint
/**
 * @brief Define function "hexPrint". Function should print string in ascii hex dump form (ascii hex values of character with
 * space between each value ).
 *
 * @param inputString std::string -  first value
 * @return none
 */

  void hexPrint(std::string str) {
    for (auto &chr : str) {
      std::cout << std::hex << static_cast<int> ( chr);
      std::cout << ' ';
    }
  }

/*********************** place code above ***********************/
/****************************************************************/

/****************************************************************/
// // Exercise - defaultValues
/**
 * @brief Define function "defaultValues".
 * Function should print argument values on console.
 * Function should have 4 arguments of std::string type.
 * 3 arguments of this function should have default values "empty row number #" where "#" is number of argument.
 * Each value should be printed in separate row.
 * @param arg0 std::string
 * @param arg1 std::string
 * @param arg2 std::string
 * @param arg3 std::string
 * @return none
 */
void defaultValues(std::string arg0, std::string arg1, std::string arg2, std::string arg3) {
  std::cout << arg0 << std::endl;
  std::cout << arg1 << std::endl;
  std::cout << arg2 << std::endl;
  std::cout << arg3 << std::endl;
}

/*********************** place code above ***********************/
/****************************************************************/

/****************************************************************/
// // Exercise - min
/**
 * @brief Define template function "min".
 * Function should returns the smaller of two float.
 * @param a input value
 * @param b input value
 * @return smaller from two inputs
 */
float min(float a, float b) {
  return a >= b ? b : a;
}

/*********************** place code above ***********************/
/****************************************************************/

}  // namespace basics
