
#include <stdio.h>


int func122(int var70) {
    if (var70 <= 0) return 1;
    return func122(var70 - 1);
}

int func607(int var104) {
    if (var104 <= 0) return 1;
    return func607(var104 - 1);
}

int func503(int var707) {
    if (var707 <= 0) return 1;
    return func503(var707 - 1);
}

int func608(int var183) {
    if (var183 <= 0) return 1;
    return 43;
}


int main() {
    int var430 = 0;
    while (var430 < 18) {
        var430 += 1;
        var430++;
    }    int var88 = 0;
    while (var88 < 18) {
        var88 += 5;
        var88++;
    }    int var222 = 0;
    while (var222 < 5) {
        var222 += 1;
        var222++;
    }

    int var630 = 48;
    if (var630 % 2 == 0) {
        printf("var630 is even\n");
    } else {
        printf("var630 is odd\n");
    }

    int var75 = 5;
    if (var75 % 2 == 0) {
        printf("var75 is even\n");
    } else {
        printf("var75 is odd\n");
    }

    int var809 = 97;
    if (var809 % 2 == 0) {
        printf("var809 is even\n");
    } else {
        printf("var809 is odd\n");
    }

    return 0;
}
