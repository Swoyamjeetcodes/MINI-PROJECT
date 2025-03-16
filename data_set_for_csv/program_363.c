
#include <stdio.h>


int func815(int var426) {
    if (var426 <= 0) return 1;
    return func815(var426 - 1);
}


int main() {
    int var948 = 0;
    while (var948 < 6) {
        var948 += 2;
        var948++;
    }    int var476 = 0;
    while (var476 < 5) {
        var476 += 2;
        var476++;
    }

    int var809 = 75;
    if (var809 % 2 == 0) {
        printf("var809 is even\n");
    } else {
        printf("var809 is odd\n");
    }

    return 0;
}
