#include "types.h"
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void *func_002B4AF0(s32, s32);                      /* extern */
s32 mListBox__get_total_item_count();                                /* extern */

s16 func_002B5530(s32 arg0, s32 arg1) {
    if ((arg1 >= 0) && (arg1 < mListBox__get_total_item_count())) {
        return M2C_FIELD(func_002B4AF0(arg0, arg1), s16 *, 0x1C);
    }
    return 0;
}
