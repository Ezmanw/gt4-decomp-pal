typedef int s32;

extern "C" void func_002F74E8(s32 *arg0, s32 arg1);
extern "C" void func_00328700(s32 arg0);
extern "C" void func_00328750(s32 arg0);
extern "C" void func_002F68A0(s32 *arg0, s32 arg1);

extern "C" void FileIO__global_0083D510(s32 *arg0) {
    s32 buf[4];

    func_002F74E8(buf, 0);
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
    func_002F68A0(buf, 2);
}
