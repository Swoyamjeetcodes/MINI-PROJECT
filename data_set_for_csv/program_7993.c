
#include <stdio.h>


int func692(int var691) {
    if (var691 <= 0) return 1;
    return func692(var691 - 1);
}


int main() {
    for (int var668 = 0; var668 < 14; var668++) {
        var668 += 1;
    }

    int var667 = 32;
    if (var667 % 2 == 0) {
        printf("var667 is even\n");
    } else {
        printf("var667 is odd\n");
    }

    return 0;
}
