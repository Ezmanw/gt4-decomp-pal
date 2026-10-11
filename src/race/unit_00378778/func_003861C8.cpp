struct Obj {
    char pad[0x30];
    unsigned char unk30;
};

extern "C" unsigned char func_003861C8(struct Obj *arg0)
{
    return arg0->unk30;
}
