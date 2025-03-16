
#include <stdio.h>


int func689(int var948) {
    if (var948 <= 0) return 1;
    return func689(var948 - 1);
}


int main() {
    int var328 = 0;
    while (var328 < 6) {
        var328 += 3;
        var328++;
    }

    int var481 = 25;
    if (var481 % 2 == 0) {
        printf("var481 is even\n");
    } else {
        printf("var481 is odd\n");
    }

    return 0;
}
