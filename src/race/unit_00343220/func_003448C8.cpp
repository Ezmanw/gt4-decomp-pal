struct Table { char pad[0xCBF8]; float value; };
struct A { int x0; Table *table; };
extern int func_00344980(float);
int func_003448C8(A *a)
{
    return func_00344980(a->table->value);
}
