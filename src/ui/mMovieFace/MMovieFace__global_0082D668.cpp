typedef int s32;

extern "C" void func_002200F0(void *buf);
extern "C" void func_00328700(s32 arg0);
extern "C" void func_00328750(s32 arg0);
extern "C" void func_0021DAD0(void *buf, s32 arg1);

extern "C" void MMovieFace__global_0082D668(s32 *arg0) {
    s32 buf[4];

    func_002200F0(buf);
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
    func_0021DAD0(buf, 2);
}
