typedef int s32;
typedef float f32;
void func_00363370(void *a, s32 b, f32 c, f32 d, f32 e);
void func_00345748(void *a);
void func_00363810(void *a);
void func_003F4E90(void *a);
void func_0045BC98(void *a, void *b, s32 c);
void func_00345720(void *a);
void func_003F7510(void *a, s32 b);
void func_003FAE90(char *arg0, f32 fparg0, f32 fparg1, f32 fparg2) {
    char *temp_s0;
    func_00363370(arg0, 0, fparg0, -fparg2, fparg1);
    func_00345748(arg0);
    func_00363810(arg0);
    temp_s0 = *(char **)(arg0 + 4);
    func_003F4E90(temp_s0);
    func_0045BC98(temp_s0 + 0xDA6C, temp_s0, *(s32 *)(temp_s0 + 0xCBD8));
    func_00345720(arg0);
    func_003F7510(arg0, 1);
}
