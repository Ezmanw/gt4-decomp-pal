typedef int s32;

struct Inner {
    char pad0[0x10];
    s32 unk10;
};

struct Buf00109C40 {
    struct Inner *ptr;
    char pad4[0xC];
};

extern "C" s32 func_0019E530(struct Buf00109C40 *arg0);
extern "C" void func_004382D0(s32 arg0);
extern "C" void func_0019E4D8(struct Buf00109C40 *arg0, s32 arg1);

extern "C" void MPlayList__initShuffle(void) {
    struct Buf00109C40 buf;
    struct Inner *p;

    func_0019E530(&buf);
    p = buf.ptr;
    func_004382D0(p->unk10);
    func_0019E4D8(&buf, 2);
}
