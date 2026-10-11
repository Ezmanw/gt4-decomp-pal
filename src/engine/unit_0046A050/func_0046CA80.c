#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_0046F510(void *, void *);                  /* extern */
s32 func_004711C8(s32, void *, s32);                /* extern */

struct func_0046CA80_arg0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    char padC[0x8D0];
    s32 unk8DC;
};

s32 func_0046CA80(void *arg0) {
    if (((struct func_0046CA80_arg0 *)arg0)->unk0 == 0) {
        ((struct func_0046CA80_arg0 *)arg0)->unk8 = 1;
        ((struct func_0046CA80_arg0 *)arg0)->unk4 = 3;
        return 0;
    }
    if (func_004711C8(arg0 + 0xC, arg0 + 0x8C4, ((struct func_0046CA80_arg0 *)arg0)->unk8DC) == 0) {
        func_0046C598(arg0);
        return 0;
    }
    if (func_0046F510(arg0 + 0x85C, arg0 + 0x8E0) == 0) {
        func_0046C5F0(arg0);
        return 0;
    }
    return 1;
}
