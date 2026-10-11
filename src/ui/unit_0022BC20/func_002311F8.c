#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_0024D308(s32);
s32 func_002311F8(s8 *arg0) {
    s32 *p = (s32 *)(arg0 + 0x6D8);
    s32 temp_v0;
    temp_v0 = *p;
    if ((temp_v0 != 0) && (func_0024D308(temp_v0) != 0)) {
        return *p;
    }
    return 0;
}
