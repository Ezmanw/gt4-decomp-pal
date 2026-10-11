struct Obj {
    int m0;
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08();
    virtual void set(int value);
};

/* A handle class named after its destructor (func_00273DF8) so that _$_13func_00273CA0
   resolves; its constructor (func_00274238) is called explicitly. */
struct func_00273DF8 {
    Obj *p;
    ~func_00273DF8();
};

extern "C" void func_00274238(func_00273DF8 *h);

/* The result class, named after its constructor so that __13func_0021D810... resolves. */
struct func_0021D968 {
    int m0;
    func_0021D968(func_00273DF8 *h);
    func_0021D968(const func_0021D968 &o);
};

func_0021D968 func_00218B20(int value)
{
    func_00273DF8 h;
    func_00274238(&h);
    h.p->set(value);
    return func_0021D968(&h);
}
