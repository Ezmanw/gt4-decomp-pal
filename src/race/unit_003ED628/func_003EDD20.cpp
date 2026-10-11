typedef int s32;

struct List;

extern List D_00621F58;

extern "C" void func_00463CE0(List *arg0, s32 *arg1);

extern "C" void func_003EDD20(s32 *arg0) {
    if (arg0 != 0) {
        func_00463CE0(&D_00621F58, arg0);
    }
}
