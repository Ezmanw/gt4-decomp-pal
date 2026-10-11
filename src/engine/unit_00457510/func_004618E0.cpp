extern char D_008468E8[]; /* mutex */
extern "C" int func_00461820(void *obj);
extern "C" void func_00576788(void *mutex);
extern "C" void func_005767C0(void *mutex);
extern "C" void func_004617C8(int index);

extern "C" void func_004618E0(void *obj) {
    int index = -1;
    if (obj)
        index = func_00461820(obj);
    if (index >= 0) {
        func_00576788(D_008468E8);
        func_004617C8(index);
        func_005767C0(D_008468E8);
    }
}
