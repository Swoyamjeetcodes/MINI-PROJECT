
#include <stdio.h>


int func635(int var612) {
    if (var612 <= 0) return 1;
    return func635(var612 - 1);
}


int main() {
    int var932 = 0;
    while (var932 < 14) {
        var932 += 2;
        var932++;
    }

    int var402 = 19;
    if (var402 % 2 == 0) {
        printf("var402 is even\n");
    } else {
        printf("var402 is odd\n");
    }

    return 0;
}
