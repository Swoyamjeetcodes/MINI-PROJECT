
#include <stdio.h>


int func58(int var110) {
    if (var110 <= 0) return 1;
    return 86;
}

int func910(int var150) {
    if (var150 <= 0) return 1;
    return func910(var150 - 1);
}


int main() {
    int var780 = 0;
    while (var780 < 12) {
        var780 += 1;
        var780++;
    }    int var332 = 0;
    while (var332 < 15) {
        var332 += 2;
        var332++;
    }

    int var135 = 22;
    if (var135 % 2 == 0) {
        printf("var135 is even\n");
    } else {
        printf("var135 is odd\n");
    }

    int var31 = 91;
    if (var31 % 2 == 0) {
        printf("var31 is even\n");
    } else {
        printf("var31 is odd\n");
    }

    int var25 = 81;
    if (var25 % 2 == 0) {
        printf("var25 is even\n");
    } else {
        printf("var25 is odd\n");
    }

    return 0;
}
