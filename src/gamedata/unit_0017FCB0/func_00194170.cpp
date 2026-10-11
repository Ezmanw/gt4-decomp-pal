#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_002390D8(s32, f32);                    /* extern */
s32 func_002390F0(s32, f32);                    /* extern */

struct func_00194170_arg0 {
    char pad0[0xD8];
    s32 unkD8;
};

void func_00194170(void *arg0, f32 fparg0, f32 fparg1) {
    func_002390F0(((struct func_00194170_arg0 *)arg0)->unkD8, fparg1);
    func_002390D8(((struct func_00194170_arg0 *)arg0)->unkD8, fparg0);
}
