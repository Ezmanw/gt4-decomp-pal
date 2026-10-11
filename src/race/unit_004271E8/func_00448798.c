typedef int s32;
extern char D_006235A8[];
char **func_00444388(char *a, s32 b);
s32 func_00448798(s32 arg0) {
    char **p = func_00444388(D_006235A8, arg0);
    if (p == 0) return -1;
    return *(s32 *)(*p + 4);
}
