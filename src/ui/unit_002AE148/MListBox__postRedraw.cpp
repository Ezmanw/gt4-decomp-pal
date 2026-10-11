typedef int s32;

struct Buf00109C40 {
    s32 unk0;
    char pad4[0xC];
};

extern "C" void func_002AEB18(struct Buf00109C40 *arg0);
extern "C" void func_002B57C0(s32 arg0);
extern "C" void func_002AEAC0(struct Buf00109C40 *arg0, s32 arg1);

extern "C" void MListBox__postRedraw(void) {
    struct Buf00109C40 buf;

    func_002AEB18(&buf);
    func_002B57C0(buf.unk0);
    func_002AEAC0(&buf, 2);
}
