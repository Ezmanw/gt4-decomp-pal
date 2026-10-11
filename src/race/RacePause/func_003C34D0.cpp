struct Loader {
    int pad0[4];
    void *obj;
    int pad14[3];
};

struct Matrix {
    float m[12];
};

struct Obj {
    int pad0[4];
    void *model;
    int pad14;
    int kind;
};

extern const char D_006A2A60[];
extern "C" void StrobeHandler__readFile(Loader *l, const char *name, int flags);
extern "C" void func_00474098(void *model);
extern "C" void func_003EC190(void *model);
extern "C" void func_004731C0(Matrix *m);
extern "C" void func_00474588(void *model, Matrix *m);

extern "C" void func_003C34D0(Obj *self, int kind)
{
    self->kind = kind;
    Loader l;
    StrobeHandler__readFile(&l, D_006A2A60, 1);
    self->model = l.obj;
    func_00474098(self->model);
    func_003EC190(self->model);
    Matrix m;
    func_004731C0(&m);
    func_00474588(self->model, &m);
}
