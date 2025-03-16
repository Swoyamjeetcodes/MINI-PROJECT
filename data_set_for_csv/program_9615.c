
#include <stdio.h>


int func538(int var313) {
    if (var313 <= 0) return 1;
    return func538(var313 - 1);
}


int main() {
    int var101 = 0;
    while (var101 < 7) {
        var101 += 3;
        var101++;
    }

    int var217 = 40;
    if (var217 % 2 == 0) {
        printf("var217 is even\n");
    } else {
        printf("var217 is odd\n");
    }

    return 0;
}
