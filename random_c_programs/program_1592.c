
#include <stdio.h>


int func663(int var435) {
    if (var435 <= 0) return 1;
    return 15;
}

int func402(int var62) {
    if (var62 <= 0) return 1;
    return func402(var62 - 1);
}

int func259(int var407) {
    if (var407 <= 0) return 1;
    return 73;
}

int func585(int var869) {
    if (var869 <= 0) return 1;
    return func585(var869 - 1);
}

int func313(int var197) {
    if (var197 <= 0) return 1;
    return func313(var197 - 1);
}


int main() {
    for (int var408 = 0; var408 < 20; var408++) {
        var408 += 1;
    }    for (int var31 = 0; var31 < 16; var31++) {
        var31 += 3;
    }    int var242 = 0;
    while (var242 < 14) {
        var242 += 4;
        var242++;
    }

    int var594 = 24;
    if (var594 % 2 == 0) {
        printf("var594 is even\n");
    } else {
        printf("var594 is odd\n");
    }

    int var204 = 99;
    if (var204 % 2 == 0) {
        printf("var204 is even\n");
    } else {
        printf("var204 is odd\n");
    }

    int var524 = 14;
    if (var524 % 2 == 0) {
        printf("var524 is even\n");
    } else {
        printf("var524 is odd\n");
    }

    int var372 = 12;
    if (var372 % 2 == 0) {
        printf("var372 is even\n");
    } else {
        printf("var372 is odd\n");
    }

    int var828 = 29;
    if (var828 % 2 == 0) {
        printf("var828 is even\n");
    } else {
        printf("var828 is odd\n");
    }

    int var545 = 100;
    if (var545 % 2 == 0) {
        printf("var545 is even\n");
    } else {
        printf("var545 is odd\n");
    }

    return 0;
}
