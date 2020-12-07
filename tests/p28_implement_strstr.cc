#include "p28_implement_strstr.h"

#include "gtest/gtest.h"

namespace {

using namespace leetcode::p28_implement_strstr;

TEST(p28_implement_strstr, Example1) {
  Solution s = Solution();
  EXPECT_EQ(2, s.strStr("hello", "ll"));
}

TEST(p28_implement_strstr, Example2) {
  Solution s = Solution();
  EXPECT_EQ(-1, s.strStr("aaaaa", "bba"));
}

TEST(p28_implement_strstr, Example3) {
  Solution s = Solution();
  EXPECT_EQ(0, s.strStr("", ""));
}

}  // namespace
