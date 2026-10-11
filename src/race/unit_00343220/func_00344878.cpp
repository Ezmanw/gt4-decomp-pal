struct Table { char pad[0xCBF8]; float value; };
struct A { int x0; Table *table; };
extern int func_003448F0(float);
int func_00344878(A *a)
{
    return func_003448F0(a->table->value);
}
