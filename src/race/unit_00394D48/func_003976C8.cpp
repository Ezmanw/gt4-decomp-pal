extern "C" void func_003977D0(void *self, int n, float x);
extern "C" void func_00397A60(void *self, int n);

extern "C" void func_003976C8(void *self, float x)
{
    func_003977D0(self, 1, 100.0f);
    func_00397A60(self, 1);
    func_003977D0(self, 1, -x);
    func_00397A60(self, 1);
}
