extern "C" int func_003CA248(void *self);

extern "C" int func_003CFAD8(void *self, int mode) {
    int n = func_003CA248(self);
    if (n == 0)
        return 0;
    if (mode == 0) {
        if (n < 3)
            return 0;
        return 1;
    }
    if (mode == 1)
        return n < 4;
    return 0;
}
