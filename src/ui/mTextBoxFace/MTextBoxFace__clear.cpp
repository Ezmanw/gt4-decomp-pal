typedef int s32;

struct Buf00109C40 {
    s32 unk0;
    char pad4[0xC];
};

extern "C" void func_002E4D30(struct Buf00109C40 *arg0);
extern "C" void func_002E5648(s32 arg0);
extern "C" void func_002E4CD8(struct Buf00109C40 *arg0, s32 arg1);

extern "C" void MTextBoxFace__clear(void) {
    struct Buf00109C40 buf;

    func_002E4D30(&buf);
    func_002E5648(buf.unk0);
    func_002E4CD8(&buf, 2);
}
