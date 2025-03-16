
#include <stdio.h>


int func281(int var474) {
    if (var474 <= 0) return 1;
    return func281(var474 - 1);
}


int main() {
    int var390 = 0;
    while (var390 < 6) {
        var390 += 2;
        var390++;
    }

    int var810 = 55;
    if (var810 % 2 == 0) {
        printf("var810 is even\n");
    } else {
        printf("var810 is odd\n");
    }

    return 0;
}
