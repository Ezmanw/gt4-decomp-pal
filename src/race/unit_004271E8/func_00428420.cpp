extern "C" int func_00427AF0(int);
extern "C" void func_00428360(void *self, int a, float b, float c, float d, float e, int f, float g);

extern "C" void func_00428420(void *self, int unused, float b, float c, float d, float e, int f, float g) {
    int p = *(int *)((char *)self + 4);
    if (p != 0) {
        func_00428360(self, func_00427AF0(p), b, c, d, e, f, g);
    }
}
