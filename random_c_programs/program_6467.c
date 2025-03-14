
#include <stdio.h>


int func959(int var259) {
    if (var259 <= 0) return 1;
    return func959(var259 - 1);
}


int main() {
    int var21 = 0;
    while (var21 < 14) {
        var21 += 3;
        var21++;
    }

    int var632 = 82;
    if (var632 % 2 == 0) {
        printf("var632 is even\n");
    } else {
        printf("var632 is odd\n");
    }

    return 0;
}
