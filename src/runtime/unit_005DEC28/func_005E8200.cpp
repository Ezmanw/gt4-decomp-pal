extern "C" void func_00328700(void *arg0);
extern "C" void func_00328750(void *arg0);

extern "C" void func_005E8200(void **arg0, void **arg1, void **arg2) {
    void **it = arg0;
    if (it != arg1) {
        do {
            if (it != arg2) {
                void *val = *arg2;
                if (val != 0) {
                    func_00328700(val);
                }
                void *old = *it;
                if (old != 0) {
                    func_00328750(old);
                }
                *it = val;
            }
            it += 1;
        } while (it != arg1);
    }
}
