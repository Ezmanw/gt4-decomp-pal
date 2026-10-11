typedef int s32;

extern "C" void func_0029CB98(s32 *arg0);
extern "C" void func_003124C8(s32 *arg0, s32 arg1);
extern "C" void func_0029C950(s32 arg0, s32 *arg1);
extern "C" void func_00312470(s32 *arg0, s32 arg1);
extern "C" void func_0029CB40(s32 *arg0, s32 arg1);

extern "C" void MGamePort__set_port_name(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg2 > 0) {
        s32 buf0[4];
        s32 buf1[4];

        func_0029CB98(buf0);
        func_003124C8(buf1, arg3);
        func_0029C950(buf0[0], buf1);
        func_00312470(buf1, 2);
        func_0029CB40(buf0, 2);
    }
}
