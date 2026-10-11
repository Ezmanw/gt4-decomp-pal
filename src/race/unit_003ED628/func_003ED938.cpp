extern char D_00621F28[];
extern char D_00621F30[];
extern char D_00621F40[];
extern char D_00621F48[];

extern "C" void func_00387E18(void *a, void *b);

static inline void loadA(int id) {
    if (id == 1)
        func_00387E18(D_00621F28, D_00621F30);
}

static inline void loadB(int id) {
    if (id == 1)
        func_00387E18(D_00621F40, D_00621F48);
}

extern "C" void func_003ED938(int id, int key) {
    if (key == 0xFFFF) {
        loadA(id);
        loadB(id);
    }
}
