extern "C" void *func_003268A8(int size, int align, const char *name);
extern "C" void mRaceCourseMapFacePS2__structor_0(void *obj);
extern "C" void func_002551E0(void *arg0, void *arg1);

extern "C" void func_001299A8(void *arg0) {
    void *s1 = arg0;
    void *s0 = func_003268A8(0xE8, 4, "RefCounter");
    mRaceCourseMapFacePS2__structor_0(s0);
    void *local = s0;
    func_002551E0(s1, &local);
}
