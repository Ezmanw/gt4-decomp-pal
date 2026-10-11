#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_0043A770();                            /* extern */

extern char D_00687B20[];
struct func_00436088_arg0 {
    s32 unk0;
    s32 unk4;
};

void func_00436088(struct func_00436088_arg0 *arg0) {
    func_0043A770();
    arg0->unk4 = 0;
    arg0->unk0 = (s32)D_00687B20;
}
