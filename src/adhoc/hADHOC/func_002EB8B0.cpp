typedef void (*FuncPtr)(int);

extern "C" FuncPtr func_002EAB68();

extern "C" int func_002EB8B0(int arg0, int arg1, int arg2)
{
    FuncPtr fn = func_002EAB68();
    if (fn != 0) {
        fn(arg2);
        return 1;
    }
    return (int)fn;
}
