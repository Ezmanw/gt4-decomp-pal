/* The element class has no known name: named after its constructor (func_00409CC0) so that
   __13func_00409940 resolves. */
struct func_00409CC0 {
    func_00409CC0();
    char pad[0x50];
};

/* Named after its own constructor. The array member is built by the compiler's countdown loop. */
struct func_00409D08 {
    float a;
    float b;
    int c;
    func_00409CC0 e[4];
    func_00409D08();
};

func_00409D08::func_00409D08() : a(1.0f), b(1.0f), c(0)
{
}
