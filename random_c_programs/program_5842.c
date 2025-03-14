
#include <stdio.h>


int func608(int var175) {
    if (var175 <= 0) return 1;
    return func608(var175 - 1);
}


int main() {
    int var932 = 0;
    while (var932 < 10) {
        var932 += 4;
        var932++;
    }

    int var374 = 62;
    if (var374 % 2 == 0) {
        printf("var374 is even\n");
    } else {
        printf("var374 is odd\n");
    }

    int var384 = 5;
    if (var384 % 2 == 0) {
        printf("var384 is even\n");
    } else {
        printf("var384 is odd\n");
    }

    int var380 = 91;
    if (var380 % 2 == 0) {
        printf("var380 is even\n");
    } else {
        printf("var380 is odd\n");
    }

    return 0;
}
