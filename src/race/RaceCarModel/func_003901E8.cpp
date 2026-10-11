#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_003902C0(s32, s32);                    /* extern */
s32 free(s32);                         /* extern */
s32 func_005C1628(void *);                      /* extern */

struct func_003901E8_arg1 {
    char pad0[0x94];
    s32 unk94;
};
struct func_003901E8_arg0 {
    char pad0[0x100];
    s32 unk100;
};

void func_003901E8(void *arg0, void *arg1) {
    s32 temp_s0;

    temp_s0 = ((struct func_003901E8_arg1 *)arg1)->unk94;
    func_003902C0(((struct func_003901E8_arg0 *)arg0)->unk100, temp_s0);
    free(temp_s0);
    func_005C1628(arg0);
}
