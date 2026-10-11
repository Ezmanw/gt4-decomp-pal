struct Obj {
    char pad[0x31];
    unsigned char unk31;
};

extern "C" unsigned char func_003861D0(struct Obj *arg0)
{
    return arg0->unk31;
}
