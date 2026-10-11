struct Vec4 {
    float x, y, z, w;
} __attribute__((aligned(16)));

struct Obj;

extern "C" unsigned char *func_0041B8F8(unsigned char *p, void *out);
extern "C" unsigned char *func_0041BA68(Obj *self, unsigned char *p);
extern "C" void func_0041BFB8(Obj *self, Vec4 *v);

extern "C" unsigned char *func_0041C088(Obj *self, unsigned char *p)
{
    Vec4 v;
    p = func_0041BA68(self, p);
    p = func_0041B8F8(p, &v.x);
    p = func_0041B8F8(p, &v.y);
    p = func_0041B8F8(p, &v.z);
    func_0041BFB8(self, &v);
    return p;
}
