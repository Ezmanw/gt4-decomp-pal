typedef int s32;

extern "C" void func_002D8C08(void *arg0, s32 arg1);
extern "C" void func_002D8C60(void *arg0);
extern "C" void func_002FC9C8(s32 *arg0, s32 arg1);
extern "C" void func_002FE3D0(s32 *arg0, s32 arg1);
extern "C" void func_00328700(s32 arg0);
extern "C" void func_00328750(s32 arg0);
extern "C" s32 func_0057CE80(s32 arg0);

extern "C" void MSelectBox__decLimit(s32 *arg0) {
    s32 sp[4];
    s32 sp10[4];
    s32 *p1;
    s32 temp_a0;
    s32 temp_s0;

    func_002D8C60(sp);
    {
        s32 t = func_0057CE80(sp[0] + 0xBC) != 0;
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
    func_002D8C08(sp, 2);
}
