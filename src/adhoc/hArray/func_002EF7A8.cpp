typedef unsigned int u32;

extern "C" void func_002EFB20(void *, u32);

extern "C" void func_002EF7A8(void *self, u32 size) {
    u32 n = size + 1;
    u32 p = 1;
    while (p < n)
        p <<= 1;
    func_002EFB20(self, p);
}
