typedef int s32;

struct Sym {
    s32 id;
    s32 pad[3];
};

extern char D_00620178[];

extern "C" s32 func_00327B68(const char *name);
extern "C" void func_00328890(void *self, Sym *sym);

extern "C" void func_002ECF38(void *self) {
    Sym s;
    s.id = func_00327B68(D_00620178);
    func_00328890(self, &s);
}
