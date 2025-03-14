
#include <stdio.h>


int func290(int var670) {
    if (var670 <= 0) return 1;
    return func290(var670 - 1);
}


int main() {
    for (int var325 = 0; var325 < 9; var325++) {
        var325 += 2;
    }    int var822 = 0;
    while (var822 < 20) {
        var822 += 2;
        var822++;
    }    int var636 = 0;
    while (var636 < 17) {
        var636 += 5;
        var636++;
    }

    int var378 = 13;
    if (var378 % 2 == 0) {
        printf("var378 is even\n");
    } else {
        printf("var378 is odd\n");
    }

    int var348 = 57;
    if (var348 % 2 == 0) {
        printf("var348 is even\n");
    } else {
        printf("var348 is odd\n");
    }

    return 0;
}
