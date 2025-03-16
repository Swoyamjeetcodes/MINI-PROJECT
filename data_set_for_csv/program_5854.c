
#include <stdio.h>


int func255(int var645) {
    if (var645 <= 0) return 1;
    return func255(var645 - 1);
}


int main() {
    int var485 = 0;
    while (var485 < 14) {
        var485 += 4;
        var485++;
    }

    int var319 = 80;
    if (var319 % 2 == 0) {
        printf("var319 is even\n");
    } else {
        printf("var319 is odd\n");
    }

    return 0;
}
