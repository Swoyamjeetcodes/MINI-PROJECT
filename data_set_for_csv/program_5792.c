
#include <stdio.h>


int func460(int var500) {
    if (var500 <= 0) return 1;
    return 16;
}

int func447(int var285) {
    if (var285 <= 0) return 1;
    return 18;
}

int func743(int var863) {
    if (var863 <= 0) return 1;
    return func743(var863 - 1);
}

int func998(int var197) {
    if (var197 <= 0) return 1;
    return 63;
}


int main() {
    for (int var697 = 0; var697 < 11; var697++) {
        var697 += 4;
    }    int var560 = 0;
    while (var560 < 7) {
        var560 += 1;
        var560++;
    }    for (int var80 = 0; var80 < 12; var80++) {
        var80 += 1;
    }    int var279 = 0;
    while (var279 < 16) {
        var279 += 3;
        var279++;
    }    int var445 = 0;
    while (var445 < 7) {
        var445 += 1;
        var445++;
    }

    int var478 = 54;
    if (var478 % 2 == 0) {
        printf("var478 is even\n");
    } else {
        printf("var478 is odd\n");
    }

    int var267 = 13;
    if (var267 % 2 == 0) {
        printf("var267 is even\n");
    } else {
        printf("var267 is odd\n");
    }

    int var108 = 98;
    if (var108 % 2 == 0) {
        printf("var108 is even\n");
    } else {
        printf("var108 is odd\n");
    }

    return 0;
}
