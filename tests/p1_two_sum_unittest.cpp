#include "p1_two_sum.h"

#include "gtest/gtest.h"

namespace {

using namespace leetcode::p1_two_sum;

TEST(TwoSum, Example1) {
    Solution s = Solution();
    vector<int> nums = {2, 7, 11, 15};
    vector<int> exam1 = s.twoSum(nums, 9);
    EXPECT_EQ(2, exam1.size());
    EXPECT_EQ(0, exam1[0]);
    EXPECT_EQ(1, exam1[1]);
}

/*
 * Input: nums = [3,2,4], target = 6
 * Output: [1,2]
 */
TEST(TwoSum, Example2) {
    Solution s = Solution();
    vector<int> nums = {3, 2, 4};
    vector<int> exam1 = s.twoSum(nums, 6);
    EXPECT_EQ(2, exam1.size());
    EXPECT_EQ(1, exam1[0]);
    EXPECT_EQ(2, exam1[1]);
}

/*
 * Input: nums = [3,3], target = 6
 * Output: [0,1]
 */
TEST(TwoSum, Example3) {
    Solution s = Solution();
    vector<int> nums = {3, 3};
    vector<int> exam1 = s.twoSum(nums, 6);
    EXPECT_EQ(2, exam1.size());
    EXPECT_EQ(0, exam1[0]);
    EXPECT_EQ(1, exam1[1]);
}

}  // namespace