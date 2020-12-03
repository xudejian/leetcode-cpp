#ifndef __P14_LONGEST_COMMON_PREFIX_H__
#define __P14_LONGEST_COMMON_PREFIX_H__

#include "header.h"

namespace leetcode {
namespace p14_longest_common_prefix {

/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 *
 * https://leetcode.com/problems/longest-common-prefix/description/
 *
 * algorithms
 * Easy (35.69%)
 * Likes:    3150
 * Dislikes: 1998
 * Total Accepted:    849.3K
 * Total Submissions: 2.4M
 * Testcase Example:  '["flower","flow","flight"]'
 *
 * Write a function to find the longest common prefix string amongst an array
 * of strings.
 *
 * If there is no common prefix, return an empty string "".
 *
 *
 * Example 1:
 *
 *
 * Input: strs = ["flower","flow","flight"]
 * Output: "fl"
 *
 *
 * Example 2:
 *
 *
 * Input: strs = ["dog","racecar","car"]
 * Output: ""
 * Explanation: There is no common prefix among the input strings.
 *
 *
 *
 * Constraints:
 *
 *
 * 0 <= strs.length <= 200
 * 0 <= strs[i].length <= 200
 * strs[i] consists of only lower-case English letters.
 *
 *
 */

// @lc code=start
class Solution {
 public:
  string longestCommonPrefix(vector<string>& strs) {
    switch (strs.size()) {
      case 0:
        return "";
      case 1:
        return strs[0];
      default:
        break;
    }
    int i = 0;
    for (char& c : strs[0]) {
      for (int j = 1; j < strs.size(); j++) {
        if (strs[j][i] != c) {
          return strs[0].substr(0, i);
        }
      }
      i++;
    }
    return strs[0].substr(0, i);
  }
};
// @lc code=end

}  // namespace p14_longest_common_prefix
}  // namespace leetcode
#endif  // __P14_LONGEST_COMMON_PREFIX_H__
