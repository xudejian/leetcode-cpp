#include <stddef.h>
#include <stdint.h>

#include "helper.h"
#include "p7_reverse_integer.h"

using namespace leetcode::p7_reverse_integer;

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
    // __builtin_trap();
    Solution s = Solution();
    return s.reverse(u8toi(data, size));
}
