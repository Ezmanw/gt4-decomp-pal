typedef int s32;
typedef float f32;
void func_00344198(void *);
void func_003457B0(void *);
void func_00345B78(void *);
void func_0034A7C0(void *);
void func_0034A8E0(void *);
void func_003501E8(void *);
void func_00354050(void *);
void func_0035D4C0(void *);
void func_0035DF90(void *);
void func_003669C8(void *);
void func_00366BA0(void *);
void func_003673F8(void *);
void func_0036A740(void);
void func_0036AA08(void *);
void func_0036B378(void *);
void func_0036BD38(void *);
void func_0036CCA8(char *, char *, char *, f32, f32, f32);
void func_0036D198(void *);

void func_00344688(char *arg0) {
    char *temp_v0;

    func_0036A740();
    func_0036AA08(arg0);
    func_0036B378(arg0);
    func_0036BD38(arg0);
    func_0036D198(arg0);
    func_00354050(arg0);
    func_003673F8(arg0);
    func_003501E8(arg0);
    func_003669C8(arg0);
    func_003457B0(arg0);
    func_00345B78(arg0);
    temp_v0 = arg0 + 0x104;
    func_0036CCA8(arg0 + 0x110, arg0 + 0x11C, arg0 + 0x128, *(f32 *)(temp_v0 + 0x568), *(f32 *)(temp_v0 + 0x56C), *(f32 *)(temp_v0 + 0x570));
    func_0035D4C0(arg0);
    func_0035DF90(arg0);
    func_00344198(arg0);
    func_00366BA0(arg0);
    func_0034A7C0(arg0);
    func_0034A8E0(arg0);
}
