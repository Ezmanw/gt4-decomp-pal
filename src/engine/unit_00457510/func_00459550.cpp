
struct func_00459550_Obj { unsigned char pad[2]; unsigned char k; };
extern "C" int func_00459550(func_00459550_Obj *p) {
    switch (p->k) {
    case 0: return 0;
    case 32: case 33: return 1;
    case 16: case 17: return 2;
    default: return 3;
    }
}
