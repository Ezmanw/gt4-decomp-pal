typedef int s32;

extern "C" void func_0028F8C8(void *buf);
extern "C" void func_00328700(s32 arg0);
extern "C" void func_00328750(s32 arg0);
extern "C" void func_0028F640(void *buf, s32 arg1);

extern "C" void MFBox__global_00835360(s32 *arg0) {
    s32 buf[4];

    func_0028F8C8(buf);
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
    func_0028F640(buf, 2);
}
