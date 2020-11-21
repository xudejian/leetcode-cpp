#ifndef __P1523_COUNT_ODD_NUMBERS_IN_AN_INTERVAL_RANGE_H__
#define __P1523_COUNT_ODD_NUMBERS_IN_AN_INTERVAL_RANGE_H__

#include "header.h"

namespace leetcode {
namespace p1523_count_odd_numbers_in_an_interval_range {

/*
 * @lc app=leetcode id=1523 lang=cpp
 *
 * [1523] Count Odd Numbers in an Interval Range
 *
 * https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/description/
 *
 * algorithms
 * Easy (55.50%)
 * Likes:    150
 * Dislikes: 16
 * Total Accepted:    16.8K
 * Total Submissions: 30.4K
 * Testcase Example:  '3\n7'
 *
 * Given two non-negative integers low and high. Return the count of odd
 * numbers between low and high (inclusive).
 *
 *
 * Example 1:
 *
 *
 * Input: low = 3, high = 7
 * Output: 3
 * Explanation: The odd numbers between 3 and 7 are [3,5,7].
 *
 * Example 2:
 *
 *
 * Input: low = 8, high = 10
 * Output: 1
 * Explanation: The odd numbers between 8 and 10 are [9].
 *
 *
 * Constraints:
 *
 *
 * 0 <= low <= high <= 10^9
 *
 */

// @lc code=start
class Solution {
 public:
  int countOdds(int low, int high) {
    int l = low;
    if (high == 0) {
      return 0;
    }
    if (l == 0) {
      l = 1;
    } else if ((l & 1) == 0) {
      l--;
    }
    int count = (high - l) / 2;
    if ((low & 1) == 1 || low == 0) {
      count++;
    }
    return count;
  }
};
// @lc code=end

}  // namespace p1523_count_odd_numbers_in_an_interval_range
}  // namespace leetcode
#endif  // __P1523_COUNT_ODD_NUMBERS_IN_AN_INTERVAL_RANGE_H__
