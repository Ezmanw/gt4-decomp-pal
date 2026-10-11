typedef int s32;

struct Obj {
    char pad0[4];
};

typedef void *(Obj::*PM)(void);

struct Handle {
    Obj *p;
    char pad[0xC];
};

extern "C" void func_002CA850(void *arg0, int arg1);
extern "C" void func_002CA8A8(void *arg0, void *arg1);
extern "C" void func_002FC9C8(void *arg0, int arg1);
extern "C" void func_002FE3D0(void *arg0, void *arg1);
extern "C" void func_00328700(void *p);
extern "C" void func_00328750(void *p);

static inline Obj *hget(Handle *h) { return h->p; }

extern "C" void func_005E9A90(void **arg0, void *arg1, s32 arg2, s32 arg3, PM pmf) {
    Handle h;
    Handle o;
    Handle *po = &o;

    func_002CA8A8(po, arg1);
    {
        void *r = (hget(po)->*pmf)();
        Handle *ph = &h;
        func_002FE3D0(ph, r);
        if ((void *)arg0 != (void *)ph) {
            void *p = ph->p;
            if (p != 0) {
                func_00328700(p);
            }
            if (*arg0 != 0) {
                func_00328750(*arg0);
            }
            *arg0 = p;
        }
        func_002FC9C8(ph, 2);
    }
    func_002CA850(po, 2);
}
