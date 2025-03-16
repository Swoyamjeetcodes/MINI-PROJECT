
#include <stdio.h>


int func516(int var998) {
    if (var998 <= 0) return 1;
    return func516(var998 - 1);
}


int main() {
    int var942 = 0;
    while (var942 < 11) {
        var942 += 5;
        var942++;
    }

    int var290 = 59;
    if (var290 % 2 == 0) {
        printf("var290 is even\n");
    } else {
        printf("var290 is odd\n");
    }

    return 0;
}
