typedef int s32;

extern "C" void func_002A1278(void *buf);
extern "C" void func_00328700(s32 arg0);
extern "C" void func_00328750(s32 arg0);
extern "C" void func_002A0E78(void *buf, s32 arg1);

extern "C" void MImageFace__global_00836C30(s32 *arg0) {
    s32 buf[4];

    func_002A1278(buf);
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
    func_002A0E78(buf, 2);
}
