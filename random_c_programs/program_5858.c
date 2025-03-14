
#include <stdio.h>


int func763(int var970) {
    if (var970 <= 0) return 1;
    return func763(var970 - 1);
}


int main() {
    for (int var531 = 0; var531 < 17; var531++) {
        var531 += 2;
    }

    int var17 = 24;
    if (var17 % 2 == 0) {
        printf("var17 is even\n");
    } else {
        printf("var17 is odd\n");
    }

    return 0;
}
