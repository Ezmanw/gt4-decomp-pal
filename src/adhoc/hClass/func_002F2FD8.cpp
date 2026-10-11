#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_002F3B88(s32, s32);                    /* extern */
s32 func_003056A8(s32);                         /* extern */
s32 func_003068D8(s32, s32, s32);       /* extern */

extern char D_002F2ED0[];
extern char D_0083CE50[];
void func_002F2FD8(s32 *arg0, s32 arg1, s32 arg2) {
    func_003056A8(*arg0);
    func_002F3B88(*arg0, arg2);
    func_003068D8(*arg0, (s32)D_0083CE50, (s32)D_002F2ED0);
}
