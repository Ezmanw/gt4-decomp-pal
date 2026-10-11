extern "C" float func_00477838(void *v);
extern "C" void func_00476F98(void *v, int i);

extern "C" void func_004789D8(void *a, void *b)
{
    float x = func_00477838(a);
    func_00476F98(a, (int)x << (int)func_00477838(b));
}
