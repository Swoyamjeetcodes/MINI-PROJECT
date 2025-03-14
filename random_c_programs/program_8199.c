
#include <stdio.h>


int func714(int var789) {
    if (var789 <= 0) return 1;
    return func714(var789 - 1);
}


int main() {
    int var39 = 0;
    while (var39 < 12) {
        var39 += 2;
        var39++;
    }

    int var804 = 95;
    if (var804 % 2 == 0) {
        printf("var804 is even\n");
    } else {
        printf("var804 is odd\n");
    }

    return 0;
}
