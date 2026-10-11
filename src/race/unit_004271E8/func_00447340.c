#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_004476F0();                            /* extern */
s32 func_005C1628(void *);                      /* extern */

extern char D_006882D8[];
struct func_00447340_arg0 {
    char pad0[0xAC];
    s32 unkAC;
};

void func_00447340(struct func_00447340_arg0 *arg0, s32 arg1) {
    arg0->unkAC = (s32)D_006882D8;
    func_004476F0();
    if (arg1 & 1) {
        func_005C1628(arg0);
    }
}
