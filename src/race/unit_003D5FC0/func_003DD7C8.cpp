typedef int s32;

extern "C" void StrobeHandler__readFile(void *arg0, const char *arg1, s32 arg2);
extern "C" void func_00474098(s32 arg0);
extern "C" void func_003EC190(s32 arg0);
extern "C" void func_004731C0(void *arg0);
extern "C" void func_00474588(s32 arg0, void *arg1);

struct Obj {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Local1 {
    char pad[0x10];
    s32 unk10;
};

struct Local2 {
    char data[0x30];
};

extern "C" void func_003DD7C8(Obj *arg0, s32 arg1) {
    Local1 local1;
    Local2 local2;

    arg0->unk8 = arg1;
    if (arg0->unk0 == 0 && arg0->unk4 == 0) {
        StrobeHandler__readFile(&local1, "racemonitor.strb", 1);
        arg0->unk0 = local1.unk10;
        func_00474098(arg0->unk0);
        func_003EC190(arg0->unk0);
        func_004731C0(&local2);
        func_00474588(arg0->unk0, &local2);
    }
}
