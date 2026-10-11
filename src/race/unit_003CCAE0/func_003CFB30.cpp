typedef int s32;

extern "C" s32 func_003CFAD8(void *self, s32 which);

extern "C" s32 func_003CFB30(void *self) {
    if (func_003CFAD8(self, 0)) {
        if (func_003CFAD8(self, 1)) {
            return 0;
        }
    }
    return 1;
}
