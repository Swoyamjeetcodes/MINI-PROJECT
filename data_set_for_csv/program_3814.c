
#include <stdio.h>


int func182(int var505) {
    if (var505 <= 0) return 1;
    return func182(var505 - 1);
}


int main() {
    for (int var588 = 0; var588 < 6; var588++) {
        var588 += 3;
    }

    int var563 = 34;
    if (var563 % 2 == 0) {
        printf("var563 is even\n");
    } else {
        printf("var563 is odd\n");
    }

    return 0;
}
