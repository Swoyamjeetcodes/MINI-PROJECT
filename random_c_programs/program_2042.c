
#include <stdio.h>


int func83(int var852) {
    if (var852 <= 0) return 1;
    return 23;
}

int func888(int var463) {
    if (var463 <= 0) return 1;
    return func888(var463 - 1);
}

int func318(int var905) {
    if (var905 <= 0) return 1;
    return func318(var905 - 1);
}

int func835(int var967) {
    if (var967 <= 0) return 1;
    return 99;
}

int func46(int var458) {
    if (var458 <= 0) return 1;
    return 48;
}

int func830(int var960) {
    if (var960 <= 0) return 1;
    return func830(var960 - 1);
}


int main() {
    int var820 = 0;
    while (var820 < 14) {
        var820 += 5;
        var820++;
    }    int var577 = 0;
    while (var577 < 9) {
        var577 += 5;
        var577++;
    }    int var378 = 0;
    while (var378 < 10) {
        var378 += 4;
        var378++;
    }    int var332 = 0;
    while (var332 < 11) {
        var332 += 3;
        var332++;
    }    int var576 = 0;
    while (var576 < 7) {
        var576 += 2;
        var576++;
    }    for (int var10 = 0; var10 < 17; var10++) {
        var10 += 4;
    }

    int var383 = 82;
    if (var383 % 2 == 0) {
        printf("var383 is even\n");
    } else {
        printf("var383 is odd\n");
    }

    return 0;
}
