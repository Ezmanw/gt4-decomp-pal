typedef int s32;

struct Buf00109C40 {
    s32 unk0;
    char pad4[0xC];
};

extern "C" void func_00248DA0(struct Buf00109C40 *arg0);
extern "C" void func_0024A110(s32 arg0);
extern "C" void func_00248D48(struct Buf00109C40 *arg0, s32 arg1);

extern "C" void MToolTipFace__attach(void) {
    struct Buf00109C40 buf;

    func_00248DA0(&buf);
    func_0024A110(buf.unk0);
    func_00248D48(&buf, 2);
}
