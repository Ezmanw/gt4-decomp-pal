#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00475AD0(s32 *);                       /* extern */
s32 func_004800D0(s32, s32 *);                  /* extern */

void func_00475A98(s32 *arg0) {
    func_004800D0(*arg0, arg0);
    func_00475AD0(arg0);
}
