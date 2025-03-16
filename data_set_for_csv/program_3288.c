
#include <stdio.h>


int func82(int var313) {
    if (var313 <= 0) return 1;
    return func82(var313 - 1);
}


int main() {
    int var51 = 0;
    while (var51 < 5) {
        var51 += 3;
        var51++;
    }

    int var474 = 82;
    if (var474 % 2 == 0) {
        printf("var474 is even\n");
    } else {
        printf("var474 is odd\n");
    }

    return 0;
}
