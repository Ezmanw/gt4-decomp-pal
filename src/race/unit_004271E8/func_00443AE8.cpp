#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00443B20(s32);                         /* extern */
s32 func_00444398(s32, s32);                    /* extern */
s32 func_00444418();                                /* extern */

void func_00443AE8(s32 arg0) {
    func_00444398(arg0, func_00444418());
    func_00443B20(arg0);
}
