typedef int s32;

extern "C" s32 func_00431518(s32 a0, s32 a1, const char *a2, s32 a3, s32 t0, s32 t1);

extern "C" s32 func_00431650(s32 arg0, s32 arg1) {
    return func_00431518(arg0, arg1, "%s%04d", 0xB, 1, 0xF);
}
