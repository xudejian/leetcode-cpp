#ifndef __P28_IMPLEMENT_STRSTR_H__
#define __P28_IMPLEMENT_STRSTR_H__

#include "header.h"

namespace leetcode {
namespace p28_implement_strstr {

/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Implement strStr()
 *
 * https://leetcode.com/problems/implement-strstr/description/
 *
 * algorithms
 * Easy (34.74%)
 * Likes:    1894
 * Dislikes: 2085
 * Total Accepted:    749.2K
 * Total Submissions: 2.2M
 * Testcase Example:  '"hello"\n"ll"'
 *
 * Implement strStr().
 *
 * Return the index of the first occurrence of needle in haystack, or -1 if
 * needle is not part of haystack.
 *
 * Clarification:
 *
 * What should we return when needle is an empty string? This is a great
 * question to ask during an interview.
 *
 * For the purpose of this problem, we will return 0 when needle is an empty
 * string. This is consistent to C's strstr() and Java's indexOf().
 *
 *
 * Example 1:
 * Input: haystack = "hello", needle = "ll"
 * Output: 2
 * Example 2:
 * Input: haystack = "aaaaa", needle = "bba"
 * Output: -1
 * Example 3:
 * Input: haystack = "", needle = ""
 * Output: 0
 *
 *
 * Constraints:
 *
 *
 * 0 <= haystack.length, needle.length <= 5 * 10^4
 * haystack and needle consist of only lower-case English characters.
 *
 *
 */

// @lc code=start
class Solution {
 public:
  int strStr(string haystack, string needle) {
    int hl = haystack.length();
    int nl = needle.length();
    if (nl == 0) {
      return 0;
    }

    for (int i = 0; i < hl; i++) {
      int j = 0;
      for (; j < nl; j++) {
        if (haystack[i + j] != needle[j]) {
          break;
        }
      }
      if (j == nl) {
        return i;
      }
    }
    return -1;
  }
};
// @lc code=end

}  // namespace p28_implement_strstr
}  // namespace leetcode
#endif  // __P28_IMPLEMENT_STRSTR_H__
