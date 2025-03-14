
#include <stdio.h>


int func436(int var888) {
    if (var888 <= 0) return 1;
    return func436(var888 - 1);
}


int main() {
    int var253 = 0;
    while (var253 < 14) {
        var253 += 3;
        var253++;
    }

    int var598 = 80;
    if (var598 % 2 == 0) {
        printf("var598 is even\n");
    } else {
        printf("var598 is odd\n");
    }

    int var909 = 64;
    if (var909 % 2 == 0) {
        printf("var909 is even\n");
    } else {
        printf("var909 is odd\n");
    }

    return 0;
}
