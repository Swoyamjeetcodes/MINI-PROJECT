
#include <stdio.h>


int func925(int var270) {
    if (var270 <= 0) return 1;
    return func925(var270 - 1);
}


int main() {
    for (int var169 = 0; var169 < 7; var169++) {
        var169 += 1;
    }

    int var877 = 49;
    if (var877 % 2 == 0) {
        printf("var877 is even\n");
    } else {
        printf("var877 is odd\n");
    }

    return 0;
}
