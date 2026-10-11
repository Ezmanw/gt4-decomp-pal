typedef int s32;

extern "C" s32 func_004489C0(s32 *arg0);
extern "C" void func_002FE3D0(s32 *arg0, s32 arg1);
extern "C" void func_00328700(s32 arg0);
extern "C" void func_00328750(s32 arg0);
extern "C" void func_002FC9C8(s32 *arg0, s32 arg1);

extern "C" void MDatabase__getWheelLabelCount(s32 *arg0) {
    s32 buf[4];
    s32 temp_v0;

    func_002FE3D0(buf, func_004489C0(arg0));
    if (arg0 != buf) {
        s32 s0 = buf[0];
        if (s0 != 0) {
            func_00328700(s0);
        }
        temp_v0 = *arg0;
        if (temp_v0 != 0) {
            func_00328750(temp_v0);
        }
        *arg0 = s0;
    }
    func_002FC9C8(buf, 2);
}
