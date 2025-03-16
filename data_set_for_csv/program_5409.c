
#include <stdio.h>


int func653(int var314) {
    if (var314 <= 0) return 1;
    return 55;
}

int func61(int var31) {
    if (var31 <= 0) return 1;
    return func61(var31 - 1);
}

int func129(int var985) {
    if (var985 <= 0) return 1;
    return 81;
}

int func378(int var411) {
    if (var411 <= 0) return 1;
    return 1;
}


int main() {
    for (int var348 = 0; var348 < 9; var348++) {
        var348 += 5;
    }    for (int var649 = 0; var649 < 10; var649++) {
        var649 += 2;
    }    int var188 = 0;
    while (var188 < 14) {
        var188 += 4;
        var188++;
    }

    int var145 = 55;
    if (var145 % 2 == 0) {
        printf("var145 is even\n");
    } else {
        printf("var145 is odd\n");
    }

    int var806 = 52;
    if (var806 % 2 == 0) {
        printf("var806 is even\n");
    } else {
        printf("var806 is odd\n");
    }

    int var317 = 42;
    if (var317 % 2 == 0) {
        printf("var317 is even\n");
    } else {
        printf("var317 is odd\n");
    }

    return 0;
}
