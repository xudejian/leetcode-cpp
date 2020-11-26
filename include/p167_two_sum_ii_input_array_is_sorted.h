#ifndef __P167_TWO_SUM_II_INPUT_ARRAY_IS_SORTED_H__
#define __P167_TWO_SUM_II_INPUT_ARRAY_IS_SORTED_H__

#include "header.h"

namespace leetcode {
namespace p167_two_sum_ii_input_array_is_sorted {

/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input array is sorted
 *
 * https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/
 *
 * algorithms
 * Easy (54.72%)
 * Likes:    2022
 * Dislikes: 656
 * Total Accepted:    472.9K
 * Total Submissions: 861.5K
 * Testcase Example:  '[2,7,11,15]\n9'
 *
 * Given an array of integers that is already sorted in ascending order, find
 * two numbers such that they add up to a specific target number.
 *
 * The function twoSum should return indices of the two numbers such that they
 * add up to the target, where index1 must be less than index2.
 *
 * Note:
 *
 *
 * Your returned answers (both index1 and index2) are not zero-based.
 * You may assume that each input would have exactly one solution and you may
 * not use the same element twice.
 *
 *
 *
 * Example 1:
 *
 *
 * Input: numbers = [2,7,11,15], target = 9
 * Output: [1,2]
 * Explanation: The sum of 2 and 7 is 9. Therefore index1 = 1, index2 = 2.
 *
 *
 * Example 2:
 *
 *
 * Input: numbers = [2,3,4], target = 6
 * Output: [1,3]
 *
 *
 * Example 3:
 *
 *
 * Input: numbers = [-1,0], target = -1
 * Output: [1,2]
 *
 *
 *
 * Constraints:
 *
 *
 * 2 <= nums.length <= 3 * 10^4
 * -1000 <= nums[i] <= 1000
 * nums is sorted in increasing order.
 * -1000 <= target <= 1000
 *
 *
 */

// @lc code=start
class Solution {
 public:
  vector<int> twoSum(vector<int>& numbers, int target) {
    unordered_map<int, int> nums;
    for (int i = 0; i < numbers.size(); i++) {
      int n = numbers[i];
      if (nums.find(n) != nums.end()) {
        return {nums[n], i + 1};
      }
      nums[target - n] = i + 1;
    }
    return {-1, -1};
  }
};
// @lc code=end

}  // namespace p167_two_sum_ii_input_array_is_sorted
}  // namespace leetcode
#endif  // __P167_TWO_SUM_II_INPUT_ARRAY_IS_SORTED_H__
