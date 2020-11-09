#include "helper.h"

int u8toi(const uint8_t *b, size_t size) {
    int i = 0;
    if (size > 0) {
        i |= b[0];
    }
    if (size > 1) {
        i |= b[1] << 8;
    }
    if (size > 2) {
        i |= b[2] << 16;
    }
    if (size > 3) {
        i |= b[3] << 24;
    }
    return i;
}