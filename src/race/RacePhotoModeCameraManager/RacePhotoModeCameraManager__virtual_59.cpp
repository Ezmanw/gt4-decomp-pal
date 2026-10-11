typedef char Obj;

extern "C" {
void func_00378A48(Obj *self, int a);
void func_00378C28(Obj *self, int a);
void func_00378C70(Obj *self, int a);
void func_00378CB8(Obj *self, int a);
void func_00378D10(Obj *self, int a);
void func_00378D68(Obj *self, int a);
void func_003FB098(void *p);
void func_003700C8(void *a, void *b);
void func_00384BB8(void *cam, void *b);
void func_003847B0(void *cam, void *b);
void func_003791F8(void *cam, int a, void *b, void *c, void *d);
void func_003700F0(void *a, void *cam, void *d);
}

extern "C" void RacePhotoModeCameraManager__virtual_59(Obj *self, int a, int unused, int *mode) {
    void *s4 = self + 0xDD0;
    void *s5 = self + 0xE28;
    *(int *)(self + 0xF34) = *mode;
    void *s6 = self + 0xD00;
    switch (*mode) {
    case 1:
    case 2:
        func_00378A48(self, a);
        break;
    case 6:
        func_00378C28(self, a);
        break;
    case 7:
        func_00378C70(self, a);
        break;
    case 3:
        func_00378CB8(self, a);
        break;
    case 4:
        func_00378D10(self, a);
        break;
    case 5:
        func_00378D68(self, a);
        break;
    default:
        func_003FB098(s4);
        func_003700C8(s5, s4);
        break;
    }
    void *cam = *(void **)(self + 0xC44);
    void *s1 = self + 0x9C0;
    func_00384BB8(cam, s5);
    func_003791F8(cam, a, s4, s6, s1);
    void *cam2 = *(void **)(self + 0xC40);
    func_003847B0(cam2, s5);
    func_003791F8(cam2, a, s4, s6, s1);
    func_003700F0(s5, *(void **)(self + 0xC40), s1);
}
