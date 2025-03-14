
#include <stdio.h>


int func990(int var45) {
    if (var45 <= 0) return 1;
    return func990(var45 - 1);
}


int main() {
    int var35 = 0;
    while (var35 < 11) {
        var35 += 5;
        var35++;
    }

    int var298 = 96;
    if (var298 % 2 == 0) {
        printf("var298 is even\n");
    } else {
        printf("var298 is odd\n");
    }

    return 0;
}
