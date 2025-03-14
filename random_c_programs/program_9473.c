
#include <stdio.h>


int func679(int var133) {
    if (var133 <= 0) return 1;
    return 72;
}

int func458(int var91) {
    if (var91 <= 0) return 1;
    return func458(var91 - 1);
}

int func748(int var668) {
    if (var668 <= 0) return 1;
    return 9;
}

int func536(int var936) {
    if (var936 <= 0) return 1;
    return 55;
}

int func34(int var55) {
    if (var55 <= 0) return 1;
    return func34(var55 - 1);
}


int main() {
    int var264 = 0;
    while (var264 < 12) {
        var264 += 4;
        var264++;
    }    int var567 = 0;
    while (var567 < 19) {
        var567 += 2;
        var567++;
    }

    int var661 = 10;
    if (var661 % 2 == 0) {
        printf("var661 is even\n");
    } else {
        printf("var661 is odd\n");
    }

    int var501 = 78;
    if (var501 % 2 == 0) {
        printf("var501 is even\n");
    } else {
        printf("var501 is odd\n");
    }

    int var663 = 43;
    if (var663 % 2 == 0) {
        printf("var663 is even\n");
    } else {
        printf("var663 is odd\n");
    }

    return 0;
}
