#pragma once

#include <iostream>

namespace recursionFunctions
{
/****************************************************************/
// // Exercise - gcd
/**
 *
 * @brief Declare function "gcd".
 *  The greatest common divisor can be computed by Euclid's algorithm:
 *  gcd(a, 0) = a
 *  gcd(a, b) = gcd(b, a mod b)
 *  Write a function that computes gwd(), assuming the parameters and the result are of type unsigned int.
 *
 * @param a unsigned int -  first value
 * @param b unsigned int -  second value
 * @return unsigned int -  The greatest common divisor
 *
 */
unsigned int gcd(unsigned int a, unsigned int b);
/*********************** place code above ***********************/
/****************************************************************/

/****************************************************************/
// // Exercise - power
/**
 *
 * @brief Declare function "power".
 *  Function should calculate the power of any number using recursion.
 *  x^y
 * @param x unsigned int -  first value
 * @param y unsigned int -  second value
 * @return unsigned long -  x^y
 *
 */
unsigned long power(unsigned int x, unsigned int y);
/*********************** place code above ***********************/
/****************************************************************/

/****************************************************************/
// // Exercise - Factorial
/**
 *
 * @brief Declare function "findFactorial".
 *  find the Factorial of a number using recursion.
 *
 * @param n unsigned int - input number
 * @return unsigned long - Factorial of number n
 *
 */
unsigned long findFactorial(unsigned int x);
/*********************** place code above ***********************/
/****************************************************************/

}  // namespace recursionFunctions
