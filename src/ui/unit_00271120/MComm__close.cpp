typedef int s32;

struct Buf00109C40 {
    s32 unk0;
    char pad4[0xC];
};

extern "C" void func_00271078(struct Buf00109C40 *arg0);
extern "C" void func_00271F98(s32 arg0);
extern "C" void func_00271020(struct Buf00109C40 *arg0, s32 arg1);

extern "C" void MComm__close(void) {
    struct Buf00109C40 buf;

    func_00271078(&buf);
    func_00271F98(buf.unk0);
    func_00271020(&buf, 2);
}
