typedef int s32;

extern "C" void func_001AA390(void *buf);
extern "C" void func_00328700(s32 arg0);
extern "C" void func_00328750(s32 arg0);
extern "C" void func_001AA0C8(void *buf, s32 arg1);

extern "C" void MSlideShowFace__global_008261C0(s32 *arg0) {
    s32 buf[4];

    func_001AA390(buf);
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
    func_001AA0C8(buf, 2);
}
