
#include <stdio.h>


int func725(int var10) {
    if (var10 <= 0) return 1;
    return func725(var10 - 1);
}

int func374(int var636) {
    if (var636 <= 0) return 1;
    return 63;
}

int func544(int var600) {
    if (var600 <= 0) return 1;
    return 35;
}

int func165(int var750) {
    if (var750 <= 0) return 1;
    return func165(var750 - 1);
}


int main() {
    int var649 = 0;
    while (var649 < 18) {
        var649 += 1;
        var649++;
    }

    int var379 = 79;
    if (var379 % 2 == 0) {
        printf("var379 is even\n");
    } else {
        printf("var379 is odd\n");
    }

    int var598 = 15;
    if (var598 % 2 == 0) {
        printf("var598 is even\n");
    } else {
        printf("var598 is odd\n");
    }

    int var756 = 14;
    if (var756 % 2 == 0) {
        printf("var756 is even\n");
    } else {
        printf("var756 is odd\n");
    }

    return 0;
}
