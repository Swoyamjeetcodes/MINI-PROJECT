
#include <stdio.h>


int func210(int var573) {
    if (var573 <= 0) return 1;
    return func210(var573 - 1);
}


int main() {
    int var65 = 0;
    while (var65 < 13) {
        var65 += 3;
        var65++;
    }

    int var598 = 26;
    if (var598 % 2 == 0) {
        printf("var598 is even\n");
    } else {
        printf("var598 is odd\n");
    }

    return 0;
}
