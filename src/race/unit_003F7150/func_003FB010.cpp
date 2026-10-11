struct Obj {
    int handle;
};

extern "C" void CameraSys__CameraControl__init(Obj *o, int handle, int flags);
extern "C" void func_003FB368(Obj *o);
extern "C" void func_003FB0F8(Obj *o);
extern "C" void func_003FB560(Obj *o);

extern "C" void func_003FB010(Obj *o, int mode) {
    CameraSys__CameraControl__init(o, o->handle, 0);
    if (o->handle == 0)
        return;
    switch (mode) {
    case 1:
        func_003FB368(o);
        break;
    case 2:
        func_003FB0F8(o);
        break;
    default:
        func_003FB560(o);
        break;
    }
}
