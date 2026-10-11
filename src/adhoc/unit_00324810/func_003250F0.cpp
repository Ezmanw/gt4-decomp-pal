typedef int s32;

struct Tmp { s32 field0; char pad[0xC]; };

extern "C" void func_002ECF38(Tmp *arg0);
extern "C" void func_002EB788(s32 *arg0, s32 arg1, s32 arg2);
extern "C" void func_002EA6E8(Tmp *arg0, s32 arg1);
extern "C" void func_002F2B60(s32 *arg0, s32 arg1);

extern "C" s32 func_003250F0(void) {
    s32 result;
    Tmp tmp;
    Tmp *p = &tmp;

    func_002ECF38(p);
    s32 v = p->field0;
    func_002EB788(&result, v, 1);
    func_002EA6E8(p, 2);
    s32 r = result;
    func_002F2B60(&result, 2);
    return r;
}
