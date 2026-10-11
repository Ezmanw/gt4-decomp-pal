#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

typedef struct {
    s32 unk0;
    s32 unk4;
    f32 unk8;
    s32 unkC[1]; /* indexed by func_0042DD68() */
} S_0042DA58;

s32 func_0042DD68();
f32 func_0042DF78(s32, f32);

void func_0042DDD0(S_0042DA58 *arg0, f32 fparg0) {
    arg0->unk8 = func_0042DF78(arg0->unkC[func_0042DD68()], fparg0);
}
