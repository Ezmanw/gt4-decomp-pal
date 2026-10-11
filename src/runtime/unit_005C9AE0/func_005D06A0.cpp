typedef int s32;

struct Obj {
    char pad0[4];
};

typedef void (Obj::*PM)(bool);

struct Handle {
    Obj *p;
    char pad[0xC];
};

extern "C" void func_001BC620(void *arg0, int arg1);
extern "C" void func_001BC678(void *arg0, void *arg1);
extern "C" void func_002FC9C8(void *arg0, int arg1);
extern "C" void func_002FCA20(void *arg0, void *arg1);
extern "C" int func_002FE3A8(void *arg0);

static inline Obj *hget(Handle *h) { return h->p; }

static inline bool chk(Handle *ph, void *a3) {
    func_002FCA20(ph, a3);
    return func_002FE3A8(ph->p) != 0;
}

extern "C" void func_005D06A0(void *arg0, void *arg1, s32 arg2, void *arg3, PM pmf) {
    if (arg2 > 0) {
        Handle o;
        Handle h;
        Handle *po = &o;
        Handle *ph;
        func_001BC678(po, arg1);
        ph = &h;
        (hget(po)->*pmf)(chk(ph, arg3));
        func_002FC9C8(ph, 2);
        func_001BC620(po, 2);
    }
}
