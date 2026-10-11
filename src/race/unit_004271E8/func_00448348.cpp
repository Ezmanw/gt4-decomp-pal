struct Obj {
    char pad[0x15];
    unsigned char unk15;
};

extern "C" unsigned char func_00448348(struct Obj *arg0)
{
    return arg0->unk15;
}
