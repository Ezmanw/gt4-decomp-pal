struct S { char pad[0x10]; int unk10; };
extern void func_00250CF0(int);

void func_00231A98(S *arg0)
{
    func_00250CF0(arg0->unk10);
}
