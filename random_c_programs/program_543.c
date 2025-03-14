
#include <stdio.h>


int func463(int var60) {
    if (var60 <= 0) return 1;
    return 38;
}

int func505(int var883) {
    if (var883 <= 0) return 1;
    return func505(var883 - 1);
}

int func290(int var877) {
    if (var877 <= 0) return 1;
    return func290(var877 - 1);
}


int main() {
    int var945 = 0;
    while (var945 < 9) {
        var945 += 4;
        var945++;
    }    int var460 = 0;
    while (var460 < 12) {
        var460 += 3;
        var460++;
    }

    int var332 = 7;
    if (var332 % 2 == 0) {
        printf("var332 is even\n");
    } else {
        printf("var332 is odd\n");
    }

    return 0;
}
