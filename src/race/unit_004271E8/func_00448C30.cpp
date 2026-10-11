struct Obj {
    char pad[0x10];
    unsigned char unk10;
};

extern "C" unsigned char func_00448C30(struct Obj *arg0)
{
    return arg0->unk10;
}
