
#include <stdio.h>


int func590(int var512) {
    if (var512 <= 0) return 1;
    return 46;
}

int func663(int var143) {
    if (var143 <= 0) return 1;
    return 45;
}

int func375(int var9) {
    if (var9 <= 0) return 1;
    return 71;
}

int func310(int var297) {
    if (var297 <= 0) return 1;
    return func310(var297 - 1);
}

int func480(int var668) {
    if (var668 <= 0) return 1;
    return func480(var668 - 1);
}

int func445(int var157) {
    if (var157 <= 0) return 1;
    return 9;
}

int func949(int var725) {
    if (var725 <= 0) return 1;
    return 41;
}


int main() {
    for (int var519 = 0; var519 < 11; var519++) {
        var519 += 3;
    }    for (int var548 = 0; var548 < 8; var548++) {
        var548 += 3;
    }    for (int var375 = 0; var375 < 16; var375++) {
        var375 += 2;
    }    int var67 = 0;
    while (var67 < 15) {
        var67 += 5;
        var67++;
    }    for (int var804 = 0; var804 < 12; var804++) {
        var804 += 2;
    }

    int var191 = 92;
    if (var191 % 2 == 0) {
        printf("var191 is even\n");
    } else {
        printf("var191 is odd\n");
    }

    return 0;
}
