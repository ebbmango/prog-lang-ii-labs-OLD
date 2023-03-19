#include <Basics/BaseTypes.h>

#include <iostream>

namespace basics
{
bool boolExercise1(bool a, bool b)
{
    // student code begin
    return a && b;
    // student code end
}

bool boolExercise2(bool a, bool b)
{
    // student code begin
    return a ^ b;
    // student code end
}

short shortExercise1(short arg)
{
    // student code begin
    return ++arg;
    // student code end
}

void intExercise1(int arg)
{
    // student code begin
    std::cout << arg;
    // student code end
}

bool intExercise2(int arg)
{
    // student code begin
    return arg >= 10;
    // student code end
}

unsigned int uintExercise1(unsigned int a, unsigned int b)
{
    // student code begin
    int sum = a + b;
    return sum;
    // student code end
}

unsigned int uintExercise2(unsigned int a, unsigned int b)
{
    // student code begin
    return a >= b ? b : a;
    // student code end
}

float floatExercise1(float a, float b)
{
    // student code begin
    return a * b;
    // student code end
}

float doubleExercise1(float a, float b)
{
    // student code begin
    a = a < 0 ? a * (-1) : a;
    b = b < 0 ? b * (-1) : b;
    return a >= b ? a : b;
    // student code end
}

}  // namespace basics
