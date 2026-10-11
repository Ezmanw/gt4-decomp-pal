struct Obj {
    char pad[0x34];
    float unk34;
    float unk38;
};

extern "C" void func_004652B0(Obj *);
extern "C" void func_00464F88(Obj *, float);

extern "C" void func_00465218(Obj *self) {
    func_004652B0(self);
    func_00464F88(self, 0.0f);
    self->unk34 = 0.0f;
    self->unk38 = 0.0f;
}
