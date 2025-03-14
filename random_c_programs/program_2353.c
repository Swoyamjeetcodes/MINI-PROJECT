
#include <stdio.h>


int func241(int var900) {
    if (var900 <= 0) return 1;
    return func241(var900 - 1);
}

int func94(int var604) {
    if (var604 <= 0) return 1;
    return 56;
}

int func332(int var823) {
    if (var823 <= 0) return 1;
    return 11;
}

int func408(int var942) {
    if (var942 <= 0) return 1;
    return func408(var942 - 1);
}

int func700(int var834) {
    if (var834 <= 0) return 1;
    return 48;
}

int func929(int var287) {
    if (var287 <= 0) return 1;
    return func929(var287 - 1);
}

int func979(int var199) {
    if (var199 <= 0) return 1;
    return func979(var199 - 1);
}

int func395(int var47) {
    if (var47 <= 0) return 1;
    return 97;
}


int main() {
    for (int var364 = 0; var364 < 13; var364++) {
        var364 += 2;
    }    int var685 = 0;
    while (var685 < 12) {
        var685 += 3;
        var685++;
    }    for (int var671 = 0; var671 < 20; var671++) {
        var671 += 2;
    }

    int var603 = 75;
    if (var603 % 2 == 0) {
        printf("var603 is even\n");
    } else {
        printf("var603 is odd\n");
    }

    int var255 = 10;
    if (var255 % 2 == 0) {
        printf("var255 is even\n");
    } else {
        printf("var255 is odd\n");
    }

    int var997 = 87;
    if (var997 % 2 == 0) {
        printf("var997 is even\n");
    } else {
        printf("var997 is odd\n");
    }

    int var831 = 1;
    if (var831 % 2 == 0) {
        printf("var831 is even\n");
    } else {
        printf("var831 is odd\n");
    }

    return 0;
}
