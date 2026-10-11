struct S { char pad[0x10]; int unk10; };
extern void func_004374E0(int);

void func_005CC610(S *arg0)
{
    func_004374E0(arg0->unk10);
}
