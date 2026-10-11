typedef int s32;

extern "C" void func_0012BF60(void *buf);
extern "C" void func_00328700(s32 arg0);
extern "C" void func_00328750(s32 arg0);
extern "C" void func_0012B4A0(void *buf, s32 arg1);

extern "C" void MSceneViewFace__global_00821BF0(s32 *arg0) {
    s32 buf[4];

    func_0012BF60(buf);
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
    func_0012B4A0(buf, 2);
}
