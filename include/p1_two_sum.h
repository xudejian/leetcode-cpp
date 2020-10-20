/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 *
 * https://leetcode.com/problems/two-sum/description/
 *
 * algorithms
 * Easy (45.90%)
 * Likes:    17346
 * Dislikes: 620
 * Total Accepted:    3.4M
 * Total Submissions: 7.4M
 * Testcase Example:  '[2,7,11,15]\n9'
 *
 * Given an array of integers nums and an integer target, return indices of the
 * two numbers such that they add up to target.
 *
 * You may assume that each input would have exactly one solution, and you may
 * not use the same element twice.
 *
 * You can return the answer in any order.
 *
 *
 * Example 1:
 *
 *
 * Input: nums = [2,7,11,15], target = 9
 * Output: [0,1]
 * Output: Because nums[0] + nums[1] == 9, we return [0, 1].
 *
 *
 * Example 2:
 *
 *
 * Input: nums = [3,2,4], target = 6
 * Output: [1,2]
 *
 *
 * Example 3:
 *
 *
 * Input: nums = [3,3], target = 6
 * Output: [0,1]
 *
 *
 *
 * Constraints:
 *
 *
 * 2 <= nums.length <= 10^5
 * -10^9 <= nums[i] <= 10^9
 * -10^9 <= target <= 10^9
 * Only one valid answer exists.
 *
 *
 */
#include "header.h"

#ifndef __P1_TWO_SUM_H__
#define __P1_TWO_SUM_H__

namespace leetcode {
namespace p1_two_sum {

// @lc code=start
class Solution {
   public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> wants;
        for (int i = 0; i < nums.size(); i++) {
            if (wants.find(nums[i]) != wants.end()) {
                return {wants[nums[i]], i};
            }
            wants[target - nums[i]] = i;
        }
        return {};
    }
};
// @lc code=end

}  // namespace p1_two_sum
}  // namespace leetcode

#endif  // !__P1_TWO_SUM_H__