struct S { char pad[0x10]; int unk10; };
extern void func_00437600(int);

void func_005CC6A0(S *arg0)
{
    func_00437600(arg0->unk10);
}
