typedef int s32;

extern "C" void func_002C3F80(void *buf);
extern "C" void func_00328700(s32 arg0);
extern "C" void func_00328750(s32 arg0);
extern "C" void func_002C29D0(void *buf, s32 arg1);

extern "C" void MMusic__global_00839330(s32 *arg0) {
    s32 buf[4];

    func_002C3F80(buf);
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
    func_002C29D0(buf, 2);
}
