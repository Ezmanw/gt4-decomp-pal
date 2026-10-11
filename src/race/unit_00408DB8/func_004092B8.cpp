extern "C" void func_004086D0(void *self, int axis, float v);

extern "C" void func_004092B8(void *self, float v)
{
    func_004086D0(self, 0, v);
    func_004086D0(self, 1, v);
    func_004086D0(self, 2, v);
}
