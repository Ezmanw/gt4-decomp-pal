#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00206C20(s32, s32);                    /* extern */
s32 func_00206C40(s32, s32);                    /* extern */
s32 func_00328700(s32);                         /* extern */
s32 func_00328750(s32);                         /* extern */

void func_00206F80(s32 arg0, s32 arg1) {
    func_00328700(arg1);
    func_00206C40(arg0, arg1);
    func_00206C20(arg0, arg1);
    func_00328750(arg1);
}
