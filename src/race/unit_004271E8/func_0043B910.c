#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_0043A770();                            /* extern */
s32 func_0043B950(void *);                      /* extern */

extern char D_00687F50[];
struct func_0043B910_arg0 {
    s32 unk0;
    char pad4[0x20];
    s32 unk24;
};

void func_0043B910(struct func_0043B910_arg0 *arg0) {
    func_0043A770();
    arg0->unk0 = (s32)D_00687F50;
    func_0043B950(arg0);
    arg0->unk24 = 0;
}
