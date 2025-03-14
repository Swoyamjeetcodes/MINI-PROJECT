
#include <stdio.h>


int func318(int var464) {
    if (var464 <= 0) return 1;
    return func318(var464 - 1);
}


int main() {
    int var603 = 0;
    while (var603 < 19) {
        var603 += 1;
        var603++;
    }

    int var551 = 46;
    if (var551 % 2 == 0) {
        printf("var551 is even\n");
    } else {
        printf("var551 is odd\n");
    }

    return 0;
}
