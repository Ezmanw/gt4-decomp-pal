typedef int s32;
typedef long long s64;

struct Obj {
    char pad[0x98];
    s64 unk98;
} __attribute__((aligned(8)));

extern char D_006235A8;

extern "C" s32 func_004441D8(void *arg0, s64 arg1);

extern "C" s32 SPEC_DATABASE__RaceSpec__getRaceLabel(Obj *arg0) {
    return func_004441D8(&D_006235A8, arg0->unk98);
}
