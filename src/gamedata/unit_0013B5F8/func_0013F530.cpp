struct Info {
    int w[8];
};

extern "C" void *func_004415C0(void *o);
extern "C" void *func_00445838(void *p);
extern "C" int func_00448B98(void *p, Info *info);
extern "C" int func_00448D08(Info *info);
extern "C" int func_0043F840(void *o, int id);

extern "C" bool func_0013F530(void *o) {
    Info info;
    if (!func_00448B98(func_00445838(func_004415C0(o)), &info))
        return false;
    bool r;
    if (func_00448D08(&info))
        r = true;
    else
        r = func_0043F840(o, 0x1C) == 1;
    return r;
}
