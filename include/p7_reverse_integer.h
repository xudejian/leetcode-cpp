/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 *
 * https://leetcode.com/problems/reverse-integer/description/
 *
 * algorithms
 * Easy (25.82%)
 * Likes:    3844
 * Dislikes: 5991
 * Total Accepted:    1.3M
 * Total Submissions: 4.9M
 * Testcase Example:  '123'
 *
 * Given a 32-bit signed integer, reverse digits of an integer.
 *
 * Note:
 * Assume we are dealing with an environment that could only store integers
 * within the 32-bit signed integer range: [−2^31,  2^31 − 1]. For the purpose
 * of this problem, assume that your function returns 0 when the reversed
 * integer overflows.
 *
 *
 * Example 1:
 * Input: x = 123
 * Output: 321
 * Example 2:
 * Input: x = -123
 * Output: -321
 * Example 3:
 * Input: x = 120
 * Output: 21
 * Example 4:
 * Input: x = 0
 * Output: 0
 *
 *
 * Constraints:
 *
 *
 * -2^31 <= x <= 2^31 - 1
 *
 *
 */

#ifndef __P7_REVERSE_INTEGER_H__
#define __P7_REVERSE_INTEGER_H__

#include "header.h"

namespace leetcode {
namespace p7_reverse_integer {

// @lc code=start
class Solution {
   public:
    int reverse(int x) {
        long long int y = 0;
        while (x != 0) {
            y = y * 10 + x % 10;
            x /= 10;
        }
        //[−2^31,  2^31 − 1]
        if (y < -(1l << 31) || y > (1l << 31) - 1) {
            return 0;
        }
        return (int)y;
    }
};
// @lc code=end

}  // namespace p7_reverse_integer
}  // namespace leetcode

#endif /* __P7_REVERSE_INTEGER_H__ */