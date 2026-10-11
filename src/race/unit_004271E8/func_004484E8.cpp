typedef int s32;

struct Loc {
    s32 unk0;
    s32 unk4;
};

extern s32 D_0062378C;

extern "C" s32 SPEC_DATABASE__GetCarNameInfo(void *, Loc *);
extern "C" char *func_0044A050(s32, s32);
extern "C" char *func_005A609C(char *, const char *);

extern "C" void func_004484E8(void *self, char *out) {
    Loc loc;
    if (SPEC_DATABASE__GetCarNameInfo(self, &loc))
        func_005A609C(out, func_0044A050(D_0062378C, loc.unk4));
}
