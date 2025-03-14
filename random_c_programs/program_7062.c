
#include <stdio.h>


int func477(int var359) {
    if (var359 <= 0) return 1;
    return func477(var359 - 1);
}


int main() {
    int var988 = 0;
    while (var988 < 9) {
        var988 += 2;
        var988++;
    }

    int var948 = 78;
    if (var948 % 2 == 0) {
        printf("var948 is even\n");
    } else {
        printf("var948 is odd\n");
    }

    return 0;
}
