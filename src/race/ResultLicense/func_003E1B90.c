#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00455970(void *, s32, s32);        /* extern */
s32 func_00456B98(s32);                     /* extern */

struct func_003E1B90_arg0 {
    char pad0[0x570];
    s32 unk570;
    char pad574[0x4];
    void *unk578;
};
struct func_003E1B90_temp_a0 {
    char pad0[0x7C];
    s32 unk7C;
};

s32 func_003E1B90(struct func_003E1B90_arg0 *arg0) {
    struct func_003E1B90_temp_a0 *temp_a0;

    if ((arg0->unk578 != NULL) && (arg0->unk570 > 0)) {
        func_00456B98(1);
        temp_a0 = arg0->unk578;
        func_00455970(temp_a0, 0, temp_a0->unk7C);
    }
}
