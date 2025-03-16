
#include <stdio.h>


int func606(int var208) {
    if (var208 <= 0) return 1;
    return func606(var208 - 1);
}


int main() {
    for (int var588 = 0; var588 < 9; var588++) {
        var588 += 3;
    }

    int var940 = 5;
    if (var940 % 2 == 0) {
        printf("var940 is even\n");
    } else {
        printf("var940 is odd\n");
    }

    return 0;
}
