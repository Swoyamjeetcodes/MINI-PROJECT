
#include <stdio.h>


int func89(int var389) {
    if (var389 <= 0) return 1;
    return func89(var389 - 1);
}


int main() {
    for (int var811 = 0; var811 < 7; var811++) {
        var811 += 1;
    }

    int var673 = 33;
    if (var673 % 2 == 0) {
        printf("var673 is even\n");
    } else {
        printf("var673 is odd\n");
    }

    return 0;
}
