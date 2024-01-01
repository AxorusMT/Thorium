#pragma once

#include <cstdint>
#include <array>
#include <vector>
#include <string>
#include <iostream>
#include <chrono>
#include <format>
#include <concepts>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <cassert>
#include <limits>
#include <source_location>
#include <string_view>
#include <iomanip>

// Ensure types are the right size
static_assert(sizeof(char) == 1);
static_assert(sizeof(short) == 2);
static_assert(sizeof(int) == 4);
static_assert(sizeof(long) == 8);
static_assert(sizeof(float) == 4);
static_assert(sizeof(double) == 8);

namespace Thorium {
    namespace Core {
        namespace Types {        
            constexpr unsigned char unsignedCharMin = std::numeric_limits<unsigned char>::min();
            constexpr unsigned short unsignedShortMin = std::numeric_limits<unsigned short>::min();
            constexpr unsigned int unsignedIntMin = std::numeric_limits<unsigned int>::min();
            constexpr unsigned long unsignedLongMin = std::numeric_limits<unsigned long>::min();

            constexpr signed char signedCharMin = std::numeric_limits<signed char>::min();
            constexpr signed short signedShortMin = std::numeric_limits<signed short>::min();
            constexpr signed int signedIntMin = std::numeric_limits<signed int>::min();
            constexpr signed long signedLongMin = std::numeric_limits<signed long>::min();

            constexpr unsigned char unsignedCharMax = std::numeric_limits<unsigned char>::max();
            constexpr unsigned short unsignedShortMax = std::numeric_limits<unsigned short>::max();
            constexpr unsigned int unsignedIntMax = std::numeric_limits<unsigned int>::max();
            constexpr unsigned long unsignedLongMax = std::numeric_limits<unsigned long>::max();

            constexpr signed char signedCharMax = std::numeric_limits<signed char>::max();
            constexpr signed short signedShortMax = std::numeric_limits<signed short>::max();
            constexpr signed int signedIntMax = std::numeric_limits<signed int>::max();
            constexpr signed long signedLongMax = std::numeric_limits<signed long>::max();

            void printTypeInfo();
        }
    }
}
