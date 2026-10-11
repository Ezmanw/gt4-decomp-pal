struct S { char pad[0x10]; int unk10; };
extern void func_00437488(int);

void func_005CBD20(S *arg0)
{
    func_00437488(arg0->unk10);
}
