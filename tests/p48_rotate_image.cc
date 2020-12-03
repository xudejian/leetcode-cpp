#include "p48_rotate_image.h"

#include "gtest/gtest.h"

namespace {

using namespace leetcode::p48_rotate_image;

TEST(p48_rotate_image, Example1) {
  Solution s = Solution();
  vector<vector<int>> matrix = {vector<int>{1, 2, 3}, vector<int>{4, 5, 6},
                                vector<int>{7, 8, 9}};
  s.rotate(matrix);
  vector<vector<int>> expect = {vector<int>{7, 4, 1}, vector<int>{8, 5, 2},
                                vector<int>{9, 6, 3}};
  EXPECT_EQ(expect, matrix);
}

TEST(p48_rotate_image, Example2) {
  Solution s = Solution();
  vector<vector<int>> matrix = {
      vector<int>{5, 1, 9, 11}, vector<int>{2, 4, 8, 10},
      vector<int>{13, 3, 6, 7}, vector<int>{15, 14, 12, 16}};
  s.rotate(matrix);
  vector<vector<int>> expect = {
      vector<int>{15, 13, 2, 5}, vector<int>{14, 3, 4, 1},
      vector<int>{12, 6, 8, 9}, vector<int>{16, 7, 10, 11}};
  EXPECT_EQ(expect, matrix);
}

TEST(p48_rotate_image, Example3) {
  Solution s = Solution();
  vector<vector<int>> matrix = {vector<int>{1}};
  s.rotate(matrix);
  vector<vector<int>> expect = {vector<int>{1}};
  EXPECT_EQ(expect, matrix);
}

TEST(p48_rotate_image, Example4) {
  Solution s = Solution();
  vector<vector<int>> matrix = {vector<int>{1, 2}, vector<int>{3, 4}};
  s.rotate(matrix);
  vector<vector<int>> expect = {vector<int>{3, 1}, vector<int>{4, 2}};
  EXPECT_EQ(expect, matrix);
}

}  // namespace
