typedef int s32;

struct Obj;

extern "C" void func_001DC638(void *arg0, int arg1);
extern "C" void func_001DC930(void *arg0);
extern "C" void func_001FA410(struct Obj *arg0);

struct Buf {
    struct Obj *ptr;
    char pad0[0xC];
};

extern "C" void func_00109C78(s32 arg0) {
    struct Buf buf;

    if (arg0 == 0xFF1B) {
        func_001DC930(&buf);
        func_001FA410(buf.ptr);
        func_001DC638(&buf, 2);
    }
}
