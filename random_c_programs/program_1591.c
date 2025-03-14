
#include <stdio.h>


int func15(int var563) {
    if (var563 <= 0) return 1;
    return func15(var563 - 1);
}


int main() {
    int var329 = 0;
    while (var329 < 9) {
        var329 += 2;
        var329++;
    }

    int var671 = 61;
    if (var671 % 2 == 0) {
        printf("var671 is even\n");
    } else {
        printf("var671 is odd\n");
    }

    return 0;
}
