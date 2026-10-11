#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_003D98B0();                            /* extern */
s32 func_003DA198(void *);                      /* extern */
s32 func_003DA230(void *);                      /* extern */
s32 func_00426E78(s32);                             /* extern */

struct func_003D9830_arg0 {
    char pad0[0x1C];
    s32 unk1C;
    s32 unk20;
};

s32 func_003D9830(struct func_003D9830_arg0 *arg0, s32 arg1) {
    if ((arg0->unk1C == 0) || (arg0->unk20 != 0)) {
        func_003D98B0();
    }
    if (func_00426E78(arg1) & 0x20) {
        func_003DA198(arg0);
    }
    if (func_00426E78(arg1) & 0x40) {
        func_003DA230(arg0);
    }
}
