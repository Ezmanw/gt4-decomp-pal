extern "C" int func_0034AA68(void *self, int *used, int *total);

extern "C" int func_003FD810(void *self, int *used, int *total) {
    int r = 0;
    *total = 0;
    *used = 0;
    if (func_0034AA68(self, used, total)) {
        if (*total > 0)
            r = (float)*used / (float)*total > 0.7f;
    }
    return r;
}
