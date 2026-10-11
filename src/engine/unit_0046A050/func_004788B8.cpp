extern "C" float func_00477838(void *v);
extern "C" void func_00476F08(void *v, int b);

extern "C" void func_004788B8(void *a, void *b)
{
    func_00476F08(a, (int)func_00477838(a) && (int)func_00477838(b));
}
