typedef short s16;
typedef int s32;

struct VEntry { s16 delta; s16 index; void (*fn)(void *); };
struct VObj { s32 m0; VEntry *vtbl; };
struct Guard { VObj *p; s32 pad[3]; };
extern "C" void func_002F68F8(Guard *);
extern "C" void func_002F68A0(Guard *, s32);

extern "C" void FileIO__close(void) {
    Guard g;
    func_002F68F8(&g);
    {
        VObj *o = g.p;
        VEntry *e = (VEntry *)((char *)o->vtbl + 0x1B0);
        e->fn((char *)o + e->delta);
    }
    func_002F68A0(&g, 2);
}
