
#include <stdio.h>


int func360(int var239) {
    if (var239 <= 0) return 1;
    return func360(var239 - 1);
}


int main() {
    int var402 = 0;
    while (var402 < 7) {
        var402 += 5;
        var402++;
    }

    int var324 = 34;
    if (var324 % 2 == 0) {
        printf("var324 is even\n");
    } else {
        printf("var324 is odd\n");
    }

    return 0;
}
