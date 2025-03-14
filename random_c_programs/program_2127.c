
#include <stdio.h>


int func925(int var942) {
    if (var942 <= 0) return 1;
    return 42;
}

int func873(int var84) {
    if (var84 <= 0) return 1;
    return 62;
}

int func707(int var685) {
    if (var685 <= 0) return 1;
    return func707(var685 - 1);
}

int func555(int var267) {
    if (var267 <= 0) return 1;
    return func555(var267 - 1);
}

int func524(int var521) {
    if (var521 <= 0) return 1;
    return 42;
}


int main() {
    for (int var638 = 0; var638 < 13; var638++) {
        var638 += 4;
    }    for (int var374 = 0; var374 < 16; var374++) {
        var374 += 5;
    }

    int var894 = 66;
    if (var894 % 2 == 0) {
        printf("var894 is even\n");
    } else {
        printf("var894 is odd\n");
    }

    int var207 = 3;
    if (var207 % 2 == 0) {
        printf("var207 is even\n");
    } else {
        printf("var207 is odd\n");
    }

    int var514 = 70;
    if (var514 % 2 == 0) {
        printf("var514 is even\n");
    } else {
        printf("var514 is odd\n");
    }

    return 0;
}
