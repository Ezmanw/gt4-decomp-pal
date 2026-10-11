#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_003C78E8();                                /* extern */
s32 func_003F87D0(s32, f32);                    /* extern */

void func_003C7978(f32 fparg0) {
    func_003F87D0(func_003C78E8(), fparg0);
}
