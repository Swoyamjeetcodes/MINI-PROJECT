
#include <stdio.h>


int func8(int var366) {
    if (var366 <= 0) return 1;
    return func8(var366 - 1);
}

int func238(int var296) {
    if (var296 <= 0) return 1;
    return 42;
}

int func358(int var454) {
    if (var454 <= 0) return 1;
    return 21;
}

int func937(int var483) {
    if (var483 <= 0) return 1;
    return func937(var483 - 1);
}


int main() {
    int var265 = 0;
    while (var265 < 9) {
        var265 += 2;
        var265++;
    }    int var821 = 0;
    while (var821 < 12) {
        var821 += 4;
        var821++;
    }

    int var669 = 86;
    if (var669 % 2 == 0) {
        printf("var669 is even\n");
    } else {
        printf("var669 is odd\n");
    }

    int var559 = 58;
    if (var559 % 2 == 0) {
        printf("var559 is even\n");
    } else {
        printf("var559 is odd\n");
    }

    return 0;
}
