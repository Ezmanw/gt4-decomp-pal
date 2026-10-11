#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 Automobile__GetExplicitCurrentLap(void *);
void *func_0034C2F0(s32, s32);
struct func_003FA6A0_temp_v0 {
    char pad0[0x5B2];
    u8 unk5B2;
};

s16 func_003FA6A0(s32 arg0, s32 arg1, u8 *arg2) {
    struct func_003FA6A0_temp_v0 *temp_v0;
    temp_v0 = func_0034C2F0(arg0, arg1);
    *arg2 = temp_v0->unk5B2;
    return Automobile__GetExplicitCurrentLap(temp_v0);
}
