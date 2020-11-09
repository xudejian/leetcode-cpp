#include "p9_palindrome_number.h"

#include "gtest/gtest.h"

namespace {

using namespace leetcode::p9_palindrome_number;

TEST(p9_palindrome_number, Example) {
    Solution s = Solution();
    EXPECT_TRUE(s.isPalindrome(121));
    EXPECT_TRUE(!s.isPalindrome(-121));
    EXPECT_TRUE(!s.isPalindrome(10));
    EXPECT_TRUE(!s.isPalindrome(-101));

    EXPECT_TRUE(s.isPalindrome(0));
    EXPECT_TRUE(s.isPalindrome(12321));
    EXPECT_TRUE(s.isPalindrome(1221));
    EXPECT_TRUE(s.isPalindrome(1));
}

}  // namespace