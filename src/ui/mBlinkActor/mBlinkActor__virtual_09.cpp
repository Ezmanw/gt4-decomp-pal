#include "gt4/mBlinkActor.h"
typedef int s32;

extern "C" int func_00279238(void) throw();

extern "C" void mBlinkActor__virtual_09(struct mBlinkActor *arg0) {
    s32 temp_v0 = arg0->unk8;

    if (temp_v0 == 0) {
        func_00279238();
    }
}
