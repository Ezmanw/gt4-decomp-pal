typedef int s32;

struct S { char pad[0x16]; unsigned char flag; };

extern "C" s32 func_00448CE8(S *arg0) {
    return arg0->flag != 0;
}
