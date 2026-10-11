struct Slot {
    char data[0x24];
};

extern int D_00623A74;
extern Slot D_008485C0[3];

extern "C" void free(int h);
extern "C" void func_004630E8(int a);
extern "C" void func_00462D38(Slot *s);
extern "C" void func_00463260(void);
extern "C" void func_00463280(void);

extern "C" void func_004635D8(void) {
    int *h = &D_00623A74;
    if (*h) {
        free(*h);
        *h = 0;
    }
    func_004630E8(1);
    func_00462D38(&D_008485C0[0]);
    func_00462D38(&D_008485C0[1]);
    func_00462D38(&D_008485C0[2]);
    func_00463260();
    func_00463280();
}
