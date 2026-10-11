typedef int s32;

struct Buf { char b[0x1E0]; };
extern "C" void func_004497B8(void *, s32, Buf *);
extern "C" void func_00449978(void *, Buf *, s32);

extern "C" void func_00449770(void *self, s32 a, s32 b) {
    Buf buf;
    func_004497B8(self, a, &buf);
    func_00449978(self, &buf, b);
}
