
#include <stdio.h>


int func629(int var515) {
    if (var515 <= 0) return 1;
    return func629(var515 - 1);
}


int main() {
    int var765 = 0;
    while (var765 < 7) {
        var765 += 1;
        var765++;
    }

    int var553 = 58;
    if (var553 % 2 == 0) {
        printf("var553 is even\n");
    } else {
        printf("var553 is odd\n");
    }

    return 0;
}
