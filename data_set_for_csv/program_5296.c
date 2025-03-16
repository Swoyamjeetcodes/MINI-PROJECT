
#include <stdio.h>


int func591(int var884) {
    if (var884 <= 0) return 1;
    return func591(var884 - 1);
}


int main() {
    int var935 = 0;
    while (var935 < 14) {
        var935 += 3;
        var935++;
    }

    int var495 = 39;
    if (var495 % 2 == 0) {
        printf("var495 is even\n");
    } else {
        printf("var495 is odd\n");
    }

    return 0;
}
