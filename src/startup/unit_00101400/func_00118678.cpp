extern "C" void func_003881E8(void *arg0, int arg1, int arg2);
extern "C" void func_0012BFC8(void *arg0);
extern "C" void func_0012BFD8(int arg0);
extern "C" void func_0010FE48(const char *arg0);

struct VEntry {
    short delta;
    short pad;
    void (*fn)(void *);
};

struct func_00118678_arg0 {
    char pad0[0x64];
    void *unk64;
    char pad68[0xCE0];
    int unkD48;
};

extern "C" void func_00118678(void *arg0) {
    *(int *)((char *)*(void **)((char *)arg0 + 0x6C) + 0xDC) = 1;
    ((struct func_00118678_arg0 *)arg0)->unkD48 = 1;
    func_003881E8(arg0, 4, 1);
    func_0012BFC8(arg0);
    func_0012BFD8(1);
    func_0010FE48("quick-practice");
    func_0012BFC8(0);

    void *vtbl = ((struct func_00118678_arg0 *)arg0)->unk64;
    VEntry *entry = (VEntry *)((char *)vtbl + 0x2C0);
    entry->fn((char *)arg0 + entry->delta);

    ((struct func_00118678_arg0 *)arg0)->unkD48 = 0;
    *(int *)((char *)*(void **)((char *)arg0 + 0x6C) + 0xDC) = 0;
}
