typedef int s32;

struct Self { char *vtbl; char m4[0xB8]; char mBC[4]; };
extern char D_00687F90[];
extern "C" void *func_00438E60(Self *);
extern "C" void func_0043D048(void *);

extern "C" void func_0043DCB0(Self *self) {
    func_00438E60(self);
    self->vtbl = D_00687F90;
    func_0043D048(self->m4);
    func_0043D048(self->mBC);
}
