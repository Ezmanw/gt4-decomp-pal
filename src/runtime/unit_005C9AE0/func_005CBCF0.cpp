struct S { char pad[0x10]; int unk10; };
extern void func_00436B58(int);

void func_005CBCF0(S *arg0)
{
    func_00436B58(arg0->unk10);
}
