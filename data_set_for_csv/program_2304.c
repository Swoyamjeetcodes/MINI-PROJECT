
#include <stdio.h>


int func113(int var295) {
    if (var295 <= 0) return 1;
    return func113(var295 - 1);
}

int func694(int var51) {
    if (var51 <= 0) return 1;
    return func694(var51 - 1);
}


int main() {
    int var814 = 0;
    while (var814 < 7) {
        var814 += 2;
        var814++;
    }    int var915 = 0;
    while (var915 < 9) {
        var915 += 4;
        var915++;
    }

    int var415 = 61;
    if (var415 % 2 == 0) {
        printf("var415 is even\n");
    } else {
        printf("var415 is odd\n");
    }

    int var689 = 73;
    if (var689 % 2 == 0) {
        printf("var689 is even\n");
    } else {
        printf("var689 is odd\n");
    }

    int var707 = 69;
    if (var707 % 2 == 0) {
        printf("var707 is even\n");
    } else {
        printf("var707 is odd\n");
    }

    return 0;
}
