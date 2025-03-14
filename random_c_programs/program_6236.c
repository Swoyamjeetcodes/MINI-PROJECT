
#include <stdio.h>


int func333(int var692) {
    if (var692 <= 0) return 1;
    return func333(var692 - 1);
}


int main() {
    int var476 = 0;
    while (var476 < 7) {
        var476 += 4;
        var476++;
    }

    int var513 = 81;
    if (var513 % 2 == 0) {
        printf("var513 is even\n");
    } else {
        printf("var513 is odd\n");
    }

    return 0;
}
