extern "C" int &func_0044ABD8(void *self, int key);

extern "C" void func_0044AF38(void *self, int key) {
    if (func_0044ABD8(self, key) < 0x7FFFFFFF)
        func_0044ABD8(self, key)++;
}
