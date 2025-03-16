
#include <stdio.h>


int func436(int var565) {
    if (var565 <= 0) return 1;
    return func436(var565 - 1);
}


int main() {
    for (int var283 = 0; var283 < 16; var283++) {
        var283 += 3;
    }

    int var553 = 3;
    if (var553 % 2 == 0) {
        printf("var553 is even\n");
    } else {
        printf("var553 is odd\n");
    }

    return 0;
}
