struct Inner { char pad[0x4A0]; char f4a0[1]; };
struct Outer { char pad[0x14]; struct Inner *inner; };
extern int func_00343620(void *);
extern int func_00472C70(void *);
extern void func_00490E18(int, int, int, int, int);
extern char PDISTD__UNIT_MANAGER[];
extern int D_00624984;
void func_00146530(struct Outer *o, int a, int b)
{
    int r = func_00343620(o->inner->f4a0);
    int s = func_00472C70(PDISTD__UNIT_MANAGER);
    func_00490E18(D_00624984, b, a, r, s);
}
