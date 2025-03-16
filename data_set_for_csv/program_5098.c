
#include <stdio.h>


int func99(int var450) {
    if (var450 <= 0) return 1;
    return func99(var450 - 1);
}


int main() {
    for (int var790 = 0; var790 < 16; var790++) {
        var790 += 3;
    }

    int var18 = 14;
    if (var18 % 2 == 0) {
        printf("var18 is even\n");
    } else {
        printf("var18 is odd\n");
    }

    return 0;
}
