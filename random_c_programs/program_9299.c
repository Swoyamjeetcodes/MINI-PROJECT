
#include <stdio.h>


int func716(int var370) {
    if (var370 <= 0) return 1;
    return func716(var370 - 1);
}


int main() {
    int var99 = 0;
    while (var99 < 17) {
        var99 += 4;
        var99++;
    }

    int var160 = 3;
    if (var160 % 2 == 0) {
        printf("var160 is even\n");
    } else {
        printf("var160 is odd\n");
    }

    return 0;
}
