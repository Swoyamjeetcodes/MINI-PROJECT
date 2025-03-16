
#include <stdio.h>


int func382(int var817) {
    if (var817 <= 0) return 1;
    return func382(var817 - 1);
}


int main() {
    int var831 = 0;
    while (var831 < 12) {
        var831 += 4;
        var831++;
    }

    int var811 = 51;
    if (var811 % 2 == 0) {
        printf("var811 is even\n");
    } else {
        printf("var811 is odd\n");
    }

    int var5 = 1;
    if (var5 % 2 == 0) {
        printf("var5 is even\n");
    } else {
        printf("var5 is odd\n");
    }

    int var739 = 67;
    if (var739 % 2 == 0) {
        printf("var739 is even\n");
    } else {
        printf("var739 is odd\n");
    }

    int var432 = 32;
    if (var432 % 2 == 0) {
        printf("var432 is even\n");
    } else {
        printf("var432 is odd\n");
    }

    return 0;
}
