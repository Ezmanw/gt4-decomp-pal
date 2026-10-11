typedef int s32;

extern s32 D_006214CC;
extern char RaceCourse__model_arena_[];
extern "C" void *func_00463C18(char *);
extern "C" void free(void *);

extern "C" void func_00394E78(void) {
    if (D_006214CC != 0) {
        free(func_00463C18(RaceCourse__model_arena_));
    }
    D_006214CC = 0;
}
