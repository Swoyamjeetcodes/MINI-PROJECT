
#include <stdio.h>


int func102(int var388) {
    if (var388 <= 0) return 1;
    return func102(var388 - 1);
}


int main() {
    for (int var563 = 0; var563 < 19; var563++) {
        var563 += 5;
    }

    int var972 = 6;
    if (var972 % 2 == 0) {
        printf("var972 is even\n");
    } else {
        printf("var972 is odd\n");
    }

    return 0;
}
