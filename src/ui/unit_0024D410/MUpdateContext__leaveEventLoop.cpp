typedef int s32;

struct Buf00109C40 {
    s32 unk0;
    char pad4[0xC];
};

extern "C" void func_0024E528(struct Buf00109C40 *arg0);
extern "C" void func_00251FD8(s32 arg0);
extern "C" void func_0024E4D0(struct Buf00109C40 *arg0, s32 arg1);

extern "C" void MUpdateContext__leaveEventLoop(void) {
    struct Buf00109C40 buf;

    func_0024E528(&buf);
    func_00251FD8(buf.unk0);
    func_0024E4D0(&buf, 2);
}
