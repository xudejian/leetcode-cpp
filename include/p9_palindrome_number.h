/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 *
 * https://leetcode.com/problems/palindrome-number/description/
 *
 * algorithms
 * Easy (48.93%)
 * Likes:    2668
 * Dislikes: 1629
 * Total Accepted:    1M
 * Total Submissions: 2.1M
 * Testcase Example:  '121'
 *
 * Determine whether an integer is a palindrome. An integer is a palindrome
 * when it reads the same backward as forward.
 *
 * Follow up: Could you solve it without converting the integer to a string?
 *
 *
 * Example 1:
 *
 *
 * Input: x = 121
 * Output: true
 *
 *
 * Example 2:
 *
 *
 * Input: x = -121
 * Output: false
 * Explanation: From left to right, it reads -121. From right to left, it
 * becomes 121-. Therefore it is not a palindrome.
 *
 *
 * Example 3:
 *
 *
 * Input: x = 10
 * Output: false
 * Explanation: Reads 01 from right to left. Therefore it is not a
 * palindrome.
 *
 *
 * Example 4:
 *
 *
 * Input: x = -101
 * Output: false
 *
 *
 *
 * Constraints:
 *
 *
 * -2^31 <= x <= 2^31 - 1
 *
 *
 */

#ifndef __P9_PALINDROME_NUMBER_H__
#define __P9_PALINDROME_NUMBER_H__

#include "header.h"

namespace leetcode {
namespace p9_palindrome_number {

// @lc code=start
class Solution {
   public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        int y = 0;
        while (x > y) {
            y = y * 10 + x % 10;
            x /= 10;
        }
        return x == y || y / 10 == x;
    }
};
// @lc code=end

}  // namespace p9_palindrome_number
}  // namespace leetcode
#endif  // !__P9_PALINDROME_NUMBER_H__