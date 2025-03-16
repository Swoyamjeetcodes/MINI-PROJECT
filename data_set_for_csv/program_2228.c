
#include <stdio.h>


int func971(int var919) {
    if (var919 <= 0) return 1;
    return func971(var919 - 1);
}


int main() {
    int var119 = 0;
    while (var119 < 17) {
        var119 += 3;
        var119++;
    }    int var725 = 0;
    while (var725 < 10) {
        var725 += 1;
        var725++;
    }    int var485 = 0;
    while (var485 < 17) {
        var485 += 3;
        var485++;
    }

    int var701 = 26;
    if (var701 % 2 == 0) {
        printf("var701 is even\n");
    } else {
        printf("var701 is odd\n");
    }

    int var266 = 3;
    if (var266 % 2 == 0) {
        printf("var266 is even\n");
    } else {
        printf("var266 is odd\n");
    }

    int var860 = 56;
    if (var860 % 2 == 0) {
        printf("var860 is even\n");
    } else {
        printf("var860 is odd\n");
    }

    return 0;
}
