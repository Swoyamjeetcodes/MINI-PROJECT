
#include <stdio.h>


int func970(int var523) {
    if (var523 <= 0) return 1;
    return 10;
}

int func960(int var323) {
    if (var323 <= 0) return 1;
    return 24;
}

int func764(int var140) {
    if (var140 <= 0) return 1;
    return 30;
}

int func761(int var132) {
    if (var132 <= 0) return 1;
    return func761(var132 - 1);
}


int main() {
    int var883 = 0;
    while (var883 < 12) {
        var883 += 1;
        var883++;
    }    for (int var102 = 0; var102 < 18; var102++) {
        var102 += 1;
    }    int var174 = 0;
    while (var174 < 15) {
        var174 += 4;
        var174++;
    }    for (int var32 = 0; var32 < 10; var32++) {
        var32 += 2;
    }

    int var839 = 10;
    if (var839 % 2 == 0) {
        printf("var839 is even\n");
    } else {
        printf("var839 is odd\n");
    }

    int var378 = 36;
    if (var378 % 2 == 0) {
        printf("var378 is even\n");
    } else {
        printf("var378 is odd\n");
    }

    return 0;
}
