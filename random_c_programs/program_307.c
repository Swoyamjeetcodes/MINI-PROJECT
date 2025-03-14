
#include <stdio.h>


int func420(int var593) {
    if (var593 <= 0) return 1;
    return func420(var593 - 1);
}


int main() {
    for (int var346 = 0; var346 < 13; var346++) {
        var346 += 1;
    }

    int var67 = 46;
    if (var67 % 2 == 0) {
        printf("var67 is even\n");
    } else {
        printf("var67 is odd\n");
    }

    int var443 = 17;
    if (var443 % 2 == 0) {
        printf("var443 is even\n");
    } else {
        printf("var443 is odd\n");
    }

    return 0;
}
