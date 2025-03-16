
#include <stdio.h>


int func458(int var474) {
    if (var474 <= 0) return 1;
    return func458(var474 - 1);
}


int main() {
    int var858 = 0;
    while (var858 < 6) {
        var858 += 4;
        var858++;
    }

    int var948 = 96;
    if (var948 % 2 == 0) {
        printf("var948 is even\n");
    } else {
        printf("var948 is odd\n");
    }

    return 0;
}
