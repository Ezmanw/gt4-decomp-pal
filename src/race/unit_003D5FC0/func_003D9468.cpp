extern "C" void func_004755A8(void *p, int a);
extern "C" void func_00475B98(void *p);

struct Flags {
    unsigned int bits;
    void clear() { bits &= ~0xFF; }
};

struct Obj {
    char pad0[4];
    void *m4;
    char pad8[0x30];
    int m38;
    char pad3C[0x68];
    unsigned int mA4;
    char padA8[0x2B0];
    Flags m358;
};

extern "C" void func_003D9468(Obj *o) {
    o->m38 = 0;
    func_004755A8(o->m4, 1);
    func_00475B98(o->m4);
    o->mA4 = (o->mA4 & 0xFFFF00FF) | 0x100;
    o->m358.clear();
}
