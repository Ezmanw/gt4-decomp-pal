typedef int s32;

extern "C" void func_0019C4F8(void *buf);
extern "C" void func_00328700(s32 arg0);
extern "C" void func_00328750(s32 arg0);
extern "C" void func_0019C1A8(void *buf, s32 arg1);

extern "C" void MPlayerStats__global_00825440(s32 *arg0) {
    s32 buf[4];

    func_0019C4F8(buf);
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
    func_0019C1A8(buf, 2);
}
