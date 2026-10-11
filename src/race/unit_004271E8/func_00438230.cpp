extern "C" {
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00438268(...) throw();
s32 func_004382D0(...) throw();

struct func_00438230_arg0 {
    char pad0[0x6];
    u8 unk6;
};

void func_00438230(char *arg0) {
    if (((struct func_00438230_arg0 *)arg0)->unk6 == 0) {
        func_00438268();
        return;
    }
    func_004382D0();
}

}
