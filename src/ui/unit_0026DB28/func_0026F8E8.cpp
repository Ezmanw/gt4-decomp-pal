struct Vec4 {
    float x, y, z, w;
};

extern "C" void func_0026F788(void *self, float *x, float *y, float *z, float *w);

extern "C" void func_0026F8E8(void *self, Vec4 *a, Vec4 *b) {
    func_0026F788(self, &a->x, &a->y, &a->z, &a->w);
    func_0026F788(self, &b->x, &b->y, &b->z, &b->w);
}
