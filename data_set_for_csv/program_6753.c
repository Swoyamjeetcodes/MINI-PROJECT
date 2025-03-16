
#include <stdio.h>


int func97(int var453) {
    if (var453 <= 0) return 1;
    return func97(var453 - 1);
}


int main() {
    for (int var55 = 0; var55 < 7; var55++) {
        var55 += 4;
    }

    int var665 = 67;
    if (var665 % 2 == 0) {
        printf("var665 is even\n");
    } else {
        printf("var665 is odd\n");
    }

    return 0;
}
