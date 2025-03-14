
#include <stdio.h>


int func995(int var672) {
    if (var672 <= 0) return 1;
    return func995(var672 - 1);
}


int main() {
    int var655 = 0;
    while (var655 < 15) {
        var655 += 3;
        var655++;
    }

    int var652 = 38;
    if (var652 % 2 == 0) {
        printf("var652 is even\n");
    } else {
        printf("var652 is odd\n");
    }

    return 0;
}
