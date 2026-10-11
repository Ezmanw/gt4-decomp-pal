typedef int s32;

extern "C" void func_001C5028(void *arg0);
extern "C" s32 func_001C5278(void *arg0);

extern "C" void func_001C5310(void *arg0) {
    void *s0 = arg0;
    func_001C5028(arg0);
    do {
    } while (func_001C5278(s0) != 0);
}
