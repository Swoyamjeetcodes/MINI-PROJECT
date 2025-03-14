
#include <stdio.h>


int func754(int var810) {
    if (var810 <= 0) return 1;
    return func754(var810 - 1);
}

int func588(int var393) {
    if (var393 <= 0) return 1;
    return 61;
}

int func614(int var419) {
    if (var419 <= 0) return 1;
    return func614(var419 - 1);
}

int func269(int var181) {
    if (var181 <= 0) return 1;
    return func269(var181 - 1);
}

int func114(int var354) {
    if (var354 <= 0) return 1;
    return func114(var354 - 1);
}

int func527(int var424) {
    if (var424 <= 0) return 1;
    return 48;
}

int func905(int var860) {
    if (var860 <= 0) return 1;
    return 30;
}

int func484(int var197) {
    if (var197 <= 0) return 1;
    return 75;
}


int main() {
    for (int var202 = 0; var202 < 15; var202++) {
        var202 += 3;
    }    for (int var158 = 0; var158 < 13; var158++) {
        var158 += 1;
    }    for (int var486 = 0; var486 < 19; var486++) {
        var486 += 2;
    }    for (int var652 = 0; var652 < 11; var652++) {
        var652 += 3;
    }    int var645 = 0;
    while (var645 < 20) {
        var645 += 4;
        var645++;
    }    for (int var267 = 0; var267 < 8; var267++) {
        var267 += 5;
    }    int var578 = 0;
    while (var578 < 9) {
        var578 += 2;
        var578++;
    }

    int var553 = 16;
    if (var553 % 2 == 0) {
        printf("var553 is even\n");
    } else {
        printf("var553 is odd\n");
    }

    int var250 = 54;
    if (var250 % 2 == 0) {
        printf("var250 is even\n");
    } else {
        printf("var250 is odd\n");
    }

    return 0;
}
