extern "C" void ModelSet2__render(void *a, void *b);
extern "C" void func_00455970(void *a, int id, void *b);

extern "C" void func_00428B08(void *a, void *b, const unsigned short *list) {
    if (list) {
        int n = *list++;
        for (int i = 0; i < n; i++)
            func_00455970(a, *list++, b);
    } else {
        ModelSet2__render(a, b);
    }
}
