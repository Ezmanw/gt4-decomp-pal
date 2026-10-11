typedef int s32;

struct Inner {
    char pad0[0x10];
    s32 unk10;
};

struct Buf00109C40 {
    struct Inner *ptr;
    char pad4[0xC];
};

extern "C" s32 func_0015D8A0(struct Buf00109C40 *arg0);
extern "C" void func_00434AE0(s32 arg0);
extern "C" void func_0015D848(struct Buf00109C40 *arg0, s32 arg1);

extern "C" void MDemonstration__resetMovieCount(void) {
    struct Buf00109C40 buf;
    struct Inner *p;

    func_0015D8A0(&buf);
    p = buf.ptr;
    func_00434AE0(p->unk10);
    func_0015D848(&buf, 2);
}
