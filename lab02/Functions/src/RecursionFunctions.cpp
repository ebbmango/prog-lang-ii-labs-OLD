#include <Functions/RecursionFunctions.h>

#include <cmath>
#include <iostream>

namespace recursionFunctions
{
/****************************************************************/
// // Exercise - gcd
/**
 *
 * @brief Define function "gcd". The greatest common divisor can be computed by Euclid's algorithm:
 *  gcd(a, 0) = a
 *  gcd(a, b) = gcd(b, a mod b)
 *  Write a function that computes gwd(), assuming the parameters and the result are of type unsigned int.
 *
 * @param a unsigned int -  first value
 * @param b unsigned int -  second value
 * @return unsigned int -  The greatest common divisor
 *
 */
unsigned int gcd(unsigned int a, unsigned int b) {
  if (b != 0)
       return gcd(b, a % b);
    else
       return a;
}
/*********************** place code above ***********************/
/****************************************************************/

/****************************************************************/
// // Exercise - power
/**
 *
 * @brief Define function "power".
 *  Function should calculate the power of any number using recursion.
 *  x^y
 * @param x unsigned int -  first value
 * @param y unsigned int -  second value
 * @return unsigned long -  x^y
 *
 */
unsigned long power(unsigned int x, unsigned int y) {
  if (y == 0)
  {
    return 1;
  }
  if (x == 0)
  {
    return 0;
  }
  return x * power(x, y - 1);
}
/*********************** place code above ***********************/
/****************************************************************/

/****************************************************************/
// // Exercise - Factorial
/**
 *
 * @brief Define function "findFactorial".
 *  find the Factorial of a number using recursion.
 *
 * @param x unsigned int - input number
 * @return unsigned long - Factorial of number x
 *
 */
unsigned long findFactorial(unsigned int x) {
  if (x == 1)
  {
    return 1;
  }
  else {
    return x * findFactorial(x - 1);
  }
}
/*********************** place code above ***********************/
/****************************************************************/

}  // namespace recursionFunctions
