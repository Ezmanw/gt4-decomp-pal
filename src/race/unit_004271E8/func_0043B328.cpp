typedef long long s64;
extern "C" {
void func_00435D28(char *a, s64 b);
s64 func_0043B2E0(void);
}
extern "C" void func_0043B328(char *arg0, s64 arg1) {
    char *p = arg0 + 0xB8E8;
    func_00435D28(p, arg1 + func_0043B2E0());
}
