typedef int s32;

struct Buf00109C40 {
    s32 unk0;
    char pad4[0xC];
};

extern "C" void func_00137DC0(struct Buf00109C40 *arg0);
extern "C" void func_0013A478(s32 arg0);
extern "C" void func_00137D68(struct Buf00109C40 *arg0, s32 arg1);

extern "C" void MCarFace__syncLoading(void) {
    struct Buf00109C40 buf;

    func_00137DC0(&buf);
    func_0013A478(buf.unk0);
    func_00137D68(&buf, 2);
}
