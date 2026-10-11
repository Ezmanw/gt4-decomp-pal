struct S003789E8 {
    char pad[4];
    int unk4;
};

extern "C" void func_00371D18(void *arg0);
extern "C" void func_003FB010(void *arg0, int arg1);
extern "C" void func_00371D20(void *arg0, void *arg1);

extern "C" void func_00378D10(void *arg0, void *arg1, void *arg2, S003789E8 *arg3) {
    void *s0 = (char *) arg0 + 0xDD0;
    void *s1 = (char *) arg0 + 0xE28;
    if (arg3->unk4 != 0) {
        func_00371D18(s1);
    }
    func_003FB010(s0, 1);
    func_00371D20(s1, s0);
}
