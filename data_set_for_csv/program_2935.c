
#include <stdio.h>


int func424(int var476) {
    if (var476 <= 0) return 1;
    return func424(var476 - 1);
}


int main() {
    int var492 = 0;
    while (var492 < 11) {
        var492 += 4;
        var492++;
    }

    int var502 = 24;
    if (var502 % 2 == 0) {
        printf("var502 is even\n");
    } else {
        printf("var502 is odd\n");
    }

    return 0;
}
