
#include <stdio.h>


int func332(int var691) {
    if (var691 <= 0) return 1;
    return func332(var691 - 1);
}


int main() {
    int var695 = 0;
    while (var695 < 20) {
        var695 += 2;
        var695++;
    }

    int var620 = 72;
    if (var620 % 2 == 0) {
        printf("var620 is even\n");
    } else {
        printf("var620 is odd\n");
    }

    return 0;
}
