
#include <stdio.h>


int func159(int var943) {
    if (var943 <= 0) return 1;
    return func159(var943 - 1);
}

int func907(int var27) {
    if (var27 <= 0) return 1;
    return func907(var27 - 1);
}

int func592(int var374) {
    if (var374 <= 0) return 1;
    return 88;
}

int func868(int var563) {
    if (var563 <= 0) return 1;
    return func868(var563 - 1);
}

int func32(int var519) {
    if (var519 <= 0) return 1;
    return func32(var519 - 1);
}

int func87(int var282) {
    if (var282 <= 0) return 1;
    return func87(var282 - 1);
}


int main() {
    int var641 = 0;
    while (var641 < 11) {
        var641 += 5;
        var641++;
    }    for (int var921 = 0; var921 < 15; var921++) {
        var921 += 1;
    }    for (int var225 = 0; var225 < 13; var225++) {
        var225 += 4;
    }    for (int var801 = 0; var801 < 10; var801++) {
        var801 += 4;
    }    int var524 = 0;
    while (var524 < 6) {
        var524 += 3;
        var524++;
    }

    int var770 = 16;
    if (var770 % 2 == 0) {
        printf("var770 is even\n");
    } else {
        printf("var770 is odd\n");
    }

    int var460 = 98;
    if (var460 % 2 == 0) {
        printf("var460 is even\n");
    } else {
        printf("var460 is odd\n");
    }

    int var284 = 51;
    if (var284 % 2 == 0) {
        printf("var284 is even\n");
    } else {
        printf("var284 is odd\n");
    }

    return 0;
}
