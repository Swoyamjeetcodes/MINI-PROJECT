
#include <stdio.h>


int func292(int var24) {
    if (var24 <= 0) return 1;
    return func292(var24 - 1);
}


int main() {
    int var605 = 0;
    while (var605 < 10) {
        var605 += 4;
        var605++;
    }

    int var948 = 89;
    if (var948 % 2 == 0) {
        printf("var948 is even\n");
    } else {
        printf("var948 is odd\n");
    }

    return 0;
}
