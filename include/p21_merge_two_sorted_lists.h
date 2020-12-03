#ifndef __P21_MERGE_TWO_SORTED_LISTS_H__
#define __P21_MERGE_TWO_SORTED_LISTS_H__

#include "header.h"

namespace leetcode {
namespace p21_merge_two_sorted_lists {

/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
 *
 * https://leetcode.com/problems/merge-two-sorted-lists/description/
 *
 * algorithms
 * Easy (54.42%)
 * Likes:    5167
 * Dislikes: 647
 * Total Accepted:    1.2M
 * Total Submissions: 2.1M
 * Testcase Example:  '[1,2,4]\n[1,3,4]'
 *
 * Merge two sorted linked lists and return it as a new sorted list. The new
 * list should be made by splicing together the nodes of the first two
 * lists.
 *
 *
 * Example 1:
 *
 *
 * Input: l1 = [1,2,4], l2 = [1,3,4]
 * Output: [1,1,2,3,4,4]
 *
 *
 * Example 2:
 *
 *
 * Input: l1 = [], l2 = []
 * Output: []
 *
 *
 * Example 3:
 *
 *
 * Input: l1 = [], l2 = [0]
 * Output: [0]
 *
 *
 *
 * Constraints:
 *
 *
 * The number of nodes in both lists is in the range [0, 50].
 * -100 <= Node.val <= 100
 * Both l1 and l2 are sorted in non-decreasing order.
 *
 *
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
 public:
  ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    return mergeTwoListsRecursive(l1, l2);
  }

  ListNode* mergeTwoListsRecursive(ListNode* l1, ListNode* l2) {
    if (l1 == nullptr || l2 == nullptr) {
      if (l2 == nullptr) {
        return l1;
      }
      return l2;
    }
    if (l1 == l2) {
      return l1;
    }

    if (l1->val < l2->val) {
      l1->next = mergeTwoListsRecursive(l1->next, l2);
      return l1;
    }
    l2->next = mergeTwoListsRecursive(l1, l2->next);
    return l2;
  }

  ListNode* mergeTwoListsIter(ListNode* l1, ListNode* l2) {
    if (l1 == nullptr || l2 == nullptr) {
      if (l2 == nullptr) {
        return l1;
      }
      return l2;
    }
    if (l1 == l2) {
      return l1;
    }

    ListNode* head;

    if (l1->val < l2->val) {
      head = l1;
      l1 = l1->next;
    } else {
      head = l2;
      l2 = l2->next;
    }

    ListNode* cur = head;

    while (l1 != nullptr && l2 != nullptr) {
      if (l1->val < l2->val) {
        cur->next = l1;
        l1 = l1->next;
      } else {
        cur->next = l2;
        l2 = l2->next;
      }
      cur = cur->next;
    }
    cur->next = (l1 != nullptr) ? l1 : l2;
    return head;
  }
};
// @lc code=end

}  // namespace p21_merge_two_sorted_lists
}  // namespace leetcode
#endif  // __P21_MERGE_TWO_SORTED_LISTS_H__
