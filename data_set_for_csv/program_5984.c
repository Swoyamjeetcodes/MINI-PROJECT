
#include <stdio.h>


int func451(int var280) {
    if (var280 <= 0) return 1;
    return func451(var280 - 1);
}


int main() {
    int var14 = 0;
    while (var14 < 8) {
        var14 += 5;
        var14++;
    }

    int var783 = 28;
    if (var783 % 2 == 0) {
        printf("var783 is even\n");
    } else {
        printf("var783 is odd\n");
    }

    return 0;
}
