typedef int s32;

extern "C" void func_00295BD8(void *arg0, s32 arg1);
extern "C" void func_00295C30(void *arg0);
extern "C" s32 func_00296128(s32 arg0);
extern "C" void func_00312470(s32 *arg0, s32 arg1);
extern "C" void func_00314C78(s32 *arg0, s32 arg1);
extern "C" void func_00328700(s32 arg0);
extern "C" void func_00328750(s32 arg0);

extern "C" void MFrameImageFace__getLImagePath(s32 *arg0) {
    s32 sp[4];
    s32 sp10[4];
    s32 *p1;
    s32 temp_a0;
    s32 temp_s0;

    func_00295C30(sp);
    {
        s32 t = func_00296128(sp[0]);
        p1 = sp10;
        func_00314C78(p1, t);
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
    func_00312470(p1, 2);
    func_00295BD8(sp, 2);
}
