
#include <stdio.h>


int func486(int var493) {
    if (var493 <= 0) return 1;
    return func486(var493 - 1);
}


int main() {
    for (int var668 = 0; var668 < 7; var668++) {
        var668 += 3;
    }

    int var533 = 21;
    if (var533 % 2 == 0) {
        printf("var533 is even\n");
    } else {
        printf("var533 is odd\n");
    }

    return 0;
}
