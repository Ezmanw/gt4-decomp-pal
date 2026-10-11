struct S { char pad[0x10]; int unk10; };
extern void func_00436C10(int);

void func_005CCE90(S *arg0)
{
    func_00436C10(arg0->unk10);
}
