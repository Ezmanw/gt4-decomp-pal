extern "C" int func_0035A5C0(void *car);
extern "C" void func_004024F0(void *self, float x, float y, float z);
extern "C" void func_00404270(void *self, float x, float y, float z);

extern "C" void func_00386C98(void *self, void *car, float x, float y, float z) {
    switch (func_0035A5C0(car)) {
    case 0:
        break;
    case 1:
        return func_004024F0(self, x, y, z);
    }
    return func_00404270(self, x, y, z);
}
