#include <Basics/Loops.h>

namespace basics
{
//  Return sum of all odd numbers in range from 0 do 50
int forExercise1()
{
    // student code begin
    int sum = 0;
    for (int i = 0; i < 50; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    return sum;
    // student code end
}

//  Convert two list 'names', 'surnames' into one list of pairs <name, surname> and return this list
std::array<std::pair<std::string, std::string>, 2> forExercise2(std::array<std::string, 2> names,
                                                                std::array<std::string, 2> surnames)
{
    std::array<std::pair<std::string, std::string>, 2> out;
    // student code begin
    for (int i = 0; i < names.size(); i++)
    {
        out[i] = std::make_pair(names[i], surnames[i]);
    }

    return out;
    // student code end
}

//  Iterate over elements in a given 'numbers' array until the sum of elements does not exceed 100.
//  Return the number of required iterations.
int whileExercise1(std::array<int, 10> numbers)
{
    // student code begin
    int i = 0;
    int sum = 0;

    while (sum <= 100)
    {
        sum += numbers[i];
        i++;
    }
    return i;
    // student code end
}

}  // namespace basics
