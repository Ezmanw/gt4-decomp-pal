typedef int s32;

struct Obj {
    char pad[8];
    s32 unk8;
};

extern "C" void func_00490338(Obj *arg0);

extern "C" void func_00490378(Obj *arg0) {
    s32 count = arg0->unk8;
    if (count > 0) {
        s32 i = count;
        do {
            i--;
            func_00490338(arg0);
        } while (i != 0);
    }
}
