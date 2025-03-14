
#include <stdio.h>


int func109(int var852) {
    if (var852 <= 0) return 1;
    return func109(var852 - 1);
}


int main() {
    int var618 = 0;
    while (var618 < 9) {
        var618 += 4;
        var618++;
    }    for (int var658 = 0; var658 < 9; var658++) {
        var658 += 2;
    }

    int var641 = 34;
    if (var641 % 2 == 0) {
        printf("var641 is even\n");
    } else {
        printf("var641 is odd\n");
    }

    int var399 = 63;
    if (var399 % 2 == 0) {
        printf("var399 is even\n");
    } else {
        printf("var399 is odd\n");
    }

    int var868 = 12;
    if (var868 % 2 == 0) {
        printf("var868 is even\n");
    } else {
        printf("var868 is odd\n");
    }

    int var167 = 75;
    if (var167 % 2 == 0) {
        printf("var167 is even\n");
    } else {
        printf("var167 is odd\n");
    }

    int var678 = 80;
    if (var678 % 2 == 0) {
        printf("var678 is even\n");
    } else {
        printf("var678 is odd\n");
    }

    return 0;
}
