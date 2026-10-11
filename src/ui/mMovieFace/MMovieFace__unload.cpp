typedef int s32;

struct Buf00109C40 {
    s32 unk0;
    char pad4[0xC];
};

extern "C" void func_0021DB28(struct Buf00109C40 *arg0);
extern "C" void func_0021FF60(s32 arg0);
extern "C" void func_0021DAD0(struct Buf00109C40 *arg0, s32 arg1);

extern "C" void MMovieFace__unload(void) {
    struct Buf00109C40 buf;

    func_0021DB28(&buf);
    func_0021FF60(buf.unk0);
    func_0021DAD0(&buf, 2);
}
