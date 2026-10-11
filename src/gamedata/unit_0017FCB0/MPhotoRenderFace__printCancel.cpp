extern "C" void func_001978F8(void *);
extern "C" void func_001978A0(void *, int);
extern "C" void func_0019A950(int, int);
extern "C" void func_0022AE78(void *, void *);
extern "C" void func_0022AE20(void *, int);

struct B {
    int v[4];
};

static inline int get(B *b) { return b->v[0]; }

extern "C" void MPhotoRenderFace__printCancel(void *arg0, void *arg1, void *arg2, void *arg3)
{
    int a[8];
    B b;
    int x;

    func_001978F8(a);
    x = a[0];
    func_0022AE78(&b, arg3);
    func_0019A950(x, get(&b));
    func_0022AE20(&b, 2);
    func_001978A0(a, 2);
}
