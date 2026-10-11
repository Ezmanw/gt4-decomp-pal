typedef int s32;

struct Buf00109C40 {
    s32 unk0;
    char pad4[0xC];
};

extern "C" void func_001DC930(struct Buf00109C40 *arg0);
extern "C" void func_001FBAA8(s32 arg0);
extern "C" void func_001DC638(struct Buf00109C40 *arg0, s32 arg1);

extern "C" void func_00109C48(void) {
    struct Buf00109C40 buf;

    func_001DC930(&buf);
    func_001FBAA8(buf.unk0);
    func_001DC638(&buf, 2);
}
