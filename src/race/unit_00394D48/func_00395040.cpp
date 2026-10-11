typedef int s32;

struct Obj00394D48 {
    char pad[4];
    s32 unk4;
};

extern "C" void func_00396BB0(s32 arg0);
extern "C" void func_00396B00(s32 arg0, void *arg1);

extern "C" void func_00395040(struct Obj00394D48 *arg0) {
    struct Obj00394D48 *s0 = arg0;
    func_00396BB0(s0->unk4);
    func_00396B00(s0->unk4, (char *)s0 + 0x94);
}
