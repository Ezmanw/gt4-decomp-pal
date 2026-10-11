extern "C" {
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_002D23E0(...) throw();

struct func_002D25F0_arg0 {
    char pad0[0x20];
    s32 unk20;
};

s32 func_002D25F0(char *arg0) {
    if (((struct func_002D25F0_arg0 *)arg0)->unk20 != 0) {
        func_002D23E0();
    }
}

}
