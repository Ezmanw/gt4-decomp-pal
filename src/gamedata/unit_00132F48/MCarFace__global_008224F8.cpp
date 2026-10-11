typedef int s32;

extern "C" void func_00138148(void *buf);
extern "C" void func_00328700(s32 arg0);
extern "C" void func_00328750(s32 arg0);
extern "C" void func_00137D68(void *buf, s32 arg1);

extern "C" void MCarFace__global_008224F8(s32 *arg0) {
    s32 buf[4];

    func_00138148(buf);
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
    func_00137D68(buf, 2);
}
