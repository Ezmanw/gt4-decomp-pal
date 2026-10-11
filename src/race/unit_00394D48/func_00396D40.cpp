#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 CourseData__getRunway(void *);                          /* extern */
s32 func_00397730();                            /* extern */
s32 func_004582D0(s32, s32);                    /* extern */

struct func_00396D40_arg0 {
    char pad0[0x8C];
    s32 unk8C;
};

void func_00396D40(void *arg0) {
    func_00397730();
    if (((struct func_00396D40_arg0 *)arg0)->unk8C != 0) {
        func_004582D0(((struct func_00396D40_arg0 *)arg0)->unk8C, CourseData__getRunway(arg0));
    }
}
