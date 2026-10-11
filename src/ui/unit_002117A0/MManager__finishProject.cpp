typedef int s32;

struct Buf00109C40 {
    s32 unk0;
    char pad4[0xC];
};

extern "C" void func_00211520(struct Buf00109C40 *arg0);
extern "C" void func_00219B48(s32 arg0);
extern "C" void func_002114C8(struct Buf00109C40 *arg0, s32 arg1);

extern "C" void MManager__finishProject(void) {
    struct Buf00109C40 buf;

    func_00211520(&buf);
    func_00219B48(buf.unk0);
    func_002114C8(&buf, 2);
}
