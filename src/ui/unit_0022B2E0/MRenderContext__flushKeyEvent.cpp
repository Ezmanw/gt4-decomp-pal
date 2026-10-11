typedef int s32;

struct Target {
    char pad[0x10];
    s32 id;
};

struct Handle {
    Target *p;
    s32 pad[3];
};

extern "C" Handle *func_0022AE78(Handle *);
extern "C" void func_0022AE20(Handle *, s32);
extern "C" s32 func_002A9700(void);
extern "C" void func_00250CF0(s32, s32);

extern "C" void MRenderContext__flushKeyEvent(void) {
    Handle h;
    func_0022AE78(&h);
    s32 id = h.p->id;
    func_00250CF0(id, func_002A9700());
    func_0022AE20(&h, 2);
}
