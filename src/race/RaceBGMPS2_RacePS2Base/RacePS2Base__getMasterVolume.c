#include "types.h"
#include "gt4/RacePS2Base.h"
void *memcpy(void *, const void *, unsigned int);

f32 func_003C12B8(s32);                             /* extern */

f32 RacePS2Base__getMasterVolume(struct RacePS2Base *arg0) {
    return func_003C12B8(arg0->unk6C) * arg0->unkCF48;
}
