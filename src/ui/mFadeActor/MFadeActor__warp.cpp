typedef int s32;

struct Buf00109C40 {
    s32 unk0;
    char pad4[0xC];
};

extern "C" void func_0020B458(struct Buf00109C40 *arg0);
extern "C" void func_0020C4A0(s32 arg0);
extern "C" void func_0020B400(struct Buf00109C40 *arg0, s32 arg1);

extern "C" void MFadeActor__warp(void) {
    struct Buf00109C40 buf;

    func_0020B458(&buf);
    func_0020C4A0(buf.unk0);
    func_0020B400(&buf, 2);
}
