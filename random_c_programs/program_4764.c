
#include <stdio.h>


int func105(int var494) {
    if (var494 <= 0) return 1;
    return func105(var494 - 1);
}


int main() {
    int var999 = 0;
    while (var999 < 12) {
        var999 += 5;
        var999++;
    }

    int var948 = 68;
    if (var948 % 2 == 0) {
        printf("var948 is even\n");
    } else {
        printf("var948 is odd\n");
    }

    return 0;
}
