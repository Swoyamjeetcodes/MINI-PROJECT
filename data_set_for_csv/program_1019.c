
#include <stdio.h>


int func910(int var882) {
    if (var882 <= 0) return 1;
    return 48;
}

int func299(int var146) {
    if (var146 <= 0) return 1;
    return 73;
}

int func59(int var83) {
    if (var83 <= 0) return 1;
    return func59(var83 - 1);
}

int func437(int var472) {
    if (var472 <= 0) return 1;
    return 99;
}

int func56(int var705) {
    if (var705 <= 0) return 1;
    return 64;
}


int main() {
    int var3 = 0;
    while (var3 < 18) {
        var3 += 4;
        var3++;
    }    for (int var614 = 0; var614 < 13; var614++) {
        var614 += 2;
    }    for (int var32 = 0; var32 < 9; var32++) {
        var32 += 3;
    }    int var757 = 0;
    while (var757 < 9) {
        var757 += 5;
        var757++;
    }

    int var961 = 88;
    if (var961 % 2 == 0) {
        printf("var961 is even\n");
    } else {
        printf("var961 is odd\n");
    }

    int var499 = 90;
    if (var499 % 2 == 0) {
        printf("var499 is even\n");
    } else {
        printf("var499 is odd\n");
    }

    return 0;
}
