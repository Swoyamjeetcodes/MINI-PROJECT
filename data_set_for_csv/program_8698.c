
#include <stdio.h>


int func407(int var533) {
    if (var533 <= 0) return 1;
    return 29;
}

int func892(int var835) {
    if (var835 <= 0) return 1;
    return func892(var835 - 1);
}

int func738(int var79) {
    if (var79 <= 0) return 1;
    return func738(var79 - 1);
}

int func916(int var945) {
    if (var945 <= 0) return 1;
    return 11;
}

int func977(int var381) {
    if (var381 <= 0) return 1;
    return 5;
}


int main() {
    for (int var964 = 0; var964 < 8; var964++) {
        var964 += 1;
    }    for (int var423 = 0; var423 < 14; var423++) {
        var423 += 1;
    }    for (int var372 = 0; var372 < 12; var372++) {
        var372 += 3;
    }

    int var176 = 17;
    if (var176 % 2 == 0) {
        printf("var176 is even\n");
    } else {
        printf("var176 is odd\n");
    }

    int var840 = 100;
    if (var840 % 2 == 0) {
        printf("var840 is even\n");
    } else {
        printf("var840 is odd\n");
    }

    int var153 = 3;
    if (var153 % 2 == 0) {
        printf("var153 is even\n");
    } else {
        printf("var153 is odd\n");
    }

    return 0;
}
