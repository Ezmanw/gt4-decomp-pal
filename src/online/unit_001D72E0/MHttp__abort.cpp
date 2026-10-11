typedef int s32;

struct Buf00109C40 {
    s32 unk0;
    char pad4[0xC];
};

extern "C" void func_001D6F18(struct Buf00109C40 *arg0);
extern "C" void func_001D9C98(s32 arg0);
extern "C" void func_001D6EC0(struct Buf00109C40 *arg0, s32 arg1);

extern "C" void MHttp__abort(void) {
    struct Buf00109C40 buf;

    func_001D6F18(&buf);
    func_001D9C98(buf.unk0);
    func_001D6EC0(&buf, 2);
}
