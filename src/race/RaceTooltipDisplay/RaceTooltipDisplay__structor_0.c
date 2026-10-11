#include "types.h"
#include "gt4/RaceTooltipDisplay.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 RaceMessageDisplay__structor_1(void *);                      /* extern */
s32 RaceEventDisplay__structor_1(void *);                      /* extern */
s32 func_003A9A50(s32);                         /* extern */
s32 func_003AE1F8(void *);                      /* extern */
s32 RaceDisplayObjectBase__structor_0();                            /* extern */

extern char RaceTooltipDisplay__vtable[];
void RaceTooltipDisplay__structor_0(void *arg0) {
    RaceDisplayObjectBase__structor_0();
    ((struct RaceTooltipDisplay *)arg0)->unk14 = (s32)RaceTooltipDisplay__vtable;
    func_003A9A50(arg0 + 0x20);
    RaceMessageDisplay__structor_1(arg0 + 0x3C);
    RaceEventDisplay__structor_1(arg0 + 0x18C);
    func_003AE1F8(arg0);
}
