
#include <stdio.h>


int func416(int var359) {
    if (var359 <= 0) return 1;
    return func416(var359 - 1);
}

int func820(int var551) {
    if (var551 <= 0) return 1;
    return func820(var551 - 1);
}

int func329(int var800) {
    if (var800 <= 0) return 1;
    return func329(var800 - 1);
}

int func976(int var60) {
    if (var60 <= 0) return 1;
    return func976(var60 - 1);
}

int func626(int var499) {
    if (var499 <= 0) return 1;
    return 10;
}

int func832(int var470) {
    if (var470 <= 0) return 1;
    return func832(var470 - 1);
}


int main() {
    for (int var537 = 0; var537 < 16; var537++) {
        var537 += 5;
    }    for (int var814 = 0; var814 < 14; var814++) {
        var814 += 1;
    }

    int var272 = 3;
    if (var272 % 2 == 0) {
        printf("var272 is even\n");
    } else {
        printf("var272 is odd\n");
    }

    int var646 = 99;
    if (var646 % 2 == 0) {
        printf("var646 is even\n");
    } else {
        printf("var646 is odd\n");
    }

    int var1000 = 62;
    if (var1000 % 2 == 0) {
        printf("var1000 is even\n");
    } else {
        printf("var1000 is odd\n");
    }

    int var388 = 43;
    if (var388 % 2 == 0) {
        printf("var388 is even\n");
    } else {
        printf("var388 is odd\n");
    }

    int var465 = 49;
    if (var465 % 2 == 0) {
        printf("var465 is even\n");
    } else {
        printf("var465 is odd\n");
    }

    int var706 = 8;
    if (var706 % 2 == 0) {
        printf("var706 is even\n");
    } else {
        printf("var706 is odd\n");
    }

    return 0;
}
