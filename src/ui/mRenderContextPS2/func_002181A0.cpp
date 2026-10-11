struct Entry { int w[15]; };
struct Table { Entry e[2]; int m78; };
extern Table D_0061850C;
struct Ctx { int m0, m4; };
extern "C" void pglPushAttrib(int);
extern "C" void func_004A53F8(void);
extern "C" int func_00105398(Ctx *, Entry *);
extern "C" void func_00105548(Ctx *);
extern "C" void func_00105AF8(Ctx *, Entry *, int, int);
extern "C" void func_001056C0(Ctx *);

extern "C" void func_002181A0(void *self, Ctx *c)
{
    pglPushAttrib(1);
    Entry *e = &D_0061850C.e[D_0061850C.m78];
    func_00105398(c, e);
    c->m4 = 1;
    func_00105548(c);
    func_00105AF8(c, e, 0, 0);
    func_001056C0(c);
    func_004A53F8();
}
