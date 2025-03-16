
#include <stdio.h>


int func669(int var636) {
    if (var636 <= 0) return 1;
    return func669(var636 - 1);
}


int main() {
    for (int var12 = 0; var12 < 18; var12++) {
        var12 += 4;
    }

    int var723 = 79;
    if (var723 % 2 == 0) {
        printf("var723 is even\n");
    } else {
        printf("var723 is odd\n");
    }

    return 0;
}
