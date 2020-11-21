#include "p629_k_inverse_pairs_array.h"

#include "gtest/gtest.h"

namespace {

using namespace leetcode::p629_k_inverse_pairs_array;

TEST(p629_k_inverse_pairs_array, Example1) {
  Solution s = Solution();
  EXPECT_EQ(1, s.kInversePairs(3, 0));
  EXPECT_EQ(2, s.kInversePairs(3, 1));
  EXPECT_EQ(2, s.kInversePairs(3, 2));
  EXPECT_EQ(1, s.kInversePairs(3, 3));
}

TEST(p629_k_inverse_pairs_array, Case4) {
  Solution s = Solution();
  EXPECT_EQ(1, s.kInversePairs(4, 0));
  EXPECT_EQ(3, s.kInversePairs(4, 1));
  EXPECT_EQ(4, s.kInversePairs(4, 2));
  EXPECT_EQ(6, s.kInversePairs(4, 3));
  EXPECT_EQ(3, s.kInversePairs(4, 4));
  EXPECT_EQ(3, s.kInversePairs(4, 5));
  EXPECT_EQ(1, s.kInversePairs(4, 6));
}

TEST(p629_k_inverse_pairs_array, Case5) {
  Solution s = Solution();
  EXPECT_EQ(1, s.kInversePairs(5, 0));
  EXPECT_EQ(4, s.kInversePairs(5, 1));
  EXPECT_EQ(6, s.kInversePairs(5, 2));
  EXPECT_EQ(11, s.kInversePairs(5, 3));
  EXPECT_EQ(14, s.kInversePairs(5, 4));
  EXPECT_EQ(12, s.kInversePairs(5, 5));
  EXPECT_EQ(15, s.kInversePairs(5, 6));
  EXPECT_EQ(11, s.kInversePairs(5, 7));
  EXPECT_EQ(8, s.kInversePairs(5, 8));
  EXPECT_EQ(2, s.kInversePairs(5, 9));
  EXPECT_EQ(1, s.kInversePairs(5, 10));
}

TEST(p629_k_inverse_pairs_array, DISABLED_TLE) {
  Solution s = Solution();
  EXPECT_EQ(1, s.kInversePairs(1000, 0));
  EXPECT_EQ(1, s.kInversePairs(1000, 499500));
  s.kInversePairs(1000, 1000);
}

}  // namespace
