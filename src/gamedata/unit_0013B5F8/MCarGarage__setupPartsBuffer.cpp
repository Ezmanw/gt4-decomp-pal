typedef int s32;

struct Buf00109C40 {
    s32 unk0;
    char pad4[0xC];
};

extern "C" void func_0013BDC8(struct Buf00109C40 *arg0);
extern "C" void func_00147D58(s32 arg0);
extern "C" void func_0013BD70(struct Buf00109C40 *arg0, s32 arg1);

extern "C" void MCarGarage__setupPartsBuffer(void) {
    struct Buf00109C40 buf;

    func_0013BDC8(&buf);
    func_00147D58(buf.unk0);
    func_0013BD70(&buf, 2);
}
