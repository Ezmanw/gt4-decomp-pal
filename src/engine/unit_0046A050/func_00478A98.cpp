extern "C" float func_00477838(void *);
extern "C" void func_00476F98(void *, unsigned int);

extern "C" void func_00478A98(void *a, void *b)
{
    float x = func_00477838(a);
    float y = func_00477838(b);
    func_00476F98(a, (unsigned int)x >> (int)y);
}
