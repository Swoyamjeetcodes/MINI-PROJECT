
#include <stdio.h>


int func133(int var336) {
    if (var336 <= 0) return 1;
    return func133(var336 - 1);
}


int main() {
    for (int var661 = 0; var661 < 10; var661++) {
        var661 += 4;
    }

    int var982 = 56;
    if (var982 % 2 == 0) {
        printf("var982 is even\n");
    } else {
        printf("var982 is odd\n");
    }

    return 0;
}
