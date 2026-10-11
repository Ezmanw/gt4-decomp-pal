extern "C" void *func_0041AD08(void *self, int i);
extern "C" void func_00419168(void *item);

extern "C" void func_0041B590(void *self)
{
    for (int i = 0; i < 20; i++)
        func_00419168(func_0041AD08(self, i));
}
