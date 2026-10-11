typedef int s32;

struct Buf00109C40 {
    s32 unk0;
    char pad4[0xC];
};

extern "C" void func_002BAC90(struct Buf00109C40 *arg0);
extern "C" void func_002BCC58(s32 arg0);
extern "C" void func_002BAC38(struct Buf00109C40 *arg0, s32 arg1);

extern "C" void MModelFace__reset(void) {
    struct Buf00109C40 buf;

    func_002BAC90(&buf);
    func_002BCC58(buf.unk0);
    func_002BAC38(&buf, 2);
}
