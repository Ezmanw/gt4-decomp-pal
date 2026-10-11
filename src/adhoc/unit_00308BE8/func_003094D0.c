#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_005C1628(void *);                      /* extern */

void func_003094D0(void *arg0, s32 arg1) {
    func_003288F0((s32 *) arg0, 0);
    if (arg1 & 1) {
        func_005C1628(arg0);
    }
}
