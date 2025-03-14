
#include <stdio.h>


int func182(int var780) {
    if (var780 <= 0) return 1;
    return func182(var780 - 1);
}

int func456(int var737) {
    if (var737 <= 0) return 1;
    return 51;
}

int func349(int var292) {
    if (var292 <= 0) return 1;
    return func349(var292 - 1);
}

int func19(int var299) {
    if (var299 <= 0) return 1;
    return func19(var299 - 1);
}

int func621(int var723) {
    if (var723 <= 0) return 1;
    return func621(var723 - 1);
}


int main() {
    int var757 = 0;
    while (var757 < 14) {
        var757 += 5;
        var757++;
    }    for (int var676 = 0; var676 < 6; var676++) {
        var676 += 2;
    }    int var61 = 0;
    while (var61 < 20) {
        var61 += 1;
        var61++;
    }

    int var819 = 6;
    if (var819 % 2 == 0) {
        printf("var819 is even\n");
    } else {
        printf("var819 is odd\n");
    }

    int var419 = 99;
    if (var419 % 2 == 0) {
        printf("var419 is even\n");
    } else {
        printf("var419 is odd\n");
    }

    return 0;
}
