#include <Functions/OverloadFunctions.h>

#include <cmath>
#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>

namespace overloadFunctions
{
/****************************************************************/
// // Exercise - addOverload
/**
 * @brief Declare functions family "add".
 * Functions should add two or three numbers of type int.
 * @param a  input a
 * @param b  input a
 * @param c  input a
 * @return none
 */
int add(int a, int b) {
  return a + b;
}
int add(int a, int b, int c) {
  return a + b + c;
}
/*********************** place code above ***********************/
/****************************************************************/

/****************************************************************/
// // Exercise - roundOverload
/**
 * @brief Define multiple functions "round".
 * Functions should round argument values and print rounded value on console.
 * Order of magnitude of rounding should be depend on argument type.
 * For argument of type double the order of magnitude of rounding should be 10^2.
 * For argument of type float the order of magnitude of rounding should be 10^3.
 * For argument of type int the order of magnitude of rounding should be 10^4.
 * @param value  input value
 * @return none
 */
void round(double value){
    std::cout << static_cast<int>( value) % static_cast<int>(pow(10, static_cast<int>(log10(static_cast<int>( value)) - 1))) * static_cast<int>(pow(10,2));
}
void round(float value){
    std::cout << static_cast<int>( value) % static_cast<int>(pow(10, static_cast<int>(log10(static_cast<int>( value)) - 2))) * static_cast<int>(pow(10,3));
}
void round(int value){
    std::cout << value % static_cast<int>(pow(10, static_cast<int>(log10(value) - 3))) * static_cast<int>(pow(10,4));
}
/*********************** place code above ***********************/
/****************************************************************/
/****************************************************************/
// // Exercise - precisionPrint
/**
 * @brief Define multiple functions "precisionPrint".
 * Functions should print on console floating type numbers with precision depending on argument type.
 * For argument of type float precision should be 2 decimal places.
 * For argument of type double precision should be 4 decimal places.
 * For argument of type long double precision should be 6 decimal places.
 * @param value  input value
 * @return none
 */
void precisionPrint(float value) {
    std::cout << std::fixed << std::setprecision(2) << value;
}
void precisionPrint(double value){
    std::cout << std::fixed << std::setprecision(4) <<  value;
}
void precisionPrint(long double value){
    std::cout << std::fixed << std::setprecision(6) <<  value;
}
/*********************** place code above ***********************/
/****************************************************************/

/****************************************************************/
// // Exercise - polynomialPrint
/**
 * @brief Declare functions family "polynomialPrint".
 * Functions should print on console the polynomial formula. "f(x) = n0*x^0+n1*x^0+n2*x^0"
 * For argument should be floats.
 * Function should have one, two or three arguments.
 * @param n0 multiplier on 0 power of x
 * @param n1 multiplier on 1 power of x
 * @param n2 multiplier on 2 power of x
 * @return none
 */
void polynomialPrint(float n0) {
  std::cout << "f(x) = ";
  precisionPrint(n0);
}
void polynomialPrint(float n0, float n1) {
  std::cout << "f(x) = ";
  precisionPrint(n0);
  std::cout << " + ";
  precisionPrint(n1);
  std::cout << "*x^1";
}
void polynomialPrint(float n0, float n1, float n2) {
  std::cout << "f(x) = " << std::fixed << std::setprecision(1) << n0 << " + " << std::fixed << std::setprecision(3) << n1 << "*x^1 + " << std::fixed << std::setprecision(2) << n2 << "*x^2";
}
/*********************** place code above ***********************/
/****************************************************************/

}  // namespace overloadFunctions
