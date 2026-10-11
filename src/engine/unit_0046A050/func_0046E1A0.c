#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_0046DB48(void *);                      /* extern */
s32 func_0046EDE0(s32);                             /* extern */

struct func_0046E1A0_arg0 {
    char pad0[0xAE0];
    s32 unkAE0;
};

void func_0046E1A0(void *arg0) {
    s32 temp_s1;

    temp_s1 = arg0 + 0xA88;
    func_0046EDE0(temp_s1);
    ((struct func_0046E1A0_arg0 *)arg0)->unkAE0 = func_0046EDE0(temp_s1);
    func_0046DB48(arg0);
}
