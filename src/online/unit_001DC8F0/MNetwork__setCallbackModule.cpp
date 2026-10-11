typedef int s32;

extern "C" void func_001DC690(s32 *arg0);
extern "C" void func_001DC638(s32 *arg0, s32 arg1);
extern "C" s32 *func_00304368(s32 *arg0, s32 *arg1);
extern "C" void func_00304310(s32 *arg0, s32 arg1);

extern "C" void MNetwork__setCallbackModule(void *context, void *self, s32 argc, s32 *argv) {
    s32 network[4];
    s32 module[4];

    if (argc > 0) {
        if (*argv == 0) {
            func_001DC690(network);
            *(s32 *)(network[0] + 0x1BC) = 0;
            func_001DC638(network, 2);
        } else {
            func_001DC690(network);
            s32 object = network[0];
            s32 *pm = module;
            func_00304368(pm, argv);
            *(s32 *)(object + 0x1BC) = *pm;
            func_00304310(pm, 2);
            func_001DC638(network, 2);
        }
    }
}
