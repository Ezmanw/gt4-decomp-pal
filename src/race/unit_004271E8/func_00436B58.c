#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_0048F108(s32);                             /* extern */

struct func_00436B58_arg0 {
    char pad0[0xC];
    s32 unkC;
};

void func_00436B58(struct func_00436B58_arg0 *arg0, s32 arg1) {
    arg0->unkC = func_0048F108(arg1);
}
