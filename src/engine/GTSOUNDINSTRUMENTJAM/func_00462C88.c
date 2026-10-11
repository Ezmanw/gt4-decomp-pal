#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

struct func_00462C88_arg0 {
    u8 pad0[0x14];
    void *unk14;
};

void func_00462C88(struct func_00462C88_arg0 *arg0) {
    arg0->unk14 = (void *) ((s32) arg0->unk14 + (s32) (arg0));
}
