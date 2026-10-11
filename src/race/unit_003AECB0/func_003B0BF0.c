#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_003B0808(s32, s32);                    /* extern */
s32 func_00419B90();                            /* extern */

struct func_003B0BF0_arg0 {
    char pad0[0x690];
    s32 unk690;
};
struct func_003B0BF0_arg1 {
    char pad0[0x690];
    s32 unk690;
};

void *func_003B0BF0(void *arg0, void *arg1) {
    func_00419B90();
    func_003B0808(arg0 + 0x680, arg1 + 0x680);
    ((struct func_003B0BF0_arg0 *)arg0)->unk690 = (s32) ((struct func_003B0BF0_arg1 *)arg1)->unk690;
    return arg0;
}
