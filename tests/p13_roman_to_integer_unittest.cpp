#include "p13_roman_to_integer.h"

#include "gtest/gtest.h"

namespace {

using namespace leetcode::p13_roman_to_integer;

TEST(p13_roman_to_integer, Example) {
    Solution s = Solution();
    EXPECT_EQ(3, s.romanToInt(string("III")));
    EXPECT_EQ(4, s.romanToInt(string("IV")));
    EXPECT_EQ(9, s.romanToInt(string("IX")));
    EXPECT_EQ(58, s.romanToInt(string("LVIII")));
    EXPECT_EQ(1994, s.romanToInt(string("MCMXCIV")));
}

}  // namespace