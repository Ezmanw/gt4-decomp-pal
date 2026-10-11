extern "C" unsigned int func_00426DE8(void *);
extern "C" int func_00426D50(void *, unsigned int);
extern "C" void func_00476758(void *, int);
extern "C" int func_00476850(void *, int);

extern "C" bool func_003EC1C0(void *o, void *pad, unsigned int mask, int c)
{
    if (func_00426DE8(pad) & mask) {
        func_00476758(o, c);
    } else if (func_00426D50(pad, mask)) {
        func_00476850(o, c);
    } else {
        return false;
    }
    return true;
}
