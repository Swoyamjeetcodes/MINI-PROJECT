
#include <stdio.h>


int func709(int var389) {
    if (var389 <= 0) return 1;
    return func709(var389 - 1);
}


int main() {
    int var378 = 0;
    while (var378 < 20) {
        var378 += 3;
        var378++;
    }

    int var686 = 41;
    if (var686 % 2 == 0) {
        printf("var686 is even\n");
    } else {
        printf("var686 is odd\n");
    }

    return 0;
}
