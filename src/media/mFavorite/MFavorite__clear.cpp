typedef int s32;

struct Inner {
    char pad0[0x10];
    s32 unk10;
};

struct Buf00109C40 {
    struct Inner *ptr;
    char pad4[0xC];
};

extern "C" s32 func_001BFED0(struct Buf00109C40 *arg0);
extern "C" void func_004306D8(s32 arg0);
extern "C" void func_001BFE78(struct Buf00109C40 *arg0, s32 arg1);

extern "C" void MFavorite__clear(void) {
    struct Buf00109C40 buf;
    struct Inner *p;

    func_001BFED0(&buf);
    p = buf.ptr;
    func_004306D8(p->unk10);
    func_001BFE78(&buf, 2);
}
