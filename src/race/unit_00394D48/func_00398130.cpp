typedef float f32;

struct Obj00397E38 {
    char pad[0x38];
    f32 unk38;
};

extern "C" f32 D_0062150C;
extern "C" void func_00398190(void);

extern "C" void func_00398130(struct Obj00397E38 *arg0) {
    D_0062150C = 1.0f / arg0->unk38;
    func_00398190();
}
