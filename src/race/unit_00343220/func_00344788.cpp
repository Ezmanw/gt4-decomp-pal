struct Obj {
    char pad[0x6FC];
    unsigned char unk6FC;
};

extern "C" unsigned char func_00344788(struct Obj *arg0)
{
    return arg0->unk6FC;
}
