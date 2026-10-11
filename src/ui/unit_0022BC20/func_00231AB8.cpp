struct S { char pad[0x10]; int unk10; };
extern void func_00250D50(int);

void func_00231AB8(S *arg0)
{
    func_00250D50(arg0->unk10);
}
