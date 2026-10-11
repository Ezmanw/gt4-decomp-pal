extern "C" void func_003881E8(void *arg0, int arg1, int arg2);
extern "C" void func_0012BFC8(void *arg0);
extern "C" void func_0012BFD8(int arg0);
extern "C" void func_0010FE48(const char *arg0);

struct VEntry {
    short delta;
    short pad;
    void (*fn)(void *);
};

struct func_001141D0_arg0 {
    char pad0[0x64];
    void *unk64;
    char pad68[0x4];
    void *unk6C;
    char pad70[0xCD8];
    int unkD48;
};
struct func_001141D0_s1 {
    char pad0[0xDC];
    int unkDC;
};

extern "C" void func_001141D0(void *arg0) {
    void *s1 = ((struct func_001141D0_arg0 *)arg0)->unk6C;
    ((struct func_001141D0_s1 *)s1)->unkDC = 1;
    ((struct func_001141D0_arg0 *)arg0)->unkD48 = 1;
    func_003881E8(arg0, 4, 1);
    func_0012BFC8(arg0);
    func_0012BFD8(1);
    func_0010FE48("quick-mt");
    func_0012BFC8(0);

    void *vtbl = ((struct func_001141D0_arg0 *)arg0)->unk64;
    VEntry *entry = (VEntry *)((char *)vtbl + 0x2C0);
    entry->fn((char *)arg0 + entry->delta);

    ((struct func_001141D0_arg0 *)arg0)->unkD48 = 0;
    ((struct func_001141D0_s1 *)s1)->unkDC = 0;
}
