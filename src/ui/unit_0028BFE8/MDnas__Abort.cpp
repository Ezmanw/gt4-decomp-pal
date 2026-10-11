typedef int s32;

struct Buf {
    void *ptr;
    char pad[0xC];
};

extern "C" void func_0028BF00(struct Buf *arg0);
extern "C" void func_0032EFE0(void *arg0);
extern "C" void func_0028BEA8(struct Buf *arg0, s32 arg1);

extern "C" void MDnas__Abort(void) {
    struct Buf buf;

    func_0028BF00(&buf);
    func_0032EFE0((char *)buf.ptr + 0x10);
    func_0028BEA8(&buf, 2);
}
