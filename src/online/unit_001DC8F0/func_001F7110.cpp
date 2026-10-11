typedef int s32;

extern "C" void func_001F7028(s32 arg0, s32 arg1);

extern "C" void func_001F7110(void *arg0, s32 arg1) {
    (void)arg0;
    func_001F7028(arg1, 0x24);
}
