/* compiler: ee-gcc2.96-nosib */
typedef long long s64;

extern "C" void func_00444A08(void *self, s64 v);
extern "C" void func_004447F8(void *self, s64 v);

extern "C" void func_004447B8(void *self, s64 v) {
    if ((v >> 32) == 0x26) {
        func_00444A08(self, v);
    } else {
        func_004447F8(self, v);
    }
}
