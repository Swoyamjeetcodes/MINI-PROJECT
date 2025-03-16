
#include <stdio.h>


int func440(int var610) {
    if (var610 <= 0) return 1;
    return func440(var610 - 1);
}

int func665(int var843) {
    if (var843 <= 0) return 1;
    return 50;
}


int main() {
    for (int var452 = 0; var452 < 9; var452++) {
        var452 += 3;
    }    int var723 = 0;
    while (var723 < 9) {
        var723 += 1;
        var723++;
    }    for (int var519 = 0; var519 < 6; var519++) {
        var519 += 5;
    }

    int var341 = 73;
    if (var341 % 2 == 0) {
        printf("var341 is even\n");
    } else {
        printf("var341 is odd\n");
    }

    int var848 = 92;
    if (var848 % 2 == 0) {
        printf("var848 is even\n");
    } else {
        printf("var848 is odd\n");
    }

    return 0;
}
