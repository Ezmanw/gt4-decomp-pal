struct S { char pad[0x10]; int unk10; };
extern void func_00436D38(int);

void func_005CC3D8(S *arg0)
{
    func_00436D38(arg0->unk10);
}
