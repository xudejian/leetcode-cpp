#include "p20_valid_parentheses.h"

#include "gtest/gtest.h"

namespace {

using namespace leetcode::p20_valid_parentheses;

TEST(p20_valid_parentheses, Example1) {
  Solution s = Solution();
  EXPECT_TRUE(s.isValid("()"));
  EXPECT_TRUE(s.isValid("()[]{}"));
  EXPECT_FALSE(s.isValid("(]"));
  EXPECT_FALSE(s.isValid("([)]"));
  EXPECT_TRUE(s.isValid("{[]}"));
}

}  // namespace
