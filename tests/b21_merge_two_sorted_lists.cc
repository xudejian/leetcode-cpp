#include "benchmark/benchmark.h"
#include "p21_merge_two_sorted_lists.h"

namespace {

using namespace leetcode::p21_merge_two_sorted_lists;

static void mergeTwoListsRecursive(benchmark::State &state) {
  Solution s = Solution();
  int arr_l1[] = {1, 2, 4};
  int arr_l2[] = {1, 3, 4};
  int arr_expect[] = {1, 1, 2, 3, 4, 4};
  for (auto _ : state) {
    ListNode *l1 = new ListNode(_ARRAY(arr_l1));
    ListNode *l2 = new ListNode(_ARRAY(arr_l2));
    ListNode expect = ListNode(_ARRAY(arr_expect));
    ListNode *got = s.mergeTwoListsRecursive(l1, l2);
    bool b = expect == *got;
  }
}

static void mergeTwoListsIter(benchmark::State &state) {
  Solution s = Solution();
  int arr_l1[] = {1, 2, 4};
  int arr_l2[] = {1, 3, 4};
  int arr_expect[] = {1, 1, 2, 3, 4, 4};
  for (auto _ : state) {
    ListNode *l1 = new ListNode(_ARRAY(arr_l1));
    ListNode *l2 = new ListNode(_ARRAY(arr_l2));
    ListNode expect = ListNode(_ARRAY(arr_expect));
    ListNode *got = s.mergeTwoListsIter(l1, l2);
    bool b = expect == *got;
  }
}

// Register the function as a benchmark
BENCHMARK(mergeTwoListsRecursive);
BENCHMARK(mergeTwoListsIter);

}  // namespace
