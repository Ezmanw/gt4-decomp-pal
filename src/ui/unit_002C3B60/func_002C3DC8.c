#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_00460E68(s32);                         /* extern */

struct func_002C3DC8_arg0 {
    char pad0[0x10];
    s32 unk10;
    s32 unk14;
};

void func_002C3DC8(struct func_002C3DC8_arg0 *arg0) {
    if (arg0->unk10 != 0) {
        func_00460E68(arg0->unk14);
        arg0->unk14 = 0;
    }
}
