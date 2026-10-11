struct S { char pad[0x10]; int unk10; };
extern void func_00250DB0(int);

void func_00231AD8(S *arg0)
{
    func_00250DB0(arg0->unk10);
}
