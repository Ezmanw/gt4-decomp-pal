struct Obj {
    int m0;
    int m4;
};

extern "C" int func_00461FD8(int v);
extern "C" void func_00461940(Obj *o, int v);
extern "C" void func_00460328(Obj *o, int v);

extern "C" Obj *func_00462228(Obj *o, int v) {
    switch (func_00461FD8(v)) {
    case 0:
        func_00461940(o, v);
        break;
    case 1:
        func_00460328(o, v - 10);
        break;
    default:
        o->m0 = 0;
        o->m4 = 0;
        break;
    }
    return o;
}
