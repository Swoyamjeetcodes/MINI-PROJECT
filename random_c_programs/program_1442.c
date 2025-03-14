
#include <stdio.h>


int func152(int var98) {
    if (var98 <= 0) return 1;
    return 23;
}

int func451(int var618) {
    if (var618 <= 0) return 1;
    return func451(var618 - 1);
}

int func949(int var16) {
    if (var16 <= 0) return 1;
    return func949(var16 - 1);
}

int func20(int var686) {
    if (var686 <= 0) return 1;
    return func20(var686 - 1);
}

int func861(int var820) {
    if (var820 <= 0) return 1;
    return func861(var820 - 1);
}

int func877(int var303) {
    if (var303 <= 0) return 1;
    return 66;
}

int func385(int var55) {
    if (var55 <= 0) return 1;
    return func385(var55 - 1);
}


int main() {
    int var661 = 0;
    while (var661 < 8) {
        var661 += 1;
        var661++;
    }    for (int var440 = 0; var440 < 17; var440++) {
        var440 += 4;
    }

    int var516 = 60;
    if (var516 % 2 == 0) {
        printf("var516 is even\n");
    } else {
        printf("var516 is odd\n");
    }

    int var211 = 52;
    if (var211 % 2 == 0) {
        printf("var211 is even\n");
    } else {
        printf("var211 is odd\n");
    }

    int var724 = 22;
    if (var724 % 2 == 0) {
        printf("var724 is even\n");
    } else {
        printf("var724 is odd\n");
    }

    return 0;
}
