typedef int s32;

struct Val { s32 type; s32 v; };
extern "C" void func_00476C98(Val *);

/* type 6 (float) set to a quiet NaN, stored as its bit pattern */
extern "C" void func_00478D08(Val *self) {
    func_00476C98(self);
    self->type = 6;
    self->v = 0x7FC00000;
}
