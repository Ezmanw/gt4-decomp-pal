#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_003A9900(s32);                         /* extern */
s32 func_003A9A50(void *);                      /* extern */

void func_003A3BF8(s32 *arg0) {
    *arg0 = 0;
    func_003A9900(arg0 + 1);
    func_003A9A50(arg0 + 0x9);
}
