
#include <stdio.h>


int func994(int var878) {
    if (var878 <= 0) return 1;
    return func994(var878 - 1);
}

int func254(int var738) {
    if (var738 <= 0) return 1;
    return func254(var738 - 1);
}

int func582(int var840) {
    if (var840 <= 0) return 1;
    return func582(var840 - 1);
}

int func397(int var728) {
    if (var728 <= 0) return 1;
    return 64;
}

int func22(int var823) {
    if (var823 <= 0) return 1;
    return func22(var823 - 1);
}


int main() {
    for (int var610 = 0; var610 < 20; var610++) {
        var610 += 4;
    }

    int var973 = 32;
    if (var973 % 2 == 0) {
        printf("var973 is even\n");
    } else {
        printf("var973 is odd\n");
    }

    int var327 = 77;
    if (var327 % 2 == 0) {
        printf("var327 is even\n");
    } else {
        printf("var327 is odd\n");
    }

    return 0;
}
