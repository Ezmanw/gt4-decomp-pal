typedef int s32;

struct Buf00109C40 {
    s32 unk0;
    char pad4[0xC];
};

extern "C" void func_002CCA78(struct Buf00109C40 *arg0);
extern "C" void func_002CDBF8(s32 arg0);
extern "C" void func_002CCA20(struct Buf00109C40 *arg0, s32 arg1);

extern "C" void MRotateActor__doFlip(void) {
    struct Buf00109C40 buf;

    func_002CCA78(&buf);
    func_002CDBF8(buf.unk0);
    func_002CCA20(&buf, 2);
}
