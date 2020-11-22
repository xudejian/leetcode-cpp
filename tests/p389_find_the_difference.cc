#include "p389_find_the_difference.h"

#include "gtest/gtest.h"

namespace {

using namespace leetcode::p389_find_the_difference;

TEST(p389_find_the_difference, Example1) {
  Solution s = Solution();
  EXPECT_EQ('e', s.findTheDifference("abcd", "abcde"));
}

TEST(p389_find_the_difference, Example2) {
  Solution s = Solution();
  EXPECT_EQ('y', s.findTheDifference("", "y"));
}

TEST(p389_find_the_difference, Example3) {
  Solution s = Solution();
  EXPECT_EQ('a', s.findTheDifference("a", "aa"));
}

TEST(p389_find_the_difference, Example4) {
  Solution s = Solution();
  EXPECT_EQ('a', s.findTheDifference("ae", "aea"));
}

TEST(p389_find_the_difference, case1) {
  Solution s = Solution();
  EXPECT_EQ('a', s.findTheDifference("abcde", "deabca"));
}

}  // namespace
