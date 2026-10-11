typedef int s32;

struct Inner {
    char pad0[0x10];
    s32 unk10;
};

struct Buf00109C40 {
    struct Inner *ptr;
    char pad4[0xC];
};

extern "C" s32 func_0022AE78(struct Buf00109C40 *arg0);
extern "C" void func_00251D60(s32 arg0);
extern "C" void func_0022AE20(struct Buf00109C40 *arg0, s32 arg1);

extern "C" void MRenderContext__finish(void) {
    struct Buf00109C40 buf;
    struct Inner *p;

    func_0022AE78(&buf);
    p = buf.ptr;
    func_00251D60(p->unk10);
    func_0022AE20(&buf, 2);
}
