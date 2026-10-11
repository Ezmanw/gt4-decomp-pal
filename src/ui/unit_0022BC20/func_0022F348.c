#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00328640(s32);
s32 func_0022F348(s8 *arg0) {
    s32 *h = (s32 *)(arg0 + 0x80);
    s32 bad = 0;
    if (*h == 0 || func_00328640(*h) == 0) {
        bad = 1;
    }
    if (bad == 0) return *h;
    return 0;
}
