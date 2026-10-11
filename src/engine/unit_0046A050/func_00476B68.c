#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_00476C48(void *);                      /* extern */
s32 func_00476C98();                            /* extern */

struct func_00476B68_arg1 {
    s32 unk0;
    s32 unk4;
};
struct func_00476B68_arg0 {
    s32 unk0;
    s32 unk4;
};

void *func_00476B68(struct func_00476B68_arg0 *arg0, struct func_00476B68_arg1 *arg1) {
    s32 temp_s1;

    temp_s1 = arg1->unk0;
    func_00476C98();
    arg0->unk0 = temp_s1;
    arg0->unk4 = (s32) arg1->unk4;
    func_00476C48(arg0);
    return arg0;
}
