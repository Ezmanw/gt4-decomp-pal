typedef int s32;

struct VEntry { short delta; short index; void (*fn)(void *); };
struct Big { char pad[0x10140]; VEntry *vtbl; };
struct Obj { char pad[0x6C]; void *f6C; Big *f70; };
extern "C" void func_003C0B38(void *);

static inline void vcall31(Big *b) {
    VEntry *e = b->vtbl + 32;
    e->fn((char *)b + e->delta);
}

extern "C" void RaceBase__virtual_85(Obj *o) {
    vcall31(o->f70);
    func_003C0B38(o->f6C);
}
