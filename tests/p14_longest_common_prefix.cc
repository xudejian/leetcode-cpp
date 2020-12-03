#include "p14_longest_common_prefix.h"

#include "gtest/gtest.h"

namespace {

using namespace leetcode::p14_longest_common_prefix;

TEST(p14_longest_common_prefix, Example1) {
  Solution s = Solution();
  vector<string> str = {"flower", "flow", "flight"};
  EXPECT_EQ("fl", s.longestCommonPrefix(str));
}

TEST(p14_longest_common_prefix, Example2) {
  Solution s = Solution();
  vector<string> str = {"dog", "racecar", "car"};
  EXPECT_EQ("", s.longestCommonPrefix(str));
}

TEST(p14_longest_common_prefix, Case1) {
  Solution s = Solution();
  vector<string> str = {"car1", "car2", "car3"};
  EXPECT_EQ("car", s.longestCommonPrefix(str));
}

TEST(p14_longest_common_prefix, Case2) {
  Solution s = Solution();
  vector<string> str = {"ab", "a"};
  EXPECT_EQ("a", s.longestCommonPrefix(str));
}
}  // namespace
