
#include <stdio.h>


int func901(int var74) {
    if (var74 <= 0) return 1;
    return func901(var74 - 1);
}

int func303(int var649) {
    if (var649 <= 0) return 1;
    return func303(var649 - 1);
}

int func666(int var982) {
    if (var982 <= 0) return 1;
    return func666(var982 - 1);
}

int func327(int var90) {
    if (var90 <= 0) return 1;
    return 68;
}

int func130(int var224) {
    if (var224 <= 0) return 1;
    return 92;
}


int main() {
    int var653 = 0;
    while (var653 < 12) {
        var653 += 2;
        var653++;
    }    int var553 = 0;
    while (var553 < 9) {
        var553 += 2;
        var553++;
    }    for (int var750 = 0; var750 < 20; var750++) {
        var750 += 4;
    }

    int var778 = 29;
    if (var778 % 2 == 0) {
        printf("var778 is even\n");
    } else {
        printf("var778 is odd\n");
    }

    int var332 = 36;
    if (var332 % 2 == 0) {
        printf("var332 is even\n");
    } else {
        printf("var332 is odd\n");
    }

    int var929 = 90;
    if (var929 % 2 == 0) {
        printf("var929 is even\n");
    } else {
        printf("var929 is odd\n");
    }

    return 0;
}
