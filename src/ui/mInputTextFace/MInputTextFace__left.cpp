typedef int s32;

struct Buf00109C40 {
    s32 unk0;
    char pad4[0xC];
};

extern "C" void func_002A5F70(struct Buf00109C40 *arg0);
extern "C" void func_002A7C68(s32 arg0);
extern "C" void func_002A5F18(struct Buf00109C40 *arg0, s32 arg1);

extern "C" void MInputTextFace__left(void) {
    struct Buf00109C40 buf;

    func_002A5F70(&buf);
    func_002A7C68(buf.unk0);
    func_002A5F18(&buf, 2);
}
