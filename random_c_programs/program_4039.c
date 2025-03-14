
#include <stdio.h>


int func837(int var293) {
    if (var293 <= 0) return 1;
    return func837(var293 - 1);
}

int func195(int var395) {
    if (var395 <= 0) return 1;
    return func195(var395 - 1);
}

int func819(int var905) {
    if (var905 <= 0) return 1;
    return func819(var905 - 1);
}

int func897(int var450) {
    if (var450 <= 0) return 1;
    return 35;
}

int func853(int var921) {
    if (var921 <= 0) return 1;
    return func853(var921 - 1);
}


int main() {
    for (int var644 = 0; var644 < 18; var644++) {
        var644 += 2;
    }    for (int var787 = 0; var787 < 20; var787++) {
        var787 += 2;
    }

    int var835 = 84;
    if (var835 % 2 == 0) {
        printf("var835 is even\n");
    } else {
        printf("var835 is odd\n");
    }

    int var371 = 45;
    if (var371 % 2 == 0) {
        printf("var371 is even\n");
    } else {
        printf("var371 is odd\n");
    }

    int var863 = 90;
    if (var863 % 2 == 0) {
        printf("var863 is even\n");
    } else {
        printf("var863 is odd\n");
    }

    return 0;
}
