
#include <stdio.h>


int func783(int var900) {
    if (var900 <= 0) return 1;
    return func783(var900 - 1);
}


int main() {
    int var24 = 0;
    while (var24 < 16) {
        var24 += 4;
        var24++;
    }

    int var268 = 36;
    if (var268 % 2 == 0) {
        printf("var268 is even\n");
    } else {
        printf("var268 is odd\n");
    }

    return 0;
}
