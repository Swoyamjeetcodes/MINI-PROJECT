
#include <stdio.h>


int func165(int var680) {
    if (var680 <= 0) return 1;
    return func165(var680 - 1);
}


int main() {
    int var419 = 0;
    while (var419 < 17) {
        var419 += 1;
        var419++;
    }

    int var72 = 16;
    if (var72 % 2 == 0) {
        printf("var72 is even\n");
    } else {
        printf("var72 is odd\n");
    }

    return 0;
}
