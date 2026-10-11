typedef int s32;

extern "C" void func_004514E8(s32 arg0, void *arg1);

extern "C" void func_004515B8(s32 arg0) {
    int sp[4];
    sp[0] = arg0;
    func_004514E8(arg0, sp);
}
