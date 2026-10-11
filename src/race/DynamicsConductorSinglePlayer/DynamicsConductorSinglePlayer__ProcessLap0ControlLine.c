#include "types.h"
#include "gt4/DynamicsConductorSinglePlayer.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_00345380(void *);                      /* extern */
void *func_0034C2F0();                              /* extern */
s32 func_0035E0F0(s32, s32, s32, s32); /* extern */
s32 func_003F3AC0(void *);                      /* extern */

struct DynamicsConductorSinglePlayer__virtual_19_temp_v0 {
    char pad0[0x56B];
    u8 unk56B;
};

void DynamicsConductorSinglePlayer__ProcessLap0ControlLine(struct DynamicsConductorSinglePlayer *arg0, s32 arg1) {
    s32 temp_s1;
    struct DynamicsConductorSinglePlayer__virtual_19_temp_v0 *temp_v0;

    temp_s1 = arg0->unk0;
    temp_v0 = func_0034C2F0();
    if (temp_v0->unk56B == 1) {
        func_00345380(temp_v0);
        func_003F3AC0(temp_v0);
        if (arg1 == 0) {
            func_0035E0F0(temp_s1, 4, 0, 0);
        }
    }
    arg0->unkCBE4 = 0;
}
