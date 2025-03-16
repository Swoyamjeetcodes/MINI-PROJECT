
#include <stdio.h>


int func289(int var811) {
    if (var811 <= 0) return 1;
    return func289(var811 - 1);
}


int main() {
    int var476 = 0;
    while (var476 < 16) {
        var476 += 3;
        var476++;
    }

    int var714 = 50;
    if (var714 % 2 == 0) {
        printf("var714 is even\n");
    } else {
        printf("var714 is odd\n");
    }

    return 0;
}
