typedef int s32;
typedef float f32;
void func_00349570(void);
void func_00343E50(char *a, f32 b);
void func_0034A0A0(char *arg0) {
    char *t;
    func_00349570();
    t = arg0 + 0x104;
    *(f32 *)(t + 0x494) = *(f32 *)(t + 0x488);
    func_00343E50(arg0, *(f32 *)(t + 0x48C));
}
