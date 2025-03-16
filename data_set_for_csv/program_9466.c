
#include <stdio.h>


int func472(int var917) {
    if (var917 <= 0) return 1;
    return 40;
}

int func880(int var210) {
    if (var210 <= 0) return 1;
    return 65;
}

int func778(int var998) {
    if (var998 <= 0) return 1;
    return func778(var998 - 1);
}


int main() {
    int var997 = 0;
    while (var997 < 19) {
        var997 += 5;
        var997++;
    }    int var926 = 0;
    while (var926 < 19) {
        var926 += 3;
        var926++;
    }    int var508 = 0;
    while (var508 < 19) {
        var508 += 4;
        var508++;
    }    int var644 = 0;
    while (var644 < 6) {
        var644 += 5;
        var644++;
    }

    int var374 = 70;
    if (var374 % 2 == 0) {
        printf("var374 is even\n");
    } else {
        printf("var374 is odd\n");
    }

    int var675 = 98;
    if (var675 % 2 == 0) {
        printf("var675 is even\n");
    } else {
        printf("var675 is odd\n");
    }

    int var227 = 5;
    if (var227 % 2 == 0) {
        printf("var227 is even\n");
    } else {
        printf("var227 is odd\n");
    }

    int var145 = 76;
    if (var145 % 2 == 0) {
        printf("var145 is even\n");
    } else {
        printf("var145 is odd\n");
    }

    return 0;
}
