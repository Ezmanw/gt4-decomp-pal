typedef int s32;

struct Buf00109C40 {
    s32 unk0;
    char pad4[0xC];
};

extern "C" void func_002C2A28(struct Buf00109C40 *arg0);
extern "C" void func_002C3F10(s32 arg0);
extern "C" void func_002C29D0(struct Buf00109C40 *arg0, s32 arg1);

extern "C" void MMusic__play_002C3660(void) {
    struct Buf00109C40 buf;

    func_002C2A28(&buf);
    func_002C3F10(buf.unk0);
    func_002C29D0(&buf, 2);
}
