#ifndef __P48_ROTATE_IMAGE_H__
#define __P48_ROTATE_IMAGE_H__

#include "header.h"

namespace leetcode {
namespace p48_rotate_image {

/*
 * @lc app=leetcode id=48 lang=cpp
 *
 * [48] Rotate Image
 *
 * https://leetcode.com/problems/rotate-image/description/
 *
 * algorithms
 * Medium (57.99%)
 * Likes:    3884
 * Dislikes: 282
 * Total Accepted:    485K
 * Total Submissions: 827.3K
 * Testcase Example:  '[[1,2,3],[4,5,6],[7,8,9]]'
 *
 * You are given an n x n 2D matrix representing an image, rotate the image by
 * 90 degrees (clockwise).
 *
 * You have to rotate the image in-place, which means you have to modify the
 * input 2D matrix directly. DO NOT allocate another 2D matrix and do the
 * rotation.
 *
 *
 * Example 1:
 *
 *
 * Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
 * Output: [[7,4,1],[8,5,2],[9,6,3]]
 *
 *
 * Example 2:
 *
 *
 * Input: matrix = [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]
 * Output: [[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]
 *
 *
 * Example 3:
 *
 *
 * Input: matrix = [[1]]
 * Output: [[1]]
 *
 *
 * Example 4:
 *
 *
 * Input: matrix = [[1,2],[3,4]]
 * Output: [[3,1],[4,2]]
 *
 *
 *
 * Constraints:
 *
 *
 * matrix.length == n
 * matrix[i].length == n
 * 1 <= n <= 20
 * -1000 <= matrix[i][j] <= 1000
 *
 *
 */

// @lc code=start
class Solution {
 public:
  void rotate(vector<vector<int>>& matrix) {
    if (matrix.size() < 2) {
      return;
    }
    // transpose matrix
    for (int i = 0; i < matrix.size(); i++) {
      for (int j = i + 1; j < matrix[i].size(); j++) {
        int tmp = matrix[i][j];
        matrix[i][j] = matrix[j][i];
        matrix[j][i] = tmp;
      }
    }
    // reverse each row
    for (int i = 0; i < matrix.size(); i++) {
      int l = 0;
      int r = matrix[i].size() - 1;
      while (l < r) {
        int tmp = matrix[i][l];
        matrix[i][l] = matrix[i][r];
        matrix[i][r] = tmp;
        l++;
        r--;
      }
    }
  }
};
// @lc code=end

}  // namespace p48_rotate_image
}  // namespace leetcode
#endif  // __P48_ROTATE_IMAGE_H__
