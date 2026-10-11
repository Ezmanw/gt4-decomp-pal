struct S { char pad[0x10]; int unk10; };
extern void func_00250E38(int);

void func_00231AF8(S *arg0)
{
    func_00250E38(arg0->unk10);
}
