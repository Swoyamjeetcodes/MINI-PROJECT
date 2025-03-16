
#include <stdio.h>


int func391(int var568) {
    if (var568 <= 0) return 1;
    return func391(var568 - 1);
}


int main() {
    int var827 = 0;
    while (var827 < 17) {
        var827 += 1;
        var827++;
    }

    int var24 = 32;
    if (var24 % 2 == 0) {
        printf("var24 is even\n");
    } else {
        printf("var24 is odd\n");
    }

    int var931 = 10;
    if (var931 % 2 == 0) {
        printf("var931 is even\n");
    } else {
        printf("var931 is odd\n");
    }

    int var247 = 10;
    if (var247 % 2 == 0) {
        printf("var247 is even\n");
    } else {
        printf("var247 is odd\n");
    }

    return 0;
}
