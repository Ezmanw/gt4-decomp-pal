typedef int s32;

struct Handle {
    s32 obj;
    char pad4[0xC];
};

extern char D_0069C7B8[]; /* "cursor" */
extern "C" void func_0023FCD8(Handle *h);
extern "C" void func_0023FA20(s32 obj, const char *name);
extern "C" void func_0023DF48(Handle *h, s32 flags);
extern "C" void func_002C8EC0(void *self, void *arg);

extern "C" void func_002C8F28(void *self, void *arg) {
    Handle h;
    func_0023FCD8(&h);
    func_0023FA20(h.obj, D_0069C7B8);
    func_0023DF48(&h, 2);
    func_002C8EC0(self, arg);
}
