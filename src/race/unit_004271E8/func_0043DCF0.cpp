typedef int s32;

extern void *D_00687F90;
extern "C" void func_00438E90(void *, s32);
extern "C" void func_005C1628(void *);
struct VEntry_vcall_0 { short delta; short index; void (*fn)(void *, s32); };
static inline void vcall_0(char *o, s32 a0) {
    VEntry_vcall_0 *e = (VEntry_vcall_0 *)(*(char **)(o + 0x0) + 0x8);
    e->fn(o + e->delta, a0);
}

struct func_0043DCF0_arg0 {
    void *unk0;
};

extern "C" void func_0043DCF0(void *arg0, s32 arg1) {
    ((struct func_0043DCF0_arg0 *)arg0)->unk0 = &D_00687F90;
    if ((char *)arg0 + 0x4 != 0) {
        char *p0 = (char *)arg0 + 0x174;
        while ((char *)arg0 + 0x4 != p0) {
            p0 -= 0xB8;
            vcall_0((char *)p0, 0x2);
        }
    }
    func_00438E90(arg0, 0x0);
    if ((arg1 & 0x1) != 0) {
        return func_005C1628(arg0);
    }
}
