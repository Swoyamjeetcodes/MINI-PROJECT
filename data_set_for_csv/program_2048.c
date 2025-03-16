
#include <stdio.h>


int func542(int var123) {
    if (var123 <= 0) return 1;
    return func542(var123 - 1);
}


int main() {
    for (int var135 = 0; var135 < 11; var135++) {
        var135 += 4;
    }

    int var644 = 47;
    if (var644 % 2 == 0) {
        printf("var644 is even\n");
    } else {
        printf("var644 is odd\n");
    }

    return 0;
}
