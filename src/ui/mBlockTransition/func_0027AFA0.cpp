#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_0027B008();                            /* extern */
s32 mBlockTransition__initialize_blocks(void *);                      /* extern */
s32 malloc(s32);                             /* extern */

struct func_0027AFA0_arg0 {
    char pad0[0x30];
    s32 unk30;
    s32 unk34;
    s32 unk38;
};

void func_0027AFA0(void *arg0) {
    s32 temp_s1;
    s32 temp_s2;

    temp_s2 = ((struct func_0027AFA0_arg0 *)arg0)->unk30;
    temp_s1 = ((struct func_0027AFA0_arg0 *)arg0)->unk34;
    func_0027B008();
    if ((temp_s2 != 0) && (temp_s1 != 0)) {
        ((struct func_0027AFA0_arg0 *)arg0)->unk38 = malloc(temp_s2 * temp_s1 * 0x1C);
    }
    mBlockTransition__initialize_blocks(arg0);
}
