struct S { char pad[0x10]; int unk10; };
extern void func_00437450(int);

void func_005CC810(S *arg0)
{
    func_00437450(arg0->unk10);
}
