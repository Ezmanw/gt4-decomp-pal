#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s64 func_00440E90(s32);
struct func_00440D88_arg0 {
    char pad0[0x490];
    s32 unk490;
};

s32 func_00440D88(s8 *arg0, s32 arg1) {
    s64 r = func_00440E90(arg1);
    s8 *e = arg0 + ((struct func_00440D88_arg0 *)arg0)->unk490 * 0x178;
    return *(s64 *)(e + 0x108) == r;
}
