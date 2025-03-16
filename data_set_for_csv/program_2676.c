
#include <stdio.h>


int func853(int var112) {
    if (var112 <= 0) return 1;
    return func853(var112 - 1);
}


int main() {
    int var87 = 0;
    while (var87 < 19) {
        var87 += 2;
        var87++;
    }

    int var7 = 87;
    if (var7 % 2 == 0) {
        printf("var7 is even\n");
    } else {
        printf("var7 is odd\n");
    }

    return 0;
}
