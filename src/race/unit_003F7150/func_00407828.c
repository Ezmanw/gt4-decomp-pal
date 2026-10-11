#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_004077F0();                            /* extern */
s32 func_00407870(s32);                         /* extern */

s32 func_00407828(s32 *arg0, s32 arg1) {
    func_004077F0();
    *arg0 = arg1;
    if (arg1 != 0) {
        func_00407870(arg1);
    }
}
