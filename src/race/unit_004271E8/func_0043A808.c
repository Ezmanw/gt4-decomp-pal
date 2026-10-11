#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

void func_00436930(s32);
void func_0043A8A0(s32);
s32 exception__structor_0(s32);
extern volatile s32 D_00622F4C;
s32 func_0043A808(void) {
    s32 temp_v0;
    temp_v0 = exception__structor_0(0x3B088);
    func_0043A8A0(temp_v0);
    D_00622F4C = temp_v0;
    func_00436930(temp_v0 + 0x38CB0);
    return D_00622F4C;
}
