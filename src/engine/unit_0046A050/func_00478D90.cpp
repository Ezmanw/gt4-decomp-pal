typedef int s32;

struct Val { s32 type; s32 v; };
extern "C" void func_00476C98(Val *);
extern "C" Val *func_00476B40(Val *, const Val *);
extern "C" void func_00478B90(Val *, s32 type);

extern "C" s32 func_00478D90(const Val *self) {
    Val tmp;
    s32 r;
    func_00476B40(&tmp, self);
    func_00478B90(&tmp, 10);
    r = tmp.v != 0x7F800000 && tmp.v != (s32)0xFF800000;
    func_00476C98(&tmp);
    return r;
}
