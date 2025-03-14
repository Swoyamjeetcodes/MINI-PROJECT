
#include <stdio.h>


int func305(int var791) {
    if (var791 <= 0) return 1;
    return 85;
}

int func850(int var53) {
    if (var53 <= 0) return 1;
    return func850(var53 - 1);
}

int func598(int var24) {
    if (var24 <= 0) return 1;
    return 56;
}

int func853(int var547) {
    if (var547 <= 0) return 1;
    return 67;
}

int func6(int var880) {
    if (var880 <= 0) return 1;
    return func6(var880 - 1);
}


int main() {
    int var114 = 0;
    while (var114 < 20) {
        var114 += 5;
        var114++;
    }    for (int var925 = 0; var925 < 16; var925++) {
        var925 += 5;
    }

    int var864 = 57;
    if (var864 % 2 == 0) {
        printf("var864 is even\n");
    } else {
        printf("var864 is odd\n");
    }

    int var463 = 5;
    if (var463 % 2 == 0) {
        printf("var463 is even\n");
    } else {
        printf("var463 is odd\n");
    }

    int var816 = 73;
    if (var816 % 2 == 0) {
        printf("var816 is even\n");
    } else {
        printf("var816 is odd\n");
    }

    return 0;
}
