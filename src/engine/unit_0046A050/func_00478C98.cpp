struct Val {
    int type;
};

extern "C" void func_00476F08(Val *v, int b);
extern "C" void func_00478B90(Val *v, int type) throw();
extern "C" float func_00477838(Val *v);

extern "C" void func_00478C98(Val *v) {
    if (v->type == 10)
        return func_00476F08(v, 1);
    func_00478B90(v, 10);
    func_00476F08(v, func_00477838(v) != 0.0f);
}
