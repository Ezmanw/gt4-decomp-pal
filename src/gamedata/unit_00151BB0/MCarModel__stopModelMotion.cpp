typedef int s32;

struct Buf00109C40 {
    s32 unk0;
    char pad4[0xC];
};

extern "C" void func_00151890(struct Buf00109C40 *arg0);
extern "C" void func_00153EB0(s32 arg0);
extern "C" void func_00151838(struct Buf00109C40 *arg0, s32 arg1);

extern "C" void MCarModel__stopModelMotion(void) {
    struct Buf00109C40 buf;

    func_00151890(&buf);
    func_00153EB0(buf.unk0);
    func_00151838(&buf, 2);
}
