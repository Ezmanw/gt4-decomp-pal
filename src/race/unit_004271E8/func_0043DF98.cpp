extern "C" void *func_0043A770(void *self);
extern "C" void func_00444508(void *self);
extern "C" void *func_003435E8(void *self);
extern "C" char D_00688280[];

extern "C" void *func_0043DF98(void *arg0) {
    func_0043A770(arg0);
    *(void **)arg0 = D_00688280;

    char *p = (char *)arg0 + 8;
    for (int i = 2; i != -1; i--) {
        func_00444508(p);
        p += 0x178;
    }

    return func_003435E8((char *)arg0 + 0x4A0);
}
