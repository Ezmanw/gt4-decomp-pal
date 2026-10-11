typedef int s32;

struct Value {
    s32 type;
    s32 data[3];
};

extern "C" void func_00476E70(Value *, s32);
extern "C" void func_00476B40(Value *, Value *);
extern "C" void func_00476C98(Value *);

extern "C" Value *func_003C4380(Value *ret, s32 arg) {
    Value t;
    t.type = 1;
    func_00476E70(&t, arg);
    func_00476B40(ret, &t);
    func_00476C98(&t);
    return ret;
}
