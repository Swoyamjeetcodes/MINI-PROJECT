
#include <stdio.h>


int func731(int var950) {
    if (var950 <= 0) return 1;
    return func731(var950 - 1);
}

int func576(int var515) {
    if (var515 <= 0) return 1;
    return func576(var515 - 1);
}

int func830(int var2) {
    if (var2 <= 0) return 1;
    return 11;
}


int main() {
    int var55 = 0;
    while (var55 < 15) {
        var55 += 5;
        var55++;
    }    int var516 = 0;
    while (var516 < 18) {
        var516 += 1;
        var516++;
    }    int var464 = 0;
    while (var464 < 10) {
        var464 += 1;
        var464++;
    }    for (int var92 = 0; var92 < 7; var92++) {
        var92 += 5;
    }    int var293 = 0;
    while (var293 < 5) {
        var293 += 3;
        var293++;
    }

    int var406 = 49;
    if (var406 % 2 == 0) {
        printf("var406 is even\n");
    } else {
        printf("var406 is odd\n");
    }

    int var186 = 64;
    if (var186 % 2 == 0) {
        printf("var186 is even\n");
    } else {
        printf("var186 is odd\n");
    }

    return 0;
}
