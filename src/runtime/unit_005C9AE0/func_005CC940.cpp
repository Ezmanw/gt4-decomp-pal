struct S { char pad[0x10]; int unk10; };
extern void func_004376C0(int);

void func_005CC940(S *arg0)
{
    func_004376C0(arg0->unk10);
}
