#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00105548(s8 *);                        /* extern */

struct func_00473E78_arg0 {
    char pad0[0x4];
    s32 unk4;
};

void func_00473E78(s8 *arg0, s32 arg1, s32 arg2) {
    func_00105270(arg0);
    func_00105480((s32) arg0, arg1, arg2);
    ((struct func_00473E78_arg0 *)arg0)->unk4 = 0;
    func_00105548(arg0);
}
