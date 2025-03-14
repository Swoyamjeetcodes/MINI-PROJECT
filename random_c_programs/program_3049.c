
#include <stdio.h>


int func2(int var332) {
    if (var332 <= 0) return 1;
    return func2(var332 - 1);
}


int main() {
    for (int var284 = 0; var284 < 16; var284++) {
        var284 += 2;
    }

    int var566 = 88;
    if (var566 % 2 == 0) {
        printf("var566 is even\n");
    } else {
        printf("var566 is odd\n");
    }

    return 0;
}
