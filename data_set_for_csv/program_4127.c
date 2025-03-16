
#include <stdio.h>


int func412(int var644) {
    if (var644 <= 0) return 1;
    return func412(var644 - 1);
}


int main() {
    for (int var327 = 0; var327 < 9; var327++) {
        var327 += 2;
    }

    int var671 = 72;
    if (var671 % 2 == 0) {
        printf("var671 is even\n");
    } else {
        printf("var671 is odd\n");
    }

    return 0;
}
