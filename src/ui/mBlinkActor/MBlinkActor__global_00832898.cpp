typedef int s32;

struct VEntry {
    short delta;
    short index;
    void (*fn)(void *);
};

struct Obj {
    char pad0[4];
    char *vtbl;
};

struct OHandle {
    Obj *p;
    char pad[0xC];
};

struct Handle {
    void *p;
    char pad[0xC];
};

extern "C" void func_00255210(void *arg0, int arg1);
extern "C" void func_00255268(void *arg0, void *arg1);
extern "C" void func_00279090(void *arg0, int arg1);
extern "C" void func_002790E8(void *arg0, void *arg1);
extern "C" void func_00279950(Obj *arg0, void *arg1);

extern "C" void MBlinkActor__global_00832898(void *arg0, void *arg1, s32 n, void *arg3) {
    if (n > 0) {
        OHandle h0;
        Handle b;
        Handle *pb;
        func_002790E8(&h0, arg1);
        pb = &b;
        func_00255268(pb, arg3);
        {
            Obj *o = h0.p;
            VEntry *e = (VEntry *)(o->vtbl + 0x190);
            e->fn((char *)o + e->delta);
        }
        func_00279950(h0.p, pb->p);
        func_00255210(pb, 2);
        func_00279090(&h0, 2);
    }
}
