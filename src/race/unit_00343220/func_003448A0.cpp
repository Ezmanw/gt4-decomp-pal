struct Table { char pad[0xCBF8]; float value; };
struct A { int x0; Table *table; };
extern int func_00344950(float);
int func_003448A0(A *a)
{
    return func_00344950(a->table->value);
}
