typedef int s32;

extern "C" s32 RaceInput__getButtonDown(s32 arg0);

extern "C" s32 func_00426D20(s32 arg0, s32 arg1)
{
    s32 s0 = arg1;
    return (RaceInput__getButtonDown(arg0) & s0) != 0;
}
