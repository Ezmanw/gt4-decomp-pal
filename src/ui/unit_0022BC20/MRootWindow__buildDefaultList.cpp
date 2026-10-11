typedef int s32;

struct Buf00109C40 {
    s32 unk0;
    char pad4[0xC];
};

extern "C" void func_00232DD0(struct Buf00109C40 *arg0);
extern "C" void RebuildPropagate__structor_0(s32 arg0);
extern "C" void func_00232D78(struct Buf00109C40 *arg0, s32 arg1);

extern "C" void MRootWindow__buildDefaultList(void) {
    struct Buf00109C40 buf;

    func_00232DD0(&buf);
    RebuildPropagate__structor_0(buf.unk0);
    func_00232D78(&buf, 2);
}
