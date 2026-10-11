#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

extern "C" {
s32 func_001D9AC0();                            /* extern */
s32 func_004EA398(void *);                      /* extern */

struct func_001D9C98_temp_s0 {
    char pad0[0xCC];
    s32 unkCC;
};

void func_001D9C98(s32 arg0) {
    char *temp_s0;

    temp_s0 = (char *)(arg0 + 0x10);
    ((struct func_001D9C98_temp_s0 *)temp_s0)->unkCC = 1;
    func_001D9AC0();
    func_004EA398(temp_s0);
}

}
