#include "gt4/mAnchorActor.h"
typedef int s32;

extern "C" int func_00278418(void) throw();

extern "C" void mAnchorActor__virtual_09(struct mAnchorActor *arg0) {
    s32 temp_v0 = arg0->unk8;

    if (temp_v0 == 0) {
        func_00278418();
    }
}
