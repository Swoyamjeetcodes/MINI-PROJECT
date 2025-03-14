
#include <stdio.h>


int func625(int var518) {
    if (var518 <= 0) return 1;
    return func625(var518 - 1);
}


int main() {
    int var585 = 0;
    while (var585 < 12) {
        var585 += 4;
        var585++;
    }

    int var208 = 79;
    if (var208 % 2 == 0) {
        printf("var208 is even\n");
    } else {
        printf("var208 is odd\n");
    }

    return 0;
}
