struct Text5 { char c[5]; };
struct Owner { char pad[0x14]; int id; };

extern void *D_00624984;
extern "C" const Text5 D_0068F520;
extern "C" const char D_0068F528[];
extern "C" int func_004415C0(int id);
extern "C" int func_00446440(int x);
extern "C" void func_00490E18(void *mgr, char *buf, int size, int value, const char *fmt);

extern "C" void func_00146360(Owner *o, int size, char *buf) {
    int r = func_00446440(func_004415C0(o->id));
    if (r == 0) {
        *(Text5 *)buf = D_0068F520;
        return;
    }
    func_00490E18(D_00624984, buf, size, r, D_0068F528);
}
