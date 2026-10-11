extern "C" void func_004917F0(void *mgr, const char *fmt, __builtin_va_list args, int one, int zero);

extern "C" void func_00490D28(void *mgr, const char *fmt, ...)
{
    __builtin_va_list args;
    __builtin_stdarg_start(args, fmt);
    func_004917F0(mgr, fmt, args, 1, 0);
}
