
#include <stdio.h>


int func880(int var605) {
    if (var605 <= 0) return 1;
    return func880(var605 - 1);
}

int func11(int var70) {
    if (var70 <= 0) return 1;
    return func11(var70 - 1);
}

int func1(int var131) {
    if (var131 <= 0) return 1;
    return func1(var131 - 1);
}

int func847(int var317) {
    if (var317 <= 0) return 1;
    return 64;
}


int main() {
    for (int var938 = 0; var938 < 11; var938++) {
        var938 += 2;
    }    int var859 = 0;
    while (var859 < 19) {
        var859 += 5;
        var859++;
    }    for (int var755 = 0; var755 < 15; var755++) {
        var755 += 2;
    }    for (int var893 = 0; var893 < 6; var893++) {
        var893 += 4;
    }    for (int var30 = 0; var30 < 6; var30++) {
        var30 += 2;
    }    for (int var144 = 0; var144 < 16; var144++) {
        var144 += 2;
    }    int var119 = 0;
    while (var119 < 18) {
        var119 += 4;
        var119++;
    }

    int var212 = 98;
    if (var212 % 2 == 0) {
        printf("var212 is even\n");
    } else {
        printf("var212 is odd\n");
    }

    int var993 = 24;
    if (var993 % 2 == 0) {
        printf("var993 is even\n");
    } else {
        printf("var993 is odd\n");
    }

    int var902 = 70;
    if (var902 % 2 == 0) {
        printf("var902 is even\n");
    } else {
        printf("var902 is odd\n");
    }

    return 0;
}
