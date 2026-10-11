struct Obj {
    virtual int v0(int);
    virtual int v1(int);
    virtual int v2(int);
    virtual int v3(int);
};
extern "C" {
int func_0043A710(int, int);
int func_0043B6F8(char *, int);
int func_00437980(char *, int);
void func_00430498(char *, int);
}
extern "C" void func_0043AF18(Obj *arg0, int arg1) {
    char *b = (char *)arg0;
    func_00430498(b + 0x3A368, func_00437980(b + 0x38CB0, func_0043B6F8(b + 0x348, func_0043A710(arg1, 0x10))));
    arg0->v3(arg1);
}
