
#include <stdio.h>


int func401(int var124) {
    if (var124 <= 0) return 1;
    return 22;
}

int func922(int var168) {
    if (var168 <= 0) return 1;
    return 92;
}

int func952(int var1) {
    if (var1 <= 0) return 1;
    return func952(var1 - 1);
}

int func669(int var649) {
    if (var649 <= 0) return 1;
    return func669(var649 - 1);
}

int func670(int var373) {
    if (var373 <= 0) return 1;
    return func670(var373 - 1);
}


int main() {
    int var631 = 0;
    while (var631 < 18) {
        var631 += 5;
        var631++;
    }    int var617 = 0;
    while (var617 < 6) {
        var617 += 4;
        var617++;
    }    int var150 = 0;
    while (var150 < 14) {
        var150 += 2;
        var150++;
    }

    int var141 = 99;
    if (var141 % 2 == 0) {
        printf("var141 is even\n");
    } else {
        printf("var141 is odd\n");
    }

    int var653 = 38;
    if (var653 % 2 == 0) {
        printf("var653 is even\n");
    } else {
        printf("var653 is odd\n");
    }

    int var644 = 57;
    if (var644 % 2 == 0) {
        printf("var644 is even\n");
    } else {
        printf("var644 is odd\n");
    }

    return 0;
}
