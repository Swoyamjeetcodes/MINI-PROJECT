
#include <stdio.h>


int func524(int var883) {
    if (var883 <= 0) return 1;
    return func524(var883 - 1);
}


int main() {
    int var755 = 0;
    while (var755 < 6) {
        var755 += 5;
        var755++;
    }    int var946 = 0;
    while (var946 < 16) {
        var946 += 5;
        var946++;
    }

    int var20 = 30;
    if (var20 % 2 == 0) {
        printf("var20 is even\n");
    } else {
        printf("var20 is odd\n");
    }

    int var556 = 27;
    if (var556 % 2 == 0) {
        printf("var556 is even\n");
    } else {
        printf("var556 is odd\n");
    }

    return 0;
}
