
#include <stdio.h>


int func603(int var159) {
    if (var159 <= 0) return 1;
    return 54;
}

int func624(int var166) {
    if (var166 <= 0) return 1;
    return func624(var166 - 1);
}

int func35(int var488) {
    if (var488 <= 0) return 1;
    return func35(var488 - 1);
}

int func964(int var50) {
    if (var50 <= 0) return 1;
    return func964(var50 - 1);
}

int func732(int var529) {
    if (var529 <= 0) return 1;
    return func732(var529 - 1);
}


int main() {
    for (int var499 = 0; var499 < 12; var499++) {
        var499 += 4;
    }    for (int var453 = 0; var453 < 20; var453++) {
        var453 += 3;
    }    int var57 = 0;
    while (var57 < 15) {
        var57 += 1;
        var57++;
    }

    int var759 = 73;
    if (var759 % 2 == 0) {
        printf("var759 is even\n");
    } else {
        printf("var759 is odd\n");
    }

    int var694 = 66;
    if (var694 % 2 == 0) {
        printf("var694 is even\n");
    } else {
        printf("var694 is odd\n");
    }

    int var263 = 81;
    if (var263 % 2 == 0) {
        printf("var263 is even\n");
    } else {
        printf("var263 is odd\n");
    }

    int var273 = 16;
    if (var273 % 2 == 0) {
        printf("var273 is even\n");
    } else {
        printf("var273 is odd\n");
    }

    return 0;
}
