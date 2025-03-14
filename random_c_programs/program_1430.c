
#include <stdio.h>


int func998(int var387) {
    if (var387 <= 0) return 1;
    return func998(var387 - 1);
}


int main() {
    int var90 = 0;
    while (var90 < 6) {
        var90 += 4;
        var90++;
    }

    int var486 = 54;
    if (var486 % 2 == 0) {
        printf("var486 is even\n");
    } else {
        printf("var486 is odd\n");
    }

    return 0;
}
