#ifndef __LEETCODE_HEADER_H__
#define __LEETCODE_HEADER_H__

// c++ stl libraries
#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

// c libraries
#include <cctype>
#include <climits>
#include <cmath>
#include <cstring>

using namespace std;

#define _ARRAY(arr) arr, sizeof(arr) / sizeof(arr[0])

typedef struct ListNode ListNode;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
  ListNode(int *x, int len) {
    val = 0;
    next = NULL;
    if (len > 0) {
      val = *x;
    }
    if (len > 1) {
      next = new ListNode(x + 1, len - 1);
    }
  }

  bool operator==(const ListNode &rhs) const {
    const ListNode *prhs = dynamic_cast<const ListNode *>(&rhs);
    if (this == prhs) {
      return true;
    }
    if (prhs == nullptr) {
      return false;
    }
    return (this->val == rhs.val && *this->next == *rhs.next);
  }
};

#endif  // !__LEETCODE_HEADER_H__
