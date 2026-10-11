extern "C" {
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_00394EC0(...) throw();
void RaceCourse__clearData(...) throw();

struct func_003C7360_arg0 {
    char pad0[0x6C];
    char *unk6C;
    char pad70[0x1E5E4];
    s32 unk1E654;
};

void func_003C7360(char *arg0) {
    RaceCourse__clearData(M2C_FIELD(((struct func_003C7360_arg0 *)arg0)->unk6C, s32 *, 0x80));
    if (((struct func_003C7360_arg0 *)arg0)->unk1E654 == 0) {
        ((struct func_003C7360_arg0 *)arg0)->unk1E654 = func_00394EC0();
    }
}

}
