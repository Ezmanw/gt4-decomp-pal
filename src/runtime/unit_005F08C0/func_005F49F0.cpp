extern "C" void func_003461D8(void *self, int delta);

extern "C" void func_005F49F0(void *self, signed char *cur, signed char *next) {
    func_003461D8(self, *next - *cur);
    *cur = *next;
}
