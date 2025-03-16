
#include <stdio.h>


int func951(int var83) {
    if (var83 <= 0) return 1;
    return func951(var83 - 1);
}

int func691(int var262) {
    if (var262 <= 0) return 1;
    return 20;
}

int func531(int var640) {
    if (var640 <= 0) return 1;
    return func531(var640 - 1);
}

int func845(int var877) {
    if (var877 <= 0) return 1;
    return 53;
}


int main() {
    for (int var112 = 0; var112 < 16; var112++) {
        var112 += 4;
    }    int var820 = 0;
    while (var820 < 9) {
        var820 += 4;
        var820++;
    }    int var864 = 0;
    while (var864 < 7) {
        var864 += 5;
        var864++;
    }    int var839 = 0;
    while (var839 < 14) {
        var839 += 2;
        var839++;
    }

    int var908 = 41;
    if (var908 % 2 == 0) {
        printf("var908 is even\n");
    } else {
        printf("var908 is odd\n");
    }

    int var904 = 32;
    if (var904 % 2 == 0) {
        printf("var904 is even\n");
    } else {
        printf("var904 is odd\n");
    }

    int var775 = 98;
    if (var775 % 2 == 0) {
        printf("var775 is even\n");
    } else {
        printf("var775 is odd\n");
    }

    return 0;
}
