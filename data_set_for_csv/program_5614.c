
#include <stdio.h>


int func646(int var8) {
    if (var8 <= 0) return 1;
    return func646(var8 - 1);
}

int func165(int var305) {
    if (var305 <= 0) return 1;
    return 7;
}

int func8(int var945) {
    if (var945 <= 0) return 1;
    return func8(var945 - 1);
}

int func512(int var243) {
    if (var243 <= 0) return 1;
    return 95;
}


int main() {
    int var361 = 0;
    while (var361 < 9) {
        var361 += 2;
        var361++;
    }    int var506 = 0;
    while (var506 < 15) {
        var506 += 5;
        var506++;
    }

    int var978 = 43;
    if (var978 % 2 == 0) {
        printf("var978 is even\n");
    } else {
        printf("var978 is odd\n");
    }

    int var813 = 67;
    if (var813 % 2 == 0) {
        printf("var813 is even\n");
    } else {
        printf("var813 is odd\n");
    }

    int var917 = 39;
    if (var917 % 2 == 0) {
        printf("var917 is even\n");
    } else {
        printf("var917 is odd\n");
    }

    return 0;
}
