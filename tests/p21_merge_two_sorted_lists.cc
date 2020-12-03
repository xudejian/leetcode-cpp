#include "p21_merge_two_sorted_lists.h"

#include "gtest/gtest.h"

namespace {

using namespace leetcode::p21_merge_two_sorted_lists;

TEST(p21_merge_two_sorted_lists, Example1) {
  Solution s = Solution();
  int arr_l1[] = {1, 2, 4};
  int arr_l2[] = {1, 3, 4};
  int arr_expect[] = {1, 1, 2, 3, 4, 4};
  ListNode *l1 = new ListNode(_ARRAY(arr_l1));
  ListNode *l2 = new ListNode(_ARRAY(arr_l2));
  ListNode expect = ListNode(_ARRAY(arr_expect));
  ListNode *got = s.mergeTwoLists(l1, l2);
  EXPECT_NE(nullptr, got);
  EXPECT_EQ(expect, *got);
}

TEST(p21_merge_two_sorted_lists, Example2) {
  Solution s = Solution();
  ListNode *l1 = nullptr;
  ListNode *l2 = nullptr;
  ListNode *expect = nullptr;
  EXPECT_EQ(expect, s.mergeTwoLists(l1, l2));
}

TEST(p21_merge_two_sorted_lists, Example3) {
  Solution s = Solution();
  int arr_l2[] = {0};
  int arr_expect[] = {0};
  ListNode *l1 = nullptr;
  ListNode *l2 = new ListNode(_ARRAY(arr_l2));
  ListNode expect = ListNode(_ARRAY(arr_expect));
  ListNode *got = s.mergeTwoLists(l1, l2);
  EXPECT_EQ(expect, *got);
}

}  // namespace
