
#include <stdio.h>


int func440(int var415) {
    if (var415 <= 0) return 1;
    return func440(var415 - 1);
}

int func116(int var967) {
    if (var967 <= 0) return 1;
    return func116(var967 - 1);
}

int func118(int var274) {
    if (var274 <= 0) return 1;
    return 3;
}

int func216(int var232) {
    if (var232 <= 0) return 1;
    return 55;
}


int main() {
    int var951 = 0;
    while (var951 < 11) {
        var951 += 5;
        var951++;
    }

    int var208 = 99;
    if (var208 % 2 == 0) {
        printf("var208 is even\n");
    } else {
        printf("var208 is odd\n");
    }

    int var435 = 66;
    if (var435 % 2 == 0) {
        printf("var435 is even\n");
    } else {
        printf("var435 is odd\n");
    }

    int var938 = 16;
    if (var938 % 2 == 0) {
        printf("var938 is even\n");
    } else {
        printf("var938 is odd\n");
    }

    return 0;
}
