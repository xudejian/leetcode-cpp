#ifndef __P629_K_INVERSE_PAIRS_ARRAY_H__
#define __P629_K_INVERSE_PAIRS_ARRAY_H__

#include "header.h"

namespace leetcode {
namespace p629_k_inverse_pairs_array {

/*
 * @lc app=leetcode id=629 lang=cpp
 *
 * [629] K Inverse Pairs Array
 *
 * https://leetcode.com/problems/k-inverse-pairs-array/description/
 *
 * algorithms
 * Hard (31.32%)
 * Likes:    354
 * Dislikes: 76
 * Total Accepted:    12K
 * Total Submissions: 38.1K
 * Testcase Example:  '3\n0'
 *
 * Given two integers n and k, find how many different arrays consist of
 * numbers from 1 to n such that there are exactly k inverse pairs.
 *
 * We define an inverse pair as following: For ith and jth element in the
 * array, if i < j and a[i] > a[j] then it's an inverse pair; Otherwise, it's
 * not.
 *
 * Since the answer may be very large, the answer should be modulo 10^9 + 7.
 *
 * Example 1:
 *
 *
 * Input: n = 3, k = 0
 * Output: 1
 * Explanation:
 * Only the array [1,2,3] which consists of numbers from 1 to 3 has exactly 0
 * inverse pair.
 *
 *
 *
 *
 * Example 2:
 *
 *
 * Input: n = 3, k = 1
 * Output: 2
 * Explanation:
 * The array [1,3,2] and [2,1,3] have exactly 1 inverse pair.
 *
 *
 *
 *
 * Note:
 *
 *
 * The integer n is in the range [1, 1000] and k is in the range [0, 1000].
 *
 *
 *
 *
 */

// @lc code=start
class Solution {
 public:
  // TODO DP
  int kInversePairs(int n, int k) {
    int max = 0;
    const int M = 1e9 + 7;
    vector<int> nums;
    for (int i = 0; i < n; i++) {
      nums.push_back(i);
      max += i;
    }
    if (k > max) {
      return 0;
    }
    if (k == max || k == 0) {
      return 1;
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
      count += dfs(nums, i, n, k);
    }
    return count % M;
  }

 private:
  int dfs(vector<int>& nums, int start, int n, int k) {
    int count = 0;
    const int M = 1e9 + 7;
    int b = nums[start];
    for (int i = start + 1; i < n; i++) {
      int a = nums[i];
      nums[i] = b;
      nums[start] = a;

      int c = 0;
      for (int j = 0; j < n; j++) {
        for (int l = j + 1; l < n; l++) {
          if (nums[j] > nums[l]) {
            c++;
          }
        }
      }
      if (k == c) {
        count++;
      }

      count += dfs(nums, start + 1, n, k);
      nums[i] = a;
      nums[start] = b;
    }
    return count % M;
  }
};
// @lc code=end

}  // namespace p629_k_inverse_pairs_array
}  // namespace leetcode
#endif  // __P629_K_INVERSE_PAIRS_ARRAY_H__
