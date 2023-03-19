#include <Basics/FlowControl.h>

#include <iostream>

namespace basics
{
void ifExercise1(int arg)
{
    // student code begin
    if (arg > 100)
    {
        std::cout << arg;
    }
    // student code end
}

// Return true if 'arg' is greated than 100, false otherwise
bool ifElseExercise1(int arg)
{
    // student code begin
    if (arg > 100)
    {
        return true;
    }
    else
    {
        return false;
    }
    // student code end
}

// Return -1 if 'arg' value is negative, return 0 if 'arg' value is equal to 0 and return 1 if 'arg' value is positive
int ifElseIfElseExercise1(int arg)
{
    // student code begin
    if (arg < 0)
    {
        return -1;
    }
    else if (arg == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
    // student code end
}

/*
    Implement simple calculator using switch ... case statement
    Arithmetic operators to support: *, +, -, /
    Return the result of the equation with the specified arithmetic operator
    When the operator is not supported, the 0.0 value should be returned.
*/

float switchCaseExercise1(float a, char arithmetic_operator, float b)
{
    // student code begin
    switch (arithmetic_operator)
    {
    case '+':
        return a + b;
        break;

    case '-':
        return a - b;
        break;

    case '*':
        return a * b;
        break;

    case '/':
        return a / b;
        break;

    default:
        b = 0;
        return b;
        break;
    }
    // student code end
}

// Return -1 if 'arg' value is odd, and 1 if value is even. Use ternary operator.
int terneryOperatorExercise1(unsigned int arg)
{
    // student code begin
    return arg % 2 == 0 ? 1 : -1;
    // student code end
}

}  // namespace basics
