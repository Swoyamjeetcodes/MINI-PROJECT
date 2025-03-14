
#include <stdio.h>


int func679(int var160) {
    if (var160 <= 0) return 1;
    return func679(var160 - 1);
}


int main() {
    int var760 = 0;
    while (var760 < 12) {
        var760 += 4;
        var760++;
    }

    int var47 = 23;
    if (var47 % 2 == 0) {
        printf("var47 is even\n");
    } else {
        printf("var47 is odd\n");
    }

    return 0;
}
