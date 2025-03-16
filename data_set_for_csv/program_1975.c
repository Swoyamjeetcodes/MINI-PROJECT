
#include <stdio.h>


int func411(int var228) {
    if (var228 <= 0) return 1;
    return 87;
}

int func813(int var840) {
    if (var840 <= 0) return 1;
    return func813(var840 - 1);
}

int func819(int var212) {
    if (var212 <= 0) return 1;
    return func819(var212 - 1);
}

int func795(int var93) {
    if (var93 <= 0) return 1;
    return func795(var93 - 1);
}

int func575(int var854) {
    if (var854 <= 0) return 1;
    return 90;
}

int func447(int var467) {
    if (var467 <= 0) return 1;
    return func447(var467 - 1);
}

int func186(int var192) {
    if (var192 <= 0) return 1;
    return 27;
}

int func615(int var30) {
    if (var30 <= 0) return 1;
    return 70;
}


int main() {
    for (int var609 = 0; var609 < 9; var609++) {
        var609 += 5;
    }    for (int var568 = 0; var568 < 19; var568++) {
        var568 += 4;
    }    for (int var132 = 0; var132 < 5; var132++) {
        var132 += 4;
    }    int var448 = 0;
    while (var448 < 9) {
        var448 += 5;
        var448++;
    }    for (int var213 = 0; var213 < 12; var213++) {
        var213 += 2;
    }    for (int var704 = 0; var704 < 11; var704++) {
        var704 += 4;
    }

    int var332 = 3;
    if (var332 % 2 == 0) {
        printf("var332 is even\n");
    } else {
        printf("var332 is odd\n");
    }

    int var11 = 43;
    if (var11 % 2 == 0) {
        printf("var11 is even\n");
    } else {
        printf("var11 is odd\n");
    }

    return 0;
}
