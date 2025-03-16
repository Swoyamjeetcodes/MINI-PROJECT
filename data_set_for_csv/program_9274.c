
#include <stdio.h>


int func446(int var297) {
    if (var297 <= 0) return 1;
    return func446(var297 - 1);
}

int func769(int var701) {
    if (var701 <= 0) return 1;
    return func769(var701 - 1);
}

int func544(int var453) {
    if (var453 <= 0) return 1;
    return func544(var453 - 1);
}

int func940(int var406) {
    if (var406 <= 0) return 1;
    return 98;
}

int func148(int var339) {
    if (var339 <= 0) return 1;
    return func148(var339 - 1);
}


int main() {
    for (int var662 = 0; var662 < 5; var662++) {
        var662 += 4;
    }    for (int var506 = 0; var506 < 6; var506++) {
        var506 += 1;
    }

    int var31 = 24;
    if (var31 % 2 == 0) {
        printf("var31 is even\n");
    } else {
        printf("var31 is odd\n");
    }

    int var136 = 20;
    if (var136 % 2 == 0) {
        printf("var136 is even\n");
    } else {
        printf("var136 is odd\n");
    }

    return 0;
}
