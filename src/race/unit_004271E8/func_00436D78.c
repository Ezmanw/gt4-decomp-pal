#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_00430610(s32);                             /* extern */

struct func_00436D78_arg0 {
    char pad0[0x10D8];
    s32 unk10D8;
};

void func_00436D78(struct func_00436D78_arg0 *arg0, s32 arg1) {
    arg0->unk10D8 = func_00430610(arg1);
}
