#include "gt4/mChaseActor.h"
typedef int s32;

extern "C" int func_002839B0(void) throw();

extern "C" void mChaseActor__virtual_09(struct mChaseActor *arg0) {
    s32 temp_v0 = arg0->unk8;

    if (temp_v0 == 0) {
        func_002839B0();
    }
}
