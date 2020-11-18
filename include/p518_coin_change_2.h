#ifndef __P518_COIN_CHANGE_2_H__
#define __P518_COIN_CHANGE_2_H__

#include "header.h"

namespace leetcode {
namespace p518_coin_change_2 {

/*
 * @lc app=leetcode id=518 lang=cpp
 *
 * [518] Coin Change 2
 *
 * https://leetcode.com/problems/coin-change-2/description/
 *
 * algorithms
 * Medium (50.72%)
 * Likes:    2490
 * Dislikes: 69
 * Total Accepted:    158.8K
 * Total Submissions: 311.5K
 * Testcase Example:  '5\n[1,2,5]'
 *
 * You are given coins of different denominations and a total amount of money.
 * Write a function to compute the number of combinations that make up that
 * amount. You may assume that you have infinite number of each kind of
 * coin.
 *
 *
 *
 *
 *
 *
 * Example 1:
 *
 *
 * Input: amount = 5, coins = [1, 2, 5]
 * Output: 4
 * Explanation: there are four ways to make up the amount:
 * 5=5
 * 5=2+2+1
 * 5=2+1+1+1
 * 5=1+1+1+1+1
 *
 *
 * Example 2:
 *
 *
 * Input: amount = 3, coins = [2]
 * Output: 0
 * Explanation: the amount of 3 cannot be made up just with coins of 2.
 *
 *
 * Example 3:
 *
 *
 * Input: amount = 10, coins = [10]
 * Output: 1
 *
 *
 *
 *
 * Note:
 *
 * You can assume that
 *
 *
 * 0 <= amount <= 5000
 * 1 <= coin <= 5000
 * the number of coins is less than 500
 * the answer is guaranteed to fit into signed 32-bit integer
 *
 *
 */

// @lc code=start
class Solution {
 public:
  int change(int amount, vector<int>& coins) {
    vector<int> dp(amount + 1, 0);
    dp[0] = 1;
    for (auto& n : coins) {
      for (int i = n; i < amount + 1; i++) {
        dp[i] += dp[i - n];
      }
    }
    return dp[amount];
  }

 private:
  int dfs(int amount, vector<int>& coins, int start) {
    int sum = 0;
    for (int i = start; i < coins.size(); i++) {
      if (amount == coins[i]) {
        sum++;
      } else if (amount > coins[i]) {
        sum += dfs(amount - coins[i], coins, i);
      }
    }
    return sum;
  }
};
// @lc code=end

}  // namespace p518_coin_change_2
}  // namespace leetcode
#endif  // __P518_COIN_CHANGE_2_H__
