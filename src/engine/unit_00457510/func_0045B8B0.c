typedef struct Range {
    int start;
    int index;
    int count;
} Range;

extern void func_0045B868(Range *r, int a);
extern void func_0045B6E8(Range *r, int b);

Range func_0045B8B0(int a, int b)
{
    Range r;
    r.index = -1;
    r.count = 0;
    r.start = 0;
    func_0045B868(&r, a);
    func_0045B6E8(&r, b);
    return r;
}
