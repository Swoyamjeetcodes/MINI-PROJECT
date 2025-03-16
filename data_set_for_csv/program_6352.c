
#include <stdio.h>


int func639(int var287) {
    if (var287 <= 0) return 1;
    return func639(var287 - 1);
}


int main() {
    for (int var668 = 0; var668 < 16; var668++) {
        var668 += 3;
    }

    int var70 = 88;
    if (var70 % 2 == 0) {
        printf("var70 is even\n");
    } else {
        printf("var70 is odd\n");
    }

    return 0;
}
