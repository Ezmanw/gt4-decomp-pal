struct Reader { int w[4]; };
struct Obj { char pad[0xD0]; void *data; };
extern "C" void func_00427B98(Reader *r);
extern "C" void GT4_Motion__MotionSetPlayer__set(Reader *r, int pos, void *data);
extern "C" int func_0042A448(Reader *r, int key);

extern "C" int func_003EBCB8(Obj *self, int key)
{
    if (!self->data)
        return -1;
    Reader r;
    func_00427B98(&r);
    GT4_Motion__MotionSetPlayer__set(&r, 0, self->data);
    return func_0042A448(&r, key);
}
