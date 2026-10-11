typedef int s32;

extern char D_00697810[];
extern "C" s32 func_0057FB50(void *);
extern "C" void func_0020EDC8(void *, const char *, s32);

extern "C" void func_0020EC10(void *self) {
    const char *name = D_00697810;
    func_0020EDC8(self, name, func_0057FB50(self));
}
