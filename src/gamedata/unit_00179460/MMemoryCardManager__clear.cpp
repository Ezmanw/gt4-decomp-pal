typedef int s32;

struct Inner {
    char pad0[0x20];
    s32 unk20;
};

struct Buf00109C40 {
    struct Inner *ptr;
    char pad4[0xC];
};

extern "C" s32 func_00179300(struct Buf00109C40 *arg0);
extern "C" void func_001D2A48(s32 arg0);
extern "C" void func_001792A8(struct Buf00109C40 *arg0, s32 arg1);

extern "C" void MMemoryCardManager__clear(void) {
    struct Buf00109C40 buf;
    struct Inner *p;

    func_00179300(&buf);
    p = buf.ptr;
    func_001D2A48(p->unk20);
    func_001792A8(&buf, 2);
}
