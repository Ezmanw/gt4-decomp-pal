extern "C" void *func_005A48D8(void *p, int c, int n);
extern "C" void func_00371628(void *self);
extern "C" void func_003717E8(void *self, void *a, void *b);

struct Vec3 {
    float x, y, z;
};

extern "C" void func_00371A48(void *self) {
    Vec3 a;
    Vec3 b;
    Vec3 *pa = &a;
    Vec3 *pb = &b;
    func_005A48D8(pa, 0, sizeof(Vec3));
    func_005A48D8(pb, 0, sizeof(Vec3));
    func_00371628(self);
    func_003717E8(self, pa, pb);
}
