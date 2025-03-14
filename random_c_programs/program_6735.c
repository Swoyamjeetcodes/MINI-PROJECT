
#include <stdio.h>


int func400(int var649) {
    if (var649 <= 0) return 1;
    return func400(var649 - 1);
}

int func638(int var311) {
    if (var311 <= 0) return 1;
    return func638(var311 - 1);
}

int func729(int var362) {
    if (var362 <= 0) return 1;
    return func729(var362 - 1);
}

int func363(int var24) {
    if (var24 <= 0) return 1;
    return func363(var24 - 1);
}


int main() {
    int var218 = 0;
    while (var218 < 18) {
        var218 += 3;
        var218++;
    }    int var59 = 0;
    while (var59 < 6) {
        var59 += 2;
        var59++;
    }    for (int var630 = 0; var630 < 16; var630++) {
        var630 += 4;
    }    for (int var487 = 0; var487 < 17; var487++) {
        var487 += 4;
    }    for (int var214 = 0; var214 < 19; var214++) {
        var214 += 5;
    }    int var310 = 0;
    while (var310 < 12) {
        var310 += 4;
        var310++;
    }

    int var301 = 12;
    if (var301 % 2 == 0) {
        printf("var301 is even\n");
    } else {
        printf("var301 is odd\n");
    }

    int var509 = 2;
    if (var509 % 2 == 0) {
        printf("var509 is even\n");
    } else {
        printf("var509 is odd\n");
    }

    return 0;
}
