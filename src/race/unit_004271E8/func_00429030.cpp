extern "C" int func_00427AF0(int);
extern "C" void func_00428F78(void *self, int a, int b, float c, int d, int e, float f);

extern "C" void func_00429030(void *self, int unused, int b, float c, int d, int e, float f) {
    int p = *(int *)((char *)self + 4);
    if (p != 0) {
        func_00428F78(self, func_00427AF0(p), b, c, d, e, f);
    }
}
