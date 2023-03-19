#pragma once

#include <string>
#include <array>
#include <utility>

namespace basics
{
/**
 * @brief return sum of all odd numbers in range from 0 do 50
 *
 */
int forExercise1();

/**
 * @brief Convert two list 'names', 'surnames' into one list of pairs <name, surname> and return this list
 *
 */
std::array<std::pair<std::string, std::string>, 2> forExercise2(std::array<std::string, 2> names,
                                                                std::array<std::string, 2> surnames);

/**
 * @brief Iterate over elements in a given 'numbers' array until the sum of elements does not exceed 100.
 * Return the number of required iterations.
 *
 */
int whileExercise1(std::array<int, 10> numbers);

}  // namespace basics
