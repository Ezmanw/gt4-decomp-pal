#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

void func_00407558(void *, f32);
void func_005F6320(void *);
void func_005F6350(void *);
struct func_003869B8_arg0 {
    char pad0[0x360];
    s32 unk360;
    s32 unk364;
    s32 unk368;
    s32 unk36C;
};

void func_003869B8(s8 *arg0, f32 fparg0) {
    func_005F6320(arg0);
    func_005F6350(arg0 + 0x40);
    func_00407558(arg0 + 0x160, fparg0);
    func_00407558(arg0 + 0x260, fparg0);
    ((struct func_003869B8_arg0 *)arg0)->unk360 = 0;
    ((struct func_003869B8_arg0 *)arg0)->unk364 = 0;
    ((struct func_003869B8_arg0 *)arg0)->unk368 = 0;
    ((struct func_003869B8_arg0 *)arg0)->unk36C = 0;
}
