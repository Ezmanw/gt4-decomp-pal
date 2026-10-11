extern "C" void func_002661B8(void *node, void *arg);
extern "C" int func_00265EF0(void *node);
extern "C" void *func_0025C3F8(void *node);

extern "C" void mWidget__setActive(void *node, void *arg)
{
    func_002661B8(node, arg);
    if (func_00265EF0(node)) {
        func_002661B8(node, arg);
        if (func_0025C3F8(node))
            mWidget__setActive(func_0025C3F8(node), arg);
    }
}
