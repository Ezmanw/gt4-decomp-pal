typedef int s32;

struct Buf00109C40 {
    s32 unk0;
    char pad4[0xC];
};

extern "C" void func_002D26F0(struct Buf00109C40 *arg0);
extern "C" void func_002D2D50(s32 arg0);
extern "C" void func_002D2698(struct Buf00109C40 *arg0, s32 arg1);

extern "C" void MScrollWindow__updateGeometry(void) {
    struct Buf00109C40 buf;

    func_002D26F0(&buf);
    func_002D2D50(buf.unk0);
    func_002D2698(&buf, 2);
}
