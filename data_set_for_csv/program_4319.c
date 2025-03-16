
#include <stdio.h>


int func88(int var810) {
    if (var810 <= 0) return 1;
    return func88(var810 - 1);
}

int func309(int var23) {
    if (var23 <= 0) return 1;
    return 9;
}

int func48(int var665) {
    if (var665 <= 0) return 1;
    return func48(var665 - 1);
}

int func524(int var266) {
    if (var266 <= 0) return 1;
    return func524(var266 - 1);
}


int main() {
    int var325 = 0;
    while (var325 < 5) {
        var325 += 4;
        var325++;
    }

    int var554 = 64;
    if (var554 % 2 == 0) {
        printf("var554 is even\n");
    } else {
        printf("var554 is odd\n");
    }

    int var390 = 40;
    if (var390 % 2 == 0) {
        printf("var390 is even\n");
    } else {
        printf("var390 is odd\n");
    }

    int var355 = 69;
    if (var355 % 2 == 0) {
        printf("var355 is even\n");
    } else {
        printf("var355 is odd\n");
    }

    return 0;
}
