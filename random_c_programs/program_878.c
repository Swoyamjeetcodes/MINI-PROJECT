
#include <stdio.h>


int func120(int var655) {
    if (var655 <= 0) return 1;
    return 81;
}

int func665(int var756) {
    if (var756 <= 0) return 1;
    return func665(var756 - 1);
}

int func143(int var912) {
    if (var912 <= 0) return 1;
    return 98;
}


int main() {
    int var580 = 0;
    while (var580 < 8) {
        var580 += 4;
        var580++;
    }    int var464 = 0;
    while (var464 < 7) {
        var464 += 3;
        var464++;
    }    for (int var206 = 0; var206 < 9; var206++) {
        var206 += 1;
    }

    int var309 = 94;
    if (var309 % 2 == 0) {
        printf("var309 is even\n");
    } else {
        printf("var309 is odd\n");
    }

    int var408 = 8;
    if (var408 % 2 == 0) {
        printf("var408 is even\n");
    } else {
        printf("var408 is odd\n");
    }

    int var236 = 20;
    if (var236 % 2 == 0) {
        printf("var236 is even\n");
    } else {
        printf("var236 is odd\n");
    }

    int var431 = 99;
    if (var431 % 2 == 0) {
        printf("var431 is even\n");
    } else {
        printf("var431 is odd\n");
    }

    return 0;
}
