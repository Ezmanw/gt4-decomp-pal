typedef int s32;

struct Buf00109C40 {
    s32 unk0;
    char pad4[0xC];
};

extern "C" void func_0023DFA0(struct Buf00109C40 *arg0);
extern "C" void func_0023FCA0(s32 arg0);
extern "C" void func_0023DF48(struct Buf00109C40 *arg0, s32 arg1);

extern "C" void MSound__stopStream(void) {
    struct Buf00109C40 buf;

    func_0023DFA0(&buf);
    func_0023FCA0(buf.unk0);
    func_0023DF48(&buf, 2);
}
