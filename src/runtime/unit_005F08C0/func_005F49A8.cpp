/* compiler: ee-gcc2.96-no-strict-aliasing */
typedef unsigned char u8;

extern "C" void func_003461D8(void *, int);

extern "C" void func_005F49A8(void *self, u8 *cur, u8 *next) {
    func_003461D8(self, *next - *cur);
    *cur = *next;
}
