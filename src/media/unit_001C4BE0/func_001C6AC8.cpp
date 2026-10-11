typedef int s32;

extern "C" s32 func_003299B0(s32 *arg0, const char *arg1);

extern "C" s32 func_001C6AC8(void) {
    s32 local;
    s32 result = func_003299B0(&local, "DemonstrationSlideNum");
    return (result == 0) ? 0 : local;
}
