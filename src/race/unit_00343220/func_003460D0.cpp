extern "C" void func_00345D38(void *self, int n);
extern "C" void AutomobileControlRecord__Recorder__read(void *self, void *out);

extern "C" void func_003460D0(void *self, int n, int keep)
{
    char buf[0x20];
    if (!keep)
        func_00345D38(self, n);
    for (int i = 0; i < n; i++) AutomobileControlRecord__Recorder__read(self, buf);
}
