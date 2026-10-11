typedef int s32;

/* The base class, named after its constructor so that __13func_0043C310 resolves. */
struct func_0043C688 {
    char pad0[8];
    s32 m8;
    func_0043C688(const char *name, const char *type, s32 n);
    virtual ~func_0043C688();
    void func_0043BCA0(s32 n);
};

extern char D_00623408[];

/* No known name: named after its vtable (0x006880C0) so that _vt$10D_006880C0 resolves. */
struct D_006880C0 : func_0043C688 {
    char pad10[0x14];
    char m24;
    D_006880C0();
    virtual ~D_006880C0();
};

D_006880C0::D_006880C0() : func_0043C688(0, D_00623408, m8) {
    func_0043BCA0(0);
    m24 = 1;
}
