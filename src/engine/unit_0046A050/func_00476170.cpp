typedef unsigned char u8;

struct S { char pad[0x30]; u8 unk30; };

extern "C" void *func_00476170(S *arg0) {
    return &arg0->unk30;
}
