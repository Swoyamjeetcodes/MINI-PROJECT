
#include <stdio.h>


int func100(int var783) {
    if (var783 <= 0) return 1;
    return func100(var783 - 1);
}


int main() {
    for (int var970 = 0; var970 < 5; var970++) {
        var970 += 3;
    }

    int var542 = 77;
    if (var542 % 2 == 0) {
        printf("var542 is even\n");
    } else {
        printf("var542 is odd\n");
    }

    return 0;
}
