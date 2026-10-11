#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00438E18(s32 *, s32);              /* extern */
s32 func_0043BED0(void *, s32);             /* extern */
s32 func_0043C7E0(void *, s32);             /* extern */
s32 func_0043CA78(void *, s32);             /* extern */
s32 func_0043CD88(s32, s32);                /* extern */
s32 func_005C1628(s32 *);                       /* extern */

extern char D_00687FF0[];
void func_0043D098(s32 *arg0, s32 arg1) {
    *arg0 = (s32)D_00687FF0;
    func_0043CD88(arg0 + 0x23, 2);
    func_0043CA78(arg0 + 0x19, 2);
    func_0043C7E0(arg0 + 0x12, 2);
    func_0043BED0(arg0 + 0x6, 2);
    func_00438E18(arg0, 0);
    if (arg1 & 1) {
        func_005C1628(arg0);
    }
}
