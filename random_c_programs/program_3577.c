
#include <stdio.h>


int func931(int var25) {
    if (var25 <= 0) return 1;
    return func931(var25 - 1);
}


int main() {
    for (int var366 = 0; var366 < 8; var366++) {
        var366 += 3;
    }

    int var305 = 79;
    if (var305 % 2 == 0) {
        printf("var305 is even\n");
    } else {
        printf("var305 is odd\n");
    }

    return 0;
}
