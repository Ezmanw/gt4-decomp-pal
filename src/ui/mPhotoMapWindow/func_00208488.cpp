typedef int s32;

extern "C" s32 func_00206938(void);
extern "C" s32 func_0025C440(s32 arg0);
extern "C" s32 func_00265EF0(s32 arg0);

extern "C" s32 func_00208488(void)
{
    s32 var_s0;

    var_s0 = func_00206938();
    if (var_s0 != 0)
    {
        do
        {
            if (func_00265EF0(var_s0) == 0)
            {
                return var_s0;
            }
            var_s0 = func_0025C440(var_s0);
        } while (var_s0 != 0);
    }
    return 0;
}
