
#include <stdio.h>


int func478(int var798) {
    if (var798 <= 0) return 1;
    return func478(var798 - 1);
}


int main() {
    for (int var50 = 0; var50 < 7; var50++) {
        var50 += 3;
    }

    int var323 = 98;
    if (var323 % 2 == 0) {
        printf("var323 is even\n");
    } else {
        printf("var323 is odd\n");
    }

    return 0;
}
