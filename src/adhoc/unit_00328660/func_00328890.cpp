typedef int s32;

extern "C" void func_00328700(s32 arg0);

extern "C" void func_00328890(s32 *arg0, s32 *arg1) {
    s32 temp_v0 = *arg1;

    *arg0 = temp_v0;
    if (temp_v0 != 0) {
        func_00328700(temp_v0);
    }
}
