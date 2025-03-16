
#include <stdio.h>


int func480(int var461) {
    if (var461 <= 0) return 1;
    return func480(var461 - 1);
}


int main() {
    int var111 = 0;
    while (var111 < 20) {
        var111 += 1;
        var111++;
    }

    int var533 = 69;
    if (var533 % 2 == 0) {
        printf("var533 is even\n");
    } else {
        printf("var533 is odd\n");
    }

    return 0;
}
