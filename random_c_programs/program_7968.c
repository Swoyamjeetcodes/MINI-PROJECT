
#include <stdio.h>


int func761(int var325) {
    if (var325 <= 0) return 1;
    return func761(var325 - 1);
}

int func492(int var451) {
    if (var451 <= 0) return 1;
    return 63;
}

int func831(int var795) {
    if (var795 <= 0) return 1;
    return 92;
}

int func526(int var78) {
    if (var78 <= 0) return 1;
    return func526(var78 - 1);
}


int main() {
    int var561 = 0;
    while (var561 < 9) {
        var561 += 4;
        var561++;
    }    int var551 = 0;
    while (var551 < 18) {
        var551 += 2;
        var551++;
    }    for (int var452 = 0; var452 < 7; var452++) {
        var452 += 2;
    }

    int var589 = 15;
    if (var589 % 2 == 0) {
        printf("var589 is even\n");
    } else {
        printf("var589 is odd\n");
    }

    return 0;
}
