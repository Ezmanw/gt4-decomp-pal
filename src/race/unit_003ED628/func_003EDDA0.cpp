typedef int s32;

struct List;

extern List D_00621F58;
extern char D_00621F78[];

extern "C" s32 *func_003EDB58(char *, s32 *);
extern "C" s32 *func_00463CE0(List *arg0, s32 *arg1);

extern "C" s32 *func_003EDDA0(s32 *arg0) {
    if (arg0 != 0) {
        arg0 = func_003EDB58(D_00621F78, arg0);
        if (arg0 != 0)
            arg0 = func_00463CE0(&D_00621F58, arg0);
    }
    return arg0;
}
