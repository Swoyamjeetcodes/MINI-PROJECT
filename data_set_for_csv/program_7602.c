
#include <stdio.h>


int func154(int var34) {
    if (var34 <= 0) return 1;
    return func154(var34 - 1);
}

int func807(int var142) {
    if (var142 <= 0) return 1;
    return func807(var142 - 1);
}

int func481(int var886) {
    if (var886 <= 0) return 1;
    return 91;
}

int func37(int var213) {
    if (var213 <= 0) return 1;
    return func37(var213 - 1);
}


int main() {
    int var637 = 0;
    while (var637 < 18) {
        var637 += 4;
        var637++;
    }

    int var83 = 14;
    if (var83 % 2 == 0) {
        printf("var83 is even\n");
    } else {
        printf("var83 is odd\n");
    }

    int var626 = 2;
    if (var626 % 2 == 0) {
        printf("var626 is even\n");
    } else {
        printf("var626 is odd\n");
    }

    int var402 = 12;
    if (var402 % 2 == 0) {
        printf("var402 is even\n");
    } else {
        printf("var402 is odd\n");
    }

    return 0;
}
