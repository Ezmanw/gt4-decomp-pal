typedef int s32;

struct Buf00109C40 {
    s32 unk0;
    char pad4[0xC];
};

extern "C" void func_002CCA78(struct Buf00109C40 *arg0);
extern "C" void func_002CDC18(s32 arg0);
extern "C" void func_002CCA20(struct Buf00109C40 *arg0, s32 arg1);

extern "C" void MRotateActor__warp(void) {
    struct Buf00109C40 buf;

    func_002CCA78(&buf);
    func_002CDC18(buf.unk0);
    func_002CCA20(&buf, 2);
}
