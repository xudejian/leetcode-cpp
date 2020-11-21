#include "p1523_count_odd_numbers_in_an_interval_range.h"

#include "gtest/gtest.h"

namespace {

using namespace leetcode::p1523_count_odd_numbers_in_an_interval_range;

TEST(p1523_count_odd_numbers_in_an_interval_range, Example1) {
  Solution s = Solution();
  EXPECT_EQ(3, s.countOdds(3, 7));
}

TEST(p1523_count_odd_numbers_in_an_interval_range, Example2) {
  Solution s = Solution();
  EXPECT_EQ(1, s.countOdds(8, 10));
}

TEST(p1523_count_odd_numbers_in_an_interval_range, Example3) {
  Solution s = Solution();
  EXPECT_EQ(0, s.countOdds(0, 0));
  EXPECT_EQ(1, s.countOdds(0, 1));
  EXPECT_EQ(2, s.countOdds(0, 3));
  EXPECT_EQ(2, s.countOdds(0, 4));
  EXPECT_EQ(3, s.countOdds(0, 5));
}

}  // namespace
