#include "p7_reverse_integer.h"

#include "gtest/gtest.h"

namespace {

using namespace leetcode::p7_reverse_integer;

TEST(reverse_integer, Example1) {
    Solution s = Solution();
    EXPECT_EQ(s.reverse(123), 321);
}
TEST(reverse_integer, Example2) {
    Solution s = Solution();
    EXPECT_EQ(s.reverse(-123), -321);
}
TEST(reverse_integer, Example3) {
    Solution s = Solution();
    EXPECT_EQ(s.reverse(120), 21);
}
TEST(reverse_integer, Example4) {
    Solution s = Solution();
    EXPECT_EQ(s.reverse(0), 0);
}

}  // namespace