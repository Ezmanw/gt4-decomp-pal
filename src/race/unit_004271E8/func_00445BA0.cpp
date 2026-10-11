struct Date { int w[8]; };
struct Rec { unsigned long long stamp; };

extern "C" int func_00445B80(Rec *r);
extern "C" void func_00448B98(unsigned long long stamp, Date *out);
extern "C" int func_00448D18(Date *d, int flag);

extern "C" int func_00445BA0(Rec *r)
{
    int n = func_00445B80(r);
    Date d;
    func_00448B98(r->stamp, &d);
    if (func_00448D18(&d, 1))
        n--;
    return n;
}
