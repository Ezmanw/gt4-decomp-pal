typedef int s32;
typedef float f32;

extern "C" void func_002E2138(void *arg0, s32 arg1);
extern "C" void func_002E2190(void *arg0);
extern "C" f32 func_002E2990(s32 arg0);
extern "C" void func_002F7CC0(s32 *arg0, s32 arg1);
extern "C" void func_002F94B8(s32 *arg0, f32 arg1);
extern "C" void func_00328700(s32 arg0);
extern "C" void func_00328750(s32 arg0);

extern "C" void MSwitchActor__get_period(s32 *arg0) {
    s32 sp[4];
    s32 sp10[4];
    s32 *p1;
    s32 temp_a0;
    s32 temp_s0;

    func_002E2190(sp);
    {
        f32 t = func_002E2990(sp[0]);
        p1 = sp10;
        func_002F94B8(p1, t);
    }
    if (arg0 != p1) {
        temp_s0 = *p1;
        if (temp_s0 != 0) {
            func_00328700(temp_s0);
        }
        temp_a0 = *arg0;
        if (temp_a0 != 0) {
            func_00328750(temp_a0);
        }
        *arg0 = temp_s0;
    }
    func_002F7CC0(p1, 2);
    func_002E2138(sp, 2);
}
