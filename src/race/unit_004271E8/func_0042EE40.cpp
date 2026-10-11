typedef int s32;

extern "C" int func_0042EDF8(void *arg0, void *arg1, void *arg2, s32 arg3);

extern "C" int func_0042EE40(void *arg0, void *arg1) {
    return func_0042EDF8(arg0, arg1, (char *)arg0 + 8, 0x400);
}
