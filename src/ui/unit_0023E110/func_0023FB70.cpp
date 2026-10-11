#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_0023FBB0();                            /* extern */
s32 func_002C3E00(s32, s32);                    /* extern */

struct func_0023FB70_arg0 {
    char pad0[0x10];
    s32 unk10;
};

void func_0023FB70(void *arg0, s32 arg1) {
    func_0023FBB0();
    func_002C3E00(((struct func_0023FB70_arg0 *)arg0)->unk10, arg1);
}
