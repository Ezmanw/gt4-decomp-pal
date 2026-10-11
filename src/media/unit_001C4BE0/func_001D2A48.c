#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_001D2638(void *, s32);                 /* extern */
s32 func_001D2700();                            /* extern */
s32 func_001D2720(void *);                      /* extern */
s32 func_001D2990(void *);                      /* extern */

struct func_001D2A48_arg0 {
    char pad0[0x698];
    s32 unk698;
    char pad69C[0x44];
    s32 unk6E0;
};

void func_001D2A48(struct func_001D2A48_arg0 *arg0) {
    s32 temp_s1;

    temp_s1 = arg0->unk698;
    if (arg0->unk6E0 != 0) {
        func_001D2700();
        func_001D2720(arg0);
    }
    func_001D2990(arg0);
    if (arg0->unk6E0 != 0) {
        if (temp_s1 != 5) {
            func_001D2638(arg0, temp_s1);
            return;
        }
        func_001D2638(arg0, 0);
    }
}
