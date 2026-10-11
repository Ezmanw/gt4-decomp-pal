struct S { char pad[0x10]; int unk10; };
extern void func_00436EE0(int);

void func_005CCD68(S *arg0)
{
    func_00436EE0(arg0->unk10);
}
