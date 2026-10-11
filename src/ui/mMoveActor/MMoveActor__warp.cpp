typedef int s32;

struct Buf00109C40 {
    s32 unk0;
    char pad4[0xC];
};

extern "C" void func_002C0538(struct Buf00109C40 *arg0);
extern "C" void func_002C19A8(s32 arg0);
extern "C" void func_002C04E0(struct Buf00109C40 *arg0, s32 arg1);

extern "C" void MMoveActor__warp(void) {
    struct Buf00109C40 buf;

    func_002C0538(&buf);
    func_002C19A8(buf.unk0);
    func_002C04E0(&buf, 2);
}
