typedef short s16;
typedef int s32;

struct VEntry { s16 delta; s16 index; void (*fn)(void *); };
struct VObj { s32 m0; VEntry *vtbl; };
struct Guard { VObj *p; s32 pad[3]; };
extern "C" void func_00221C80(Guard *);
extern "C" void func_00221C28(Guard *, s32);

extern "C" void MNetConf__InitProperties(void) {
    Guard g;
    func_00221C80(&g);
    {
        VObj *o = g.p;
        VEntry *e = (VEntry *)((char *)o->vtbl + 0x318);
        e->fn((char *)o + e->delta);
    }
    func_00221C28(&g, 2);
}
