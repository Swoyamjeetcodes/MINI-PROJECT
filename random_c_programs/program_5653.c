
#include <stdio.h>


int func985(int var824) {
    if (var824 <= 0) return 1;
    return func985(var824 - 1);
}

int func352(int var353) {
    if (var353 <= 0) return 1;
    return func352(var353 - 1);
}

int func210(int var490) {
    if (var490 <= 0) return 1;
    return func210(var490 - 1);
}


int main() {
    int var857 = 0;
    while (var857 < 11) {
        var857 += 3;
        var857++;
    }    for (int var47 = 0; var47 < 16; var47++) {
        var47 += 2;
    }    for (int var33 = 0; var33 < 14; var33++) {
        var33 += 4;
    }

    int var300 = 10;
    if (var300 % 2 == 0) {
        printf("var300 is even\n");
    } else {
        printf("var300 is odd\n");
    }

    int var502 = 41;
    if (var502 % 2 == 0) {
        printf("var502 is even\n");
    } else {
        printf("var502 is odd\n");
    }

    int var3 = 81;
    if (var3 % 2 == 0) {
        printf("var3 is even\n");
    } else {
        printf("var3 is odd\n");
    }

    int var478 = 95;
    if (var478 % 2 == 0) {
        printf("var478 is even\n");
    } else {
        printf("var478 is odd\n");
    }

    int var726 = 46;
    if (var726 % 2 == 0) {
        printf("var726 is even\n");
    } else {
        printf("var726 is odd\n");
    }

    int var534 = 53;
    if (var534 % 2 == 0) {
        printf("var534 is even\n");
    } else {
        printf("var534 is odd\n");
    }

    return 0;
}
