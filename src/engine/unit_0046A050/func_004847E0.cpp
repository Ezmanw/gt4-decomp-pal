extern "C" void *func_004817E8(void *self, int key);
extern "C" void *func_00481608(void *self, int key);
extern "C" void func_00476B68(void *item, int value);

extern "C" int func_004847E0(void *self, int key, int value, int create) {
    if (create) {
        func_00476B68(func_004817E8(self, key), value);
        return 1;
    }
    void *p = func_00481608(self, key);
    if (!p)
        return 0;
    func_00476B68(p, value);
    return 1;
}
