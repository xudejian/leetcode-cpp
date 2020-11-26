#include "p167_two_sum_ii_input_array_is_sorted.h"

#include "gtest/gtest.h"

namespace {

using namespace leetcode::p167_two_sum_ii_input_array_is_sorted;

TEST(p167_two_sum_ii_input_array_is_sorted, Example1) {
  Solution s = Solution();
  vector<int> numbers = {2, 7, 11, 15};
  vector<int> expect = {1, 2};
  EXPECT_EQ(expect, s.twoSum(numbers, 9));

  vector<int> numbers2 = {2, 3, 4};
  vector<int> expect2 = {1, 3};
  EXPECT_EQ(expect2, s.twoSum(numbers2, 6));

  vector<int> numbers3 = {-1, 0};
  vector<int> expect3 = {1, 2};
  EXPECT_EQ(expect3, s.twoSum(numbers3, -1));
}

}  // namespace
