
#include <stdio.h>


int func359(int var533) {
    if (var533 <= 0) return 1;
    return func359(var533 - 1);
}


int main() {
    int var446 = 0;
    while (var446 < 11) {
        var446 += 3;
        var446++;
    }

    int var55 = 74;
    if (var55 % 2 == 0) {
        printf("var55 is even\n");
    } else {
        printf("var55 is odd\n");
    }

    return 0;
}
