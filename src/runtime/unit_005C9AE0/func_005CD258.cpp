struct S { char pad[0x10]; int unk10; };
extern void func_00436930(int);

void func_005CD258(S *arg0)
{
    func_00436930(arg0->unk10);
}
