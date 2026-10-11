extern "C" void mColorFace__virtual_70(void *self, void *arg, int flag);
extern "C" void func_002E8A50(void *self, void *arg);

extern "C" void mGraphFace__virtual_70(void *self, void *arg, int on)
{
    mColorFace__virtual_70(self, arg, 0);
    if (on)
        func_002E8A50(self, arg);
}
