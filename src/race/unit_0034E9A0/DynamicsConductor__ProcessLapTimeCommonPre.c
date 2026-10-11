#include "types.h"
#include "gt4/DynamicsConductorBattle2P.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_0034C370(void *);                          /* extern */
s32 func_003C1180(s32);                             /* extern */
s32 func_003F15A8(void *);                          /* extern */

void DynamicsConductor__ProcessLapTimeCommonPre(struct DynamicsConductorBattle2P *arg0) {
    s32 temp_s1;

    if (func_003C1180(arg0->unk0) != 0) {
        temp_s1 = func_003F15A8(arg0);
        if (func_0034C370(arg0) != 0) {
            arg0->unkF8C0 = temp_s1;
        }
        arg0->unkF898 = (s32) (temp_s1 - arg0->unkF8C0);
    }
}
