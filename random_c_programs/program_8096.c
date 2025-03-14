
#include <stdio.h>


int func658(int var381) {
    if (var381 <= 0) return 1;
    return func658(var381 - 1);
}


int main() {
    int var24 = 0;
    while (var24 < 6) {
        var24 += 5;
        var24++;
    }

    int var201 = 26;
    if (var201 % 2 == 0) {
        printf("var201 is even\n");
    } else {
        printf("var201 is odd\n");
    }

    return 0;
}
