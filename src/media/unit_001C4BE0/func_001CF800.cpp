#include "types.h"
struct func_001CF800_a0 {
    char pad0[0x60];
    s32 unk60;
};

extern "C" s32 func_001CF800(struct func_001CF800_a0 *a0) {
    return a0->unk60;
}
