
#include <stdio.h>


int func455(int var662) {
    if (var662 <= 0) return 1;
    return func455(var662 - 1);
}


int main() {
    int var214 = 0;
    while (var214 < 5) {
        var214 += 4;
        var214++;
    }

    int var419 = 60;
    if (var419 % 2 == 0) {
        printf("var419 is even\n");
    } else {
        printf("var419 is odd\n");
    }

    return 0;
}
