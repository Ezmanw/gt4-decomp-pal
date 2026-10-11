struct Obj;
extern "C" float func_002B2138(Obj *o);
extern "C" float func_002D4AD8(Obj *o);
extern "C" int mListBox__getTotalItemCount(Obj *o);
extern "C" float func_002B2498(Obj *o);

extern "C" float mListBox__getTotal(Obj *o)
{
    float w = func_002B2138(o) + func_002D4AD8(o);
    int n = mListBox__getTotalItemCount(o);
    return w * (n - 1) + func_002B2498(o);
}
