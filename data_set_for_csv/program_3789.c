
#include <stdio.h>


int func624(int var476) {
    if (var476 <= 0) return 1;
    return func624(var476 - 1);
}


int main() {
    int var814 = 0;
    while (var814 < 8) {
        var814 += 2;
        var814++;
    }

    int var727 = 70;
    if (var727 % 2 == 0) {
        printf("var727 is even\n");
    } else {
        printf("var727 is odd\n");
    }

    return 0;
}
