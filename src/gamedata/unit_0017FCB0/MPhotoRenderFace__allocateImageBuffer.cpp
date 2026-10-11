typedef int s32;

struct Buf00109C40 {
    s32 unk0;
    char pad4[0xC];
};

extern "C" void func_001978F8(struct Buf00109C40 *arg0);
extern "C" void func_0019AF18(s32 arg0);
extern "C" void func_001978A0(struct Buf00109C40 *arg0, s32 arg1);

extern "C" void MPhotoRenderFace__allocateImageBuffer(void) {
    struct Buf00109C40 buf;

    func_001978F8(&buf);
    func_0019AF18(buf.unk0);
    func_001978A0(&buf, 2);
}
