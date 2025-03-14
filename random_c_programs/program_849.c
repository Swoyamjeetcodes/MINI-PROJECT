
#include <stdio.h>


int func158(int var86) {
    if (var86 <= 0) return 1;
    return func158(var86 - 1);
}


int main() {
    int var631 = 0;
    while (var631 < 12) {
        var631 += 2;
        var631++;
    }

    int var266 = 77;
    if (var266 % 2 == 0) {
        printf("var266 is even\n");
    } else {
        printf("var266 is odd\n");
    }

    return 0;
}
