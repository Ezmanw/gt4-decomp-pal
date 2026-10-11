extern "C" void *func_00104068(void *arg0);
extern char D_00659C50[];

struct func_00104D48_arg0 {
    void *unk0;
    char pad4[0x2C];
    int unk30;
};

extern "C" void func_00104D48(struct func_00104D48_arg0 *arg0)
{
    func_00104068(arg0);
    arg0->unk30 = 0;
    arg0->unk0 = D_00659C50;
}
