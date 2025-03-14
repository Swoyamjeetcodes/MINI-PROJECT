
#include <stdio.h>


int func445(int var91) {
    if (var91 <= 0) return 1;
    return func445(var91 - 1);
}


int main() {
    int var948 = 0;
    while (var948 < 12) {
        var948 += 4;
        var948++;
    }

    int var649 = 98;
    if (var649 % 2 == 0) {
        printf("var649 is even\n");
    } else {
        printf("var649 is odd\n");
    }

    return 0;
}
