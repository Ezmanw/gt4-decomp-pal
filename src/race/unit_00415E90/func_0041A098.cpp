extern "C" void *func_0041AD08(void *self, int i);
extern "C" void func_00418DD8(void *item, void *data);

extern "C" void func_0041A098(void *self, char *data) {
    for (int i = 0; i < 20; i++) {
        func_00418DD8(func_0041AD08(self, i), data);
        data += 0x40;
    }
}
