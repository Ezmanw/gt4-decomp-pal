#include "gt4/mDnas.h"
typedef int s32;

extern "C" int func_0028C050(void) throw();

extern "C" void mDnas__virtual_09(struct mDnas *arg0) {
    s32 temp_v0 = arg0->unk8;

    if (temp_v0 == 0) {
        func_0028C050();
    }
}
