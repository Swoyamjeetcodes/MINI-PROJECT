
#include <stdio.h>


int func216(int var664) {
    if (var664 <= 0) return 1;
    return func216(var664 - 1);
}


int main() {
    int var418 = 0;
    while (var418 < 6) {
        var418 += 4;
        var418++;
    }    for (int var602 = 0; var602 < 19; var602++) {
        var602 += 1;
    }    int var612 = 0;
    while (var612 < 20) {
        var612 += 4;
        var612++;
    }    int var91 = 0;
    while (var91 < 18) {
        var91 += 1;
        var91++;
    }    for (int var635 = 0; var635 < 18; var635++) {
        var635 += 4;
    }

    int var860 = 63;
    if (var860 % 2 == 0) {
        printf("var860 is even\n");
    } else {
        printf("var860 is odd\n");
    }

    return 0;
}
