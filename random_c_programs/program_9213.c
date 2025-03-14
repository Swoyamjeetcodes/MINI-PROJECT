
#include <stdio.h>


int func769(int var66) {
    if (var66 <= 0) return 1;
    return 7;
}

int func124(int var136) {
    if (var136 <= 0) return 1;
    return 76;
}

int func182(int var170) {
    if (var170 <= 0) return 1;
    return 84;
}

int func483(int var133) {
    if (var133 <= 0) return 1;
    return func483(var133 - 1);
}


int main() {
    int var279 = 0;
    while (var279 < 11) {
        var279 += 2;
        var279++;
    }    int var542 = 0;
    while (var542 < 14) {
        var542 += 4;
        var542++;
    }    for (int var390 = 0; var390 < 11; var390++) {
        var390 += 3;
    }

    int var163 = 93;
    if (var163 % 2 == 0) {
        printf("var163 is even\n");
    } else {
        printf("var163 is odd\n");
    }

    int var687 = 63;
    if (var687 % 2 == 0) {
        printf("var687 is even\n");
    } else {
        printf("var687 is odd\n");
    }

    int var28 = 84;
    if (var28 % 2 == 0) {
        printf("var28 is even\n");
    } else {
        printf("var28 is odd\n");
    }

    return 0;
}
