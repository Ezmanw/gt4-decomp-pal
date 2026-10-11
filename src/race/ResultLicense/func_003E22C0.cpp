typedef int s32;
typedef short s16;

struct VEntry {
    s16 delta;
    s16 index;
    void *(*fn)(void *, s32);
};

struct VObj {
    char pad[0x64];
    char *vtbl;
};

struct Arg {
    char pad[0x84];
    VObj *obj;
};

extern "C" void func_00372370(void *, s32);

extern "C" void func_003E22C0(void *arg0, Arg *arg1) {
    VObj *o = arg1->obj;
    VEntry *e = (VEntry *)(o->vtbl + 0xD0);
    func_00372370(e->fn((char *)o + e->delta, 0), 0);
}
