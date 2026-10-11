#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_0047B440();                            /* extern */

struct func_0047B5B0_arg1 {
    char pad0[0x70];
    s32 unk70;
};

s32 func_0047B5B0(s32 arg0, struct func_0047B5B0_arg1 *arg1) {
    arg1->unk70 = 0;
    func_0047B440();
    return arg0;
}
