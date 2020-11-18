#include "p518_coin_change_2.h"

#include "gtest/gtest.h"

namespace {

using namespace leetcode::p518_coin_change_2;

TEST(p518_coin_change_2, Example1) {
  Solution s = Solution();

  vector<int> coins1 = {1, 2, 5};
  EXPECT_EQ(4, s.change(5, coins1));

  vector<int> coins2 = {2};
  EXPECT_EQ(0, s.change(3, coins2));

  vector<int> coins3 = {10};
  EXPECT_EQ(1, s.change(10, coins3));
}

TEST(p518_coin_change_2, TLE1) {
  Solution s = Solution();

  vector<int> coins = {3, 5, 7, 8, 9, 10, 11};
  EXPECT_EQ(35502874, s.change(500, coins));
}

}  // namespace
