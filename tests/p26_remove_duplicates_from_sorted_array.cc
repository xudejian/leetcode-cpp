#include "p26_remove_duplicates_from_sorted_array.h"

#include "gtest/gtest.h"

namespace {

using namespace leetcode::p26_remove_duplicates_from_sorted_array;

TEST(p26_remove_duplicates_from_sorted_array, Example1) {
  Solution s = Solution();
  vector<int> nums = {1, 1, 2};
  vector<int> expect = {1, 2};
  EXPECT_EQ(2, s.removeDuplicates(nums));
  nums.resize(2);
  EXPECT_EQ(expect, nums);
}

TEST(p26_remove_duplicates_from_sorted_array, Example2) {
  Solution s = Solution();
  vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
  vector<int> expect = {0, 1, 2, 3, 4};
  EXPECT_EQ(5, s.removeDuplicates(nums));
  nums.resize(5);
  EXPECT_EQ(expect, nums);
}

TEST(p26_remove_duplicates_from_sorted_array, Case1) {
  Solution s = Solution();
  vector<int> nums = {0};
  vector<int> expect = {0};
  EXPECT_EQ(1, s.removeDuplicates(nums));
  nums.resize(1);
  EXPECT_EQ(expect, nums);
}

TEST(p26_remove_duplicates_from_sorted_array, Case2) {
  Solution s = Solution();
  vector<int> nums;
  vector<int> expect;
  EXPECT_EQ(0, s.removeDuplicates(nums));
  EXPECT_EQ(expect, nums);
}
}  // namespace
