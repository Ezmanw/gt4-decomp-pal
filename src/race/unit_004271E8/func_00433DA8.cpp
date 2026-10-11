extern "C" int func_00448930(void);
extern "C" void func_00448948(int index, char *name, int size);
extern "C" int func_00433E18(void *o, char *name);

extern "C" void func_00433DA8(void *o) {
    char name[32];
    int n = func_00448930();
    for (int i = 0; i < n; i++) {
        func_00448948(i, name, sizeof(name));
        func_00433E18(o, name);
    }
}
