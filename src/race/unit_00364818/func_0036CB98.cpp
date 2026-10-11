struct func_0036CB98_Sub {
    char pad0[0x442];
    unsigned char x442;
    char pad1[0x466 - 0x443];
    signed char x466;
    unsigned char x467;
    char pad2[0x4BA - 0x468];
    unsigned short x4ba;
    char pad3[0x520 - 0x4BC];
    unsigned char x520;
};

struct func_0036CB98_Obj {
    char pad[0x104];
    func_0036CB98_Sub sub;
};

extern "C" int func_0036C410(func_0036CB98_Obj *self, int which);
extern "C" int func_0036C940(func_0036CB98_Obj *self);
extern "C" int func_0036CA30(func_0036CB98_Obj *self);
extern "C" int func_0036CB00(func_0036CB98_Obj *self);

extern "C" int func_0036CB98(func_0036CB98_Obj *self) {
    func_0036CB98_Sub *s = &self->sub;
    if (s->x4ba != 0)
        return s->x520 != 1 ? 1 : -1;
    int mode;
    if (s->x466 == 1 || s->x467 != 0)
        mode = 0;
    else
        mode = s->x442;
    switch (mode) {
    case 0:
        return func_0036C410(self, 0);
    case 2:
        return func_0036C410(self, 1);
    case 1:
        return func_0036C940(self);
    case 3:
    case 4:
    case 6:
        return func_0036CA30(self);
    case 5:
        return func_0036CB00(self);
    default:
        return -1;
    }
}
