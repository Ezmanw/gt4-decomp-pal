extern "C" void *func_00490490(void *mgr, const char *name);
extern "C" void func_00490558(void *player, void *item);
extern "C" void *PDISTD__global_font_manager;
extern "C" void *D_00624984;

extern "C" void func_0048FD90(const char *name)
{
    if (!name || !PDISTD__global_font_manager)
        return;
    void *item = func_00490490(PDISTD__global_font_manager, name);
    if (D_00624984 && item)
        func_00490558(D_00624984, item);
}
