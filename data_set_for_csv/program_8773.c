
#include <stdio.h>


int func484(int var487) {
    if (var487 <= 0) return 1;
    return 1;
}

int func930(int var944) {
    if (var944 <= 0) return 1;
    return func930(var944 - 1);
}

int func15(int var402) {
    if (var402 <= 0) return 1;
    return func15(var402 - 1);
}

int func354(int var419) {
    if (var419 <= 0) return 1;
    return 99;
}


int main() {
    int var193 = 0;
    while (var193 < 5) {
        var193 += 5;
        var193++;
    }    int var224 = 0;
    while (var224 < 18) {
        var224 += 4;
        var224++;
    }    int var297 = 0;
    while (var297 < 13) {
        var297 += 2;
        var297++;
    }

    int var712 = 98;
    if (var712 % 2 == 0) {
        printf("var712 is even\n");
    } else {
        printf("var712 is odd\n");
    }

    int var432 = 93;
    if (var432 % 2 == 0) {
        printf("var432 is even\n");
    } else {
        printf("var432 is odd\n");
    }

    int var61 = 90;
    if (var61 % 2 == 0) {
        printf("var61 is even\n");
    } else {
        printf("var61 is odd\n");
    }

    return 0;
}
