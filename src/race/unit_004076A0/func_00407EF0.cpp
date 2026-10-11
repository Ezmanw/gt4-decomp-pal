typedef int s32;

struct List;

struct Tmp {
    s32 w[4];
};

extern "C" s32 func_00407E90(List *, s32);
extern "C" void func_00407DC0(Tmp *, s32);
extern "C" s32 DisplayRText__getRTextStr(Tmp *);

extern "C" s32 func_00407EF0(List *list, s32 index) {
    s32 n = func_00407E90(list, index);
    if (n < 0)
        return 0;
    Tmp t;
    func_00407DC0(&t, n % 13);
    return DisplayRText__getRTextStr(&t);
}
