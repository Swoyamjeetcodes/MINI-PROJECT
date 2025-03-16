
#include <stdio.h>


int func537(int var808) {
    if (var808 <= 0) return 1;
    return func537(var808 - 1);
}


int main() {
    for (int var357 = 0; var357 < 9; var357++) {
        var357 += 2;
    }

    int var600 = 99;
    if (var600 % 2 == 0) {
        printf("var600 is even\n");
    } else {
        printf("var600 is odd\n");
    }

    return 0;
}
