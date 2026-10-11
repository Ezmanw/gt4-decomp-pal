struct S { char pad[0x10]; int unk10; };
extern void HSymID__GetName(int);

void func_00324970(S *arg0)
{
    HSymID__GetName(arg0->unk10);
}
