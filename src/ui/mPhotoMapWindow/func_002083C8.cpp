typedef int s32;

extern "C" s32 func_00206928(void);
extern "C" s32 func_0025C458(s32 arg0);
extern "C" s32 func_00265EF0(s32 arg0);

extern "C" s32 func_002083C8(void)
{
    s32 var_s0;

    var_s0 = func_00206928();
    if (var_s0 != 0)
    {
        do
        {
            if (func_00265EF0(var_s0) == 0)
            {
                return var_s0;
            }
            var_s0 = func_0025C458(var_s0);
        } while (var_s0 != 0);
    }
    return 0;
}
