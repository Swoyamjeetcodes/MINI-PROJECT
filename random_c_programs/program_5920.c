
#include <stdio.h>


int func155(int var630) {
    if (var630 <= 0) return 1;
    return func155(var630 - 1);
}


int main() {
    int var159 = 0;
    while (var159 < 10) {
        var159 += 4;
        var159++;
    }    int var530 = 0;
    while (var530 < 20) {
        var530 += 2;
        var530++;
    }

    int var758 = 32;
    if (var758 % 2 == 0) {
        printf("var758 is even\n");
    } else {
        printf("var758 is odd\n");
    }

    int var259 = 26;
    if (var259 % 2 == 0) {
        printf("var259 is even\n");
    } else {
        printf("var259 is odd\n");
    }

    int var414 = 79;
    if (var414 % 2 == 0) {
        printf("var414 is even\n");
    } else {
        printf("var414 is odd\n");
    }

    return 0;
}
