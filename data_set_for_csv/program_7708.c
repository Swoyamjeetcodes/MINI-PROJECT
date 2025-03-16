
#include <stdio.h>


int func607(int var850) {
    if (var850 <= 0) return 1;
    return func607(var850 - 1);
}


int main() {
    int var99 = 0;
    while (var99 < 15) {
        var99 += 4;
        var99++;
    }

    int var730 = 23;
    if (var730 % 2 == 0) {
        printf("var730 is even\n");
    } else {
        printf("var730 is odd\n");
    }

    return 0;
}
