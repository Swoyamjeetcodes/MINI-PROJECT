
#include <stdio.h>


int func764(int var71) {
    if (var71 <= 0) return 1;
    return func764(var71 - 1);
}


int main() {
    for (int var476 = 0; var476 < 17; var476++) {
        var476 += 2;
    }    for (int var456 = 0; var456 < 12; var456++) {
        var456 += 4;
    }    for (int var564 = 0; var564 < 18; var564++) {
        var564 += 1;
    }

    int var141 = 87;
    if (var141 % 2 == 0) {
        printf("var141 is even\n");
    } else {
        printf("var141 is odd\n");
    }

    int var587 = 58;
    if (var587 % 2 == 0) {
        printf("var587 is even\n");
    } else {
        printf("var587 is odd\n");
    }

    int var482 = 72;
    if (var482 % 2 == 0) {
        printf("var482 is even\n");
    } else {
        printf("var482 is odd\n");
    }

    return 0;
}
