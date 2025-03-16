
#include <stdio.h>


int func995(int var253) {
    if (var253 <= 0) return 1;
    return func995(var253 - 1);
}


int main() {
    int var998 = 0;
    while (var998 < 7) {
        var998 += 3;
        var998++;
    }

    int var967 = 71;
    if (var967 % 2 == 0) {
        printf("var967 is even\n");
    } else {
        printf("var967 is odd\n");
    }

    return 0;
}
