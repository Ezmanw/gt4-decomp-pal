#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_00477880(s32);                             /* extern */

struct func_0047AE50_arg0 {
    char pad0[0x74];
    s32 unk74;
};

void func_0047AE50(struct func_0047AE50_arg0 *arg0, s32 arg1) {
    arg0->unk74 = func_00477880(arg1);
}
