#include "p860_lemonade_change.h"

#include "gtest/gtest.h"

namespace {

using namespace leetcode::p860_lemonade_change;

TEST(p860_lemonade_change, Example) {
  Solution s = Solution();
  std::vector<int> v1 = {5, 5, 5, 10, 20};
  EXPECT_TRUE(s.lemonadeChange(v1));
  std::vector<int> v2 = {5, 5, 10};
  EXPECT_TRUE(s.lemonadeChange(v2));
  std::vector<int> v3 = {10, 10};
  EXPECT_TRUE(!s.lemonadeChange(v3));
  std::vector<int> v4 = {5, 5, 10, 10, 20};
  EXPECT_TRUE(!s.lemonadeChange(v4));
}

}  // namespace
