
#include <stdio.h>


int func337(int var327) {
    if (var327 <= 0) return 1;
    return func337(var327 - 1);
}


int main() {
    int var702 = 0;
    while (var702 < 11) {
        var702 += 5;
        var702++;
    }

    int var86 = 85;
    if (var86 % 2 == 0) {
        printf("var86 is even\n");
    } else {
        printf("var86 is odd\n");
    }

    return 0;
}
