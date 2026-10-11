typedef int s32;
typedef long long s64;

struct Obj {
    char pad[0x10];
    s64 unk10;
} __attribute__((aligned(8)));

extern char D_006235A8;

extern "C" s32 func_00444330(void *arg0, s64 arg1);

extern "C" s32 func_00445B80(Obj *arg0) {
    return func_00444330(&D_006235A8, arg0->unk10);
}
