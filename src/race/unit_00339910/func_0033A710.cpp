typedef int s32;

struct Out {
    s32 unk0;
    s32 unk4;
};

extern "C" void func_0045B740(Out *out, s32 arg1, s32 arg2, const char *name);
extern "C" void func_003C2D60(s32 arg0, s32 arg1);

extern "C" void func_0033A710(s32 arg0, s32 arg1, s32 arg2) {
    Out sp;

    func_0045B740(&sp, arg1, arg0, "GDGT");
    if (sp.unk4 >= 0) {
        func_003C2D60(arg2, arg0);
    }
}
