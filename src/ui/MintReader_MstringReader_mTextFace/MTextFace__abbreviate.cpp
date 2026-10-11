typedef int s32;

struct Buf00109C40 {
    s32 unk0;
    char pad4[0xC];
};

extern "C" void func_00243620(struct Buf00109C40 *arg0);
extern "C" void func_002457B0(s32 arg0);
extern "C" void func_002435C8(struct Buf00109C40 *arg0, s32 arg1);

extern "C" void MTextFace__abbreviate(void) {
    struct Buf00109C40 buf;

    func_00243620(&buf);
    func_002457B0(buf.unk0);
    func_002435C8(&buf, 2);
}
