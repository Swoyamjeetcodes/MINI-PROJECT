
#include <stdio.h>


int func963(int var310) {
    if (var310 <= 0) return 1;
    return func963(var310 - 1);
}


int main() {
    int var199 = 0;
    while (var199 < 6) {
        var199 += 5;
        var199++;
    }

    int var468 = 5;
    if (var468 % 2 == 0) {
        printf("var468 is even\n");
    } else {
        printf("var468 is odd\n");
    }

    return 0;
}
