#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_00449140(s8 *);                            /* extern */

struct func_00436F90_arg0 {
    char pad0[0x115C];
    s32 unk115C;
};

void func_00436F90(struct func_00436F90_arg0 *arg0, s8 *arg1) {
    if (*arg1 == 0) {
        arg0->unk115C = 0;
        return;
    }
    arg0->unk115C = func_00449140(arg1);
}
