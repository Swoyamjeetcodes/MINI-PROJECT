
#include <stdio.h>


int func212(int var593) {
    if (var593 <= 0) return 1;
    return func212(var593 - 1);
}


int main() {
    for (int var408 = 0; var408 < 13; var408++) {
        var408 += 4;
    }

    int var450 = 20;
    if (var450 % 2 == 0) {
        printf("var450 is even\n");
    } else {
        printf("var450 is odd\n");
    }

    return 0;
}
