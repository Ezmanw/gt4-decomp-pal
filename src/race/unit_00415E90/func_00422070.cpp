typedef int s32;

struct R { s32 w[9]; };
extern "C" void func_00421FD8(R *, void *);
extern "C" void *memcpy(void *, const void *, s32);

extern "C" void func_00422070(void *self, void *out) {
    R t;
    func_00421FD8(&t, self);
    memcpy(out, &t, 0x24);
}
