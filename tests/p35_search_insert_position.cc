#include "p35_search_insert_position.h"

#include "gtest/gtest.h"

namespace {

using namespace leetcode::p35_search_insert_position;

TEST(p35_search_insert_position, Example1) {
  Solution s = Solution();
  vector<int> nums = {1, 3, 5, 6};
  EXPECT_EQ(2, s.searchInsert(nums, 5));
}

TEST(p35_search_insert_position, Example2) {
  Solution s = Solution();
  vector<int> nums = {1, 3, 5, 6};
  EXPECT_EQ(1, s.searchInsert(nums, 2));
}

TEST(p35_search_insert_position, Example3) {
  Solution s = Solution();
  vector<int> nums = {1, 3, 5, 6};
  EXPECT_EQ(4, s.searchInsert(nums, 7));
}

TEST(p35_search_insert_position, Example4) {
  Solution s = Solution();
  vector<int> nums = {1, 3, 5, 6};
  EXPECT_EQ(0, s.searchInsert(nums, 0));
}

TEST(p35_search_insert_position, Example5) {
  Solution s = Solution();
  vector<int> nums = {1};
  EXPECT_EQ(0, s.searchInsert(nums, 0));
}

}  // namespace
