#define GT4_DECLS
#include "gt4/mWidget.h"
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_002663F8();                                /* extern */

struct func_0025C0E8_arg0 {
    char pad0[0x44];
    s32 unk44;
    s32 unk48;
};

void func_0025C0E8(void *arg0) {
    if (func_002663F8() != 0) {
        mWidget__getWindowSize(arg0, arg0 + 0x44, arg0 + 0x48);
        return;
    }
    ((struct func_0025C0E8_arg0 *)arg0)->unk44 = 0;
    ((struct func_0025C0E8_arg0 *)arg0)->unk48 = 0;
}
