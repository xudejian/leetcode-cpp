#include "p2_add_two_numbers.h"

#include "gtest/gtest.h"

namespace {

using namespace leetcode::p2_add_two_numbers;

ListNode* vec2list(vector<int> ints) {
    ListNode head = ListNode();
    ListNode* cur = &head;
    for (auto& v : ints) {
        ListNode* node = new ListNode(v);
        cur->next = node;
        cur = node;
    }
    return head.next;
}

bool ListEq(ListNode* a, ListNode* b) {
    while (a != b) {
        if (a == NULL || b == NULL || a->val != b->val) {
            return false;
        }
        a = a->next;
        b = b->next;
    }
    return true;
}

/*
 *
 * Example 1:
 *
 *
 * Input: l1 = [2,4,3], l2 = [5,6,4]
 * Output: [7,0,8]
 * Explanation: 342 + 465 = 807.
 */
TEST(addTwoNumbers, Example1) {
    Solution s = Solution();
    ListNode* got = s.addTwoNumbers(vec2list({2, 4, 3}), vec2list({5, 6, 4}));
    EXPECT_TRUE(got != NULL);
    EXPECT_EQ(7, got->val);
    ListNode* next = got->next;
    EXPECT_TRUE(next != NULL);
    EXPECT_EQ(0, next->val);
    next = next->next;
    EXPECT_TRUE(next != NULL);
    EXPECT_EQ(8, next->val);
    next = next->next;
    EXPECT_TRUE(next == NULL);
}

/*
 *
 * Example 2:
 *
 *
 * Input: l1 = [0], l2 = [0]
 * Output: [0]
 */
TEST(addTwoNumbers, Example2) {
    Solution s = Solution();
    ListNode* got = s.addTwoNumbers(vec2list({0}), vec2list({0}));
    EXPECT_TRUE(NULL != got);
    EXPECT_EQ(0, got->val);
    EXPECT_TRUE(NULL == got->next);
}

/*
 *
 * Example 3:
 *
 *
 * Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
 * Output: [8,9,9,9,0,0,0,1]
 */
TEST(addTwoNumbers, Example3) {
    Solution s = Solution();
    ListNode* got = s.addTwoNumbers(vec2list({9, 9, 9, 9, 9, 9, 9}),
                                    vec2list({9, 9, 9, 9}));
    EXPECT_TRUE(ListEq(vec2list({8, 9, 9, 9, 0, 0, 0, 1}), got));
}

}  // namespace