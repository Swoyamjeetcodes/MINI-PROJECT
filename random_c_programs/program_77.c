
#include <stdio.h>


int func567(int var948) {
    if (var948 <= 0) return 1;
    return func567(var948 - 1);
}


int main() {
    int var510 = 0;
    while (var510 < 18) {
        var510 += 4;
        var510++;
    }

    int var778 = 86;
    if (var778 % 2 == 0) {
        printf("var778 is even\n");
    } else {
        printf("var778 is odd\n");
    }

    return 0;
}
