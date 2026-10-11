#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00438E08();                            /* extern */
s32 func_0043BE78(s32);                         /* extern */
s32 func_0043C788(void *);                      /* extern */
s32 func_0043CA20(void *);                      /* extern */
s32 func_0043CD28(void *);                      /* extern */

extern char D_00687FF0[];
void func_0043D048(s32 *arg0) {
    func_00438E08();
    *arg0 = (s32)D_00687FF0;
    func_0043BE78(arg0 + 0x6);
    func_0043C788(arg0 + 0x12);
    func_0043CA20(arg0 + 0x19);
    func_0043CD28(arg0 + 0x23);
}
