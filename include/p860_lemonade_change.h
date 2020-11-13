/*
 * @lc app=leetcode id=860 lang=cpp
 *
 * [860] Lemonade Change
 *
 * https://leetcode.com/problems/lemonade-change/description/
 *
 * algorithms
 * Easy (51.52%)
 * Likes:    714
 * Dislikes: 85
 * Total Accepted:    62K
 * Total Submissions: 119.4K
 * Testcase Example:  '[5,5,5,10,20]'
 *
 * At a lemonade stand, each lemonade costs $5. 
 *
 * Customers are standing in a queue to buy from you, and order one at a time
 * (in the order specified by bills).
 *
 * Each customer will only buy one lemonade and pay with either a $5, $10, or
 * $20 bill.  You must provide the correct change to each customer, so that the
 * net transaction is that the customer pays $5.
 *
 * Note that you don't have any change in hand at first.
 *
 * Return true if and only if you can provide every customer with correct
 * change.
 *
 *
 *
 *
 * Example 1:
 *
 *
 * Input: [5,5,5,10,20]
 * Output: true
 * Explanation:
 * From the first 3 customers, we collect three $5 bills in order.
 * From the fourth customer, we collect a $10 bill and give back a $5.
 * From the fifth customer, we give a $10 bill and a $5 bill.
 * Since all customers got correct change, we output true.
 *
 *
 *
 * Example 2:
 *
 *
 * Input: [5,5,10]
 * Output: true
 *
 *
 *
 * Example 3:
 *
 *
 * Input: [10,10]
 * Output: false
 *
 *
 *
 * Example 4:
 *
 *
 * Input: [5,5,10,10,20]
 * Output: false
 * Explanation:
 * From the first two customers in order, we collect two $5 bills.
 * For the next two customers in order, we collect a $10 bill and give back a
 * $5 bill.
 * For the last customer, we can't give change of $15 back because we only have
 * two $10 bills.
 * Since not every customer received correct change, the answer is false.
 *
 *
 *
 *
 * Note:
 *
 *
 * 0 <= bills.length <= 10000
 * bills[i] will be either 5, 10, or 20.
 *
 *
 *
 *
 *
 *
 */
#ifndef __P860_LEMONADE_CHANGE_H__
#define __P860_LEMONADE_CHANGE_H__

#include "header.h"

namespace leetcode {
namespace p860_lemonade_change {

// @lc code=start
class Solution {
 public:
  bool lemonadeChange(vector<int>& bills) {
    int change[3] = {};
    for (auto& n : bills) {
      change[n / 10]++;
      for (int i = n / 10; i-- > 0;) {
        change[i]--;
      }
      if (change[1] < 0) {
        change[1]++;
        change[0] -= 2;
      }
      if (change[0] < 0) {
        return false;
      }
    }
    return true;
  }
};
// @lc code=end

}  // namespace p860_lemonade_change
}  // namespace leetcode
#endif  // __P860_LEMONADE_CHANGE_H__
