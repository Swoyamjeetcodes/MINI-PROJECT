
#include <stdio.h>


int func774(int var2) {
    if (var2 <= 0) return 1;
    return func774(var2 - 1);
}


int main() {
    int var550 = 0;
    while (var550 < 12) {
        var550 += 1;
        var550++;
    }

    int var39 = 38;
    if (var39 % 2 == 0) {
        printf("var39 is even\n");
    } else {
        printf("var39 is odd\n");
    }

    return 0;
}
