#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

void func_00436088(s8 *);
void func_00436718(s8 *);
void func_00438EF8(void *);
void func_004392B0(void *);
void func_00439990(void *);
void func_00439B18(void *);
s32 func_0043A770(s8 *);
void func_0043DCB0(void *);
extern char D_00687B60[];
void func_004365F0(s8 *arg0) {
    func_0043A770(arg0);
    *(s32 *)arg0 = (s32)D_00687B60;
    func_00436088(arg0 + 0x11C8);
    func_0043DCB0(arg0 + 0x11D0);
    func_00438EF8(arg0 + 0x1344);
    func_00439990(arg0 + 0x13F4);
    func_00439B18(arg0 + 0x1650);
    func_004392B0(arg0 + 0x16A4);
    func_00436718(arg0);
}
