
#include <stdio.h>


int func650(int var131) {
    if (var131 <= 0) return 1;
    return func650(var131 - 1);
}

int func810(int var456) {
    if (var456 <= 0) return 1;
    return func810(var456 - 1);
}

int func569(int var381) {
    if (var381 <= 0) return 1;
    return func569(var381 - 1);
}


int main() {
    for (int var850 = 0; var850 < 5; var850++) {
        var850 += 1;
    }    int var62 = 0;
    while (var62 < 19) {
        var62 += 3;
        var62++;
    }

    int var71 = 0;
    if (var71 % 2 == 0) {
        printf("var71 is even\n");
    } else {
        printf("var71 is odd\n");
    }

    int var920 = 64;
    if (var920 % 2 == 0) {
        printf("var920 is even\n");
    } else {
        printf("var920 is odd\n");
    }

    int var630 = 7;
    if (var630 % 2 == 0) {
        printf("var630 is even\n");
    } else {
        printf("var630 is odd\n");
    }

    return 0;
}
