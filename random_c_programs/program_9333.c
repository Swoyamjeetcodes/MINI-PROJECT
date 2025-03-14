
#include <stdio.h>


int func514(int var891) {
    if (var891 <= 0) return 1;
    return func514(var891 - 1);
}


int main() {
    int var476 = 0;
    while (var476 < 12) {
        var476 += 4;
        var476++;
    }

    int var933 = 75;
    if (var933 % 2 == 0) {
        printf("var933 is even\n");
    } else {
        printf("var933 is odd\n");
    }

    return 0;
}
