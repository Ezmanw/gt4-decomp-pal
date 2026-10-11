#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

extern "C" {
s32 func_00331238(s32);                         /* extern */
s32 func_00331678(s32, s32, s32);               /* extern */

struct func_00335748_arg0 {
    char pad0[0xC];
    s32 unkC;
    s32 unk10;
};

void func_00335748(char *arg0) {
    s32 temp_s1;

    temp_s1 = (s32)(arg0 + 0x1C);
    func_00331238(temp_s1);
    func_00331678(temp_s1, ((struct func_00335748_arg0 *)arg0)->unkC, ((struct func_00335748_arg0 *)arg0)->unk10);
}

}
