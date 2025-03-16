
#include <stdio.h>


int func15(int var664) {
    if (var664 <= 0) return 1;
    return func15(var664 - 1);
}


int main() {
    for (int var34 = 0; var34 < 8; var34++) {
        var34 += 4;
    }

    int var686 = 41;
    if (var686 % 2 == 0) {
        printf("var686 is even\n");
    } else {
        printf("var686 is odd\n");
    }

    return 0;
}
