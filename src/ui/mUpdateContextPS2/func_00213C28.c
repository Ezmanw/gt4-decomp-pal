#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

void func_00251E40();                            /* extern */

struct func_00213C28_arg0 {
    char pad0[0xE4];
    s32 unkE4;
};

void func_00213C28(struct func_00213C28_arg0 *arg0) {
    func_00251E40();
    arg0->unkE4 = 1;
}
