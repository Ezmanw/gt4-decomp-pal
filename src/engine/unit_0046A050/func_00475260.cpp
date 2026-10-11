struct Mat {
    float m[16];
};

struct Obj {
    char pad[0x18];
    char unk18[1];
};

struct Ctx {
    char pad[0x6E18];
    char unk6E18[1];
};

extern "C" void func_0047E7D8(Obj *, Mat *);
extern "C" void func_004A7698(Mat *);
extern "C" void func_0047EAB8(void *, void *);

extern "C" void func_00475260(Obj *self, Ctx *ctx) {
    Mat m;
    func_0047E7D8(self, &m);
    func_004A7698(&m);
    func_0047EAB8(ctx->unk6E18, self->unk18);
}
