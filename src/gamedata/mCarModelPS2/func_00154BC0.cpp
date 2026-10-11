struct Lock { int sema; int depth; int owner; int waiting; };
extern "C" void func_00154C70(Lock *l);
extern "C" void func_00154C90(Lock *l);
extern "C" void func_005768D8(int sema);

extern "C" void func_00154BC0(Lock *l)
{
    if (l->depth) {
        l->depth--;
    } else {
        l->owner = 0;
        func_00154C70(l);
        if (l->waiting) {
            l->waiting = 0;
            func_005768D8(l->sema);
        }
        func_00154C90(l);
    }
}
