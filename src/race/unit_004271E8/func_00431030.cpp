typedef int s32;
extern "C" void func_00430CD0(s32 *p);
struct Root { virtual ~Root(); };
struct func_0043A770 : Root {
    func_0043A770();
    virtual ~func_0043A770();
};
struct D_00687A20 : func_0043A770 {
    s32 a[0x300];
    D_00687A20();
    virtual ~D_00687A20();
};
D_00687A20::D_00687A20() {
    s32 n = 0x2FF;
    s32 *p = a;
    do { func_00430CD0(p); p++; n--; } while (n != -1);
}
