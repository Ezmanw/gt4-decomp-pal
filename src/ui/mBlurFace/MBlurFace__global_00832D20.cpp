typedef int s32;

extern "C" void func_0027C728(void *buf);
extern "C" void func_00328700(s32 arg0);
extern "C" void func_00328750(s32 arg0);
extern "C" void func_0027BD20(void *buf, s32 arg1);

extern "C" void MBlurFace__global_00832D20(s32 *arg0) {
    s32 buf[4];

    func_0027C728(buf);
    if (arg0 != buf) {
        s32 s0 = buf[0];
        if (s0 != 0) {
            func_00328700(s0);
        }
        s32 temp_v0 = *arg0;
        if (temp_v0 != 0) {
            func_00328750(temp_v0);
        }
        *arg0 = s0;
    }
    func_0027BD20(buf, 2);
}
