#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00239148(s32, f32);                    /* extern */
s32 func_00239178(s32);                         /* extern */

struct func_001941C0_arg0 {
    char pad0[0xD8];
    s32 unkD8;
};

void func_001941C0(void *arg0, f32 fparg0) {
    func_00239178(((struct func_001941C0_arg0 *)arg0)->unkD8);
    func_00239148(((struct func_001941C0_arg0 *)arg0)->unkD8, fparg0);
}
