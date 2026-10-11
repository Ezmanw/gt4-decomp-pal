struct S { char pad[0x10]; int unk10; };
extern void func_00436BB0(int);

void func_005CCE58(S *arg0)
{
    func_00436BB0(arg0->unk10);
}
