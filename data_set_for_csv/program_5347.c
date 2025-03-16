
#include <stdio.h>


int func208(int var57) {
    if (var57 <= 0) return 1;
    return func208(var57 - 1);
}

int func920(int var513) {
    if (var513 <= 0) return 1;
    return 25;
}

int func999(int var297) {
    if (var297 <= 0) return 1;
    return func999(var297 - 1);
}


int main() {
    for (int var303 = 0; var303 < 6; var303++) {
        var303 += 5;
    }    for (int var851 = 0; var851 < 14; var851++) {
        var851 += 2;
    }

    int var644 = 86;
    if (var644 % 2 == 0) {
        printf("var644 is even\n");
    } else {
        printf("var644 is odd\n");
    }

    int var950 = 40;
    if (var950 % 2 == 0) {
        printf("var950 is even\n");
    } else {
        printf("var950 is odd\n");
    }

    int var499 = 48;
    if (var499 % 2 == 0) {
        printf("var499 is even\n");
    } else {
        printf("var499 is odd\n");
    }

    return 0;
}
