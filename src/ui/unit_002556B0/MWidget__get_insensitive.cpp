typedef int s32;

extern "C" void func_00255210(s32 *arg0, s32 arg1);
extern "C" void func_00255268(s32 *arg0);
extern "C" s32 func_00266320(s32 arg0);
extern "C" void func_002FC9C8(s32 *arg0, s32 arg1);
extern "C" void func_002FE3D0(s32 *arg0, s32 arg1);
extern "C" void func_00328700(s32 arg0);
extern "C" void func_00328750(s32 arg0);

extern "C" void MWidget__get_insensitive(s32 *arg0) {
    s32 sp[4];
    s32 sp10[4];
    s32 *p1;
    s32 temp_a0;
    s32 temp_s0;

    func_00255268(sp);
    {
        s32 t = func_00266320(sp[0]) != 0;
        p1 = sp10;
        func_002FE3D0(p1, t);
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
    func_002FC9C8(p1, 2);
    func_00255210(sp, 2);
}
