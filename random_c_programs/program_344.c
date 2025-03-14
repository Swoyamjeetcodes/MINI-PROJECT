
#include <stdio.h>


int func325(int var829) {
    if (var829 <= 0) return 1;
    return func325(var829 - 1);
}


int main() {
    for (int var370 = 0; var370 < 16; var370++) {
        var370 += 4;
    }

    int var235 = 66;
    if (var235 % 2 == 0) {
        printf("var235 is even\n");
    } else {
        printf("var235 is odd\n");
    }

    return 0;
}
