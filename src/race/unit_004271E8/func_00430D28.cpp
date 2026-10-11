typedef int s32;
typedef unsigned int u32;

extern "C" s32 func_00430CF0(u32 arg0);

extern "C" s32 func_00430D28(u32 *arg0) {
    return func_00430CF0(*arg0 & 0xF);
}
