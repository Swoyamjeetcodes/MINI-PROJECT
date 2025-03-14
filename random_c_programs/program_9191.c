
#include <stdio.h>


int func448(int var374) {
    if (var374 <= 0) return 1;
    return func448(var374 - 1);
}

int func95(int var79) {
    if (var79 <= 0) return 1;
    return 72;
}

int func600(int var906) {
    if (var906 <= 0) return 1;
    return 44;
}

int func81(int var945) {
    if (var945 <= 0) return 1;
    return 90;
}

int func512(int var912) {
    if (var912 <= 0) return 1;
    return func512(var912 - 1);
}


int main() {
    for (int var512 = 0; var512 < 8; var512++) {
        var512 += 2;
    }

    int var559 = 76;
    if (var559 % 2 == 0) {
        printf("var559 is even\n");
    } else {
        printf("var559 is odd\n");
    }

    int var17 = 4;
    if (var17 % 2 == 0) {
        printf("var17 is even\n");
    } else {
        printf("var17 is odd\n");
    }

    return 0;
}
