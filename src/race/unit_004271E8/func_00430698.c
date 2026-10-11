#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_004306D8(void *);                      /* extern */
s32 func_0043A770();                            /* extern */

extern char D_006879E0[];
struct func_00430698_arg0 {
    s32 unk0;
    char pad4[0x4];
    s32 unk8;
};

void func_00430698(struct func_00430698_arg0 *arg0) {
    func_0043A770();
    arg0->unk8 = 0x20;
    arg0->unk0 = (s32)D_006879E0;
    func_004306D8(arg0);
}
