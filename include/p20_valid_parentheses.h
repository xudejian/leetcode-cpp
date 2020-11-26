#ifndef __P20_VALID_PARENTHESES_H__
#define __P20_VALID_PARENTHESES_H__

#include "header.h"

namespace leetcode {
namespace p20_valid_parentheses {

/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 *
 * https://leetcode.com/problems/valid-parentheses/description/
 *
 * algorithms
 * Easy (39.25%)
 * Likes:    5890
 * Dislikes: 244
 * Total Accepted:    1.2M
 * Total Submissions: 2.9M
 * Testcase Example:  '"()"'
 *
 * Given a string s containing just the characters '(', ')', '{', '}', '[' and
 * ']', determine if the input string is valid.
 *
 * An input string is valid if:
 *
 *
 * Open brackets must be closed by the same type of brackets.
 * Open brackets must be closed in the correct order.
 *
 *
 *
 * Example 1:
 *
 *
 * Input: s = "()"
 * Output: true
 *
 *
 * Example 2:
 *
 *
 * Input: s = "()[]{}"
 * Output: true
 *
 *
 * Example 3:
 *
 *
 * Input: s = "(]"
 * Output: false
 *
 *
 * Example 4:
 *
 *
 * Input: s = "([)]"
 * Output: false
 *
 *
 * Example 5:
 *
 *
 * Input: s = "{[]}"
 * Output: true
 *
 *
 *
 * Constraints:
 *
 *
 * 1 <= s.length <= 10^4
 * s consists of parentheses only '()[]{}'.
 *
 *
 */

// @lc code=start
class Solution {
 public:
  bool isValid(string s) {
    stack<char> parentheses;
    for (char &c : s) {
      bool push = false;
      char expect = '(';
      switch (c) {
        case ')':
          expect = '(';
          break;
        case ']':
          expect = '[';
          break;
        case '}':
          expect = '{';
          break;
        default:
          parentheses.push(c);
          push = true;
      }
      if (!push) {
        if (parentheses.empty()) {
          return false;
        }
        if (parentheses.top() != expect) {
          return false;
        }
        parentheses.pop();
      }
    }
    return parentheses.empty();
  }
};
// @lc code=end

}  // namespace p20_valid_parentheses
}  // namespace leetcode
#endif  // __P20_VALID_PARENTHESES_H__
