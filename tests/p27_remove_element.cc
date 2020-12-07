#include "p27_remove_element.h"

#include "gtest/gtest.h"

namespace {

using namespace leetcode::p27_remove_element;

TEST(p27_remove_element, Example1) {
  Solution s = Solution();
  vector<int> nums = {3, 2, 2, 3};
  vector<int> expect = {2, 2};
  EXPECT_EQ(2, s.removeElement(nums, 3));
  nums.resize(2);
  EXPECT_EQ(expect, nums);
}

TEST(p27_remove_element, Example2) {
  Solution s = Solution();
  vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
  vector<int> expect = {0, 1, 4, 0, 3};
  EXPECT_EQ(5, s.removeElement(nums, 2));
  nums.resize(5);
  EXPECT_EQ(expect, nums);
}

TEST(p27_remove_element, Case1) {
  Solution s = Solution();
  vector<int> nums = {0, 0, 0, 0};
  EXPECT_EQ(0, s.removeElement(nums, 0));
}

TEST(p27_remove_element, Case2) {
  Solution s = Solution();
  vector<int> nums = {0, 1, 0, 0};
  EXPECT_EQ(1, s.removeElement(nums, 0));
}

}  // namespace
