
#include <stdio.h>


int func562(int var435) {
    if (var435 <= 0) return 1;
    return func562(var435 - 1);
}


int main() {
    int var577 = 0;
    while (var577 < 14) {
        var577 += 2;
        var577++;
    }

    int var127 = 7;
    if (var127 % 2 == 0) {
        printf("var127 is even\n");
    } else {
        printf("var127 is odd\n");
    }

    return 0;
}
