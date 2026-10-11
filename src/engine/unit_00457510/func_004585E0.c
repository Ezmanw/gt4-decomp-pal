#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 VisionList__getVoronoi();                                /* extern */

struct func_004585E0_arg0 {
    char pad0[0x34];
    s32 unk34;
};

u32 func_004585E0(struct func_004585E0_arg0 *arg0) {
    return (u32) (VisionList__getVoronoi() - arg0->unk34) >> 4;
}
