struct S { char pad[0x10]; int unk10; };
extern void func_00436C70(int);

void func_005CCEC8(S *arg0)
{
    func_00436C70(arg0->unk10);
}
