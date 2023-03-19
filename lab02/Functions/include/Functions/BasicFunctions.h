#pragma once

#include <iostream>

namespace basics
{
/****************************************************************/
// // Exercise - convert2Ascii
/**
 * @brief Declare function "convert2Ascii". Function should convert character into unsigned int value in ascii code.
 * https://www.asciitable.com/
 * @param character char -  character to convert
 * @return unsigned int - character ascii code
 *
 */
unsigned int convert2Ascii(char c);

/*********************** place code above ***********************/
/****************************************************************/

/****************************************************************/
// // Exercise - HexPrint
/**
 * @brief Declare function "hexPrint". Function should print string in ascii hex dump form (ascii hex values of character with
 * space between each value ).
 * @param inputString std::string -  first value
 * @return none
 */
void hexPrint(std::string str);

/*********************** place code above ***********************/
/****************************************************************/

/****************************************************************/
// // Exercise - defaultValues
/**
 * @brief Declare function "defaultValues".
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
void defaultValues(std::string arg0, std::string arg1 = "empty row number 1", std::string arg2 = "empty row number 2", std::string arg3 = "empty row number 3");

/*********************** place code above ***********************/
/****************************************************************/

/****************************************************************/
// // Exercise - min
/**
 * @brief Declare template function "min".
 * Function should returns the smaller of two float.
 * @param a input value
 * @param b input value
 * @return smaller from two inputs
 */
float min(float a, float b);

/*********************** place code above ***********************/
/****************************************************************/

}  // namespace basicsx
