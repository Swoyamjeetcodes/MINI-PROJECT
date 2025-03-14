
#include <stdio.h>


int func768(int var363) {
    if (var363 <= 0) return 1;
    return func768(var363 - 1);
}


int main() {
    int var834 = 0;
    while (var834 < 12) {
        var834 += 5;
        var834++;
    }

    int var345 = 7;
    if (var345 % 2 == 0) {
        printf("var345 is even\n");
    } else {
        printf("var345 is odd\n");
    }

    return 0;
}
