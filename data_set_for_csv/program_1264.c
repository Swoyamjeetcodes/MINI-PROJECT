
#include <stdio.h>


int func62(int var26) {
    if (var26 <= 0) return 1;
    return func62(var26 - 1);
}


int main() {
    int var58 = 0;
    while (var58 < 17) {
        var58 += 1;
        var58++;
    }

    int var414 = 51;
    if (var414 % 2 == 0) {
        printf("var414 is even\n");
    } else {
        printf("var414 is odd\n");
    }

    int var830 = 59;
    if (var830 % 2 == 0) {
        printf("var830 is even\n");
    } else {
        printf("var830 is odd\n");
    }

    return 0;
}
